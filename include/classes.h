#ifndef _CLASSES_H_
#define _CLASSES_H_

#include <TObject.h>
#include <TClonesArray.h>


class Hit : public TObject {
private:
    Int_t         fview;            //(0=XY, 1=XZ, 2=ZY)
    Int_t         fX;               //X coordinate of hit
    Int_t         fY;               //Y coordinate of hit
    Int_t         fZ;               //Z coordinate of hit
    Double_t      fCharge;          //Charge_pe of hit
    Double_t      fHG_pe;           //HG_pe of hit
    Double_t      fLG_pe;           //LG_pe of hit
    Double_t      fToT_pe;          //ToT_pe of hit
    Double_t      fHitAmpl;         //Amplitude of hit in ADC
    Double_t      fHitLGAmpl;       //LG Amplitude of hit in ADC
    Double_t      fRE;              //hit lead time
    Double_t      fFE;              //hit trail time
    Double_t      fToT;             //ToT of hit
    Double_t      fDt;              //time difference between trigger and hit time ( FEB[i].hitLeadTime – FEB[12].hitLeadTime )
    Double_t      fSpillTag;        //Spill tag of hit
    Double_t      fFEB;             //FEB
    Double_t      fCh;              //Channel
    Double_t      fTfromSpill;      //hitTimefromSpill
    Double_t      fGTrigTag;        //GTrigTag
    Double_t      fGTrigTime;       //GTrigTime
    Double_t      fSpillTime;       //Spill time
    Double_t      fSpillTrailTime;  //Spill trail time





public:
    Hit(){ };
    virtual ~Hit() { };

    void Clear(Option_t* /*option*/="")
    {
        TObject::Clear();
    }

    //functions to store data
    void SetView(Int_t p_view) {fview = p_view;}
    void SetX(Int_t p_X) {fX = p_X;}
    void SetY(Int_t p_Y) {fY = p_Y;}
    void SetZ(Int_t p_Z) {fZ = p_Z;}
    void SetCharge(Double_t p_Charge) {fCharge = p_Charge;}
    void SetHG_pe(Double_t p_HG) {fHG_pe = p_HG;}
    void SetLG_pe(Double_t p_LG) {fLG_pe = p_LG;}
    void SetToT_pe(Double_t p_ToT) {fToT_pe = p_ToT;}
    void SetHitAmpl(Double_t p_HitAmpl) {fHitAmpl = p_HitAmpl;}
    void SetHitLGAmpl(Double_t p_HitLGAmpl) {fHitLGAmpl = p_HitLGAmpl;}
    void SetRE(Double_t p_RE) {fRE = p_RE;}
    void SetFE(Double_t p_FE) {fFE = p_FE;}
    void SetToT(Double_t p_ToT) {fToT = p_ToT;}
    void SetDt(Double_t p_Dt) {fDt = p_Dt;}
    void SetSpillTag(Double_t p_SpillTag) {fSpillTag = p_SpillTag;}
    void SetFEB(Double_t p_FEB) {fFEB = p_FEB;}
    void SetCh(Double_t p_Ch) {fCh = p_Ch;}
    void SetTfromSpill(Double_t p_TfromSpill) {fTfromSpill = p_TfromSpill;}
    void SetGTrigTag(Double_t p_GTrigTag) {fGTrigTag = p_GTrigTag;}
    void SetGTrigTime(Double_t p_GTrigTime) {fGTrigTime = p_GTrigTime;}
    void SetSpillTime(Double_t p_SpillTime) {fSpillTime = p_SpillTime;}
    void SetSpillTrailTime(Double_t p_SpillTrailTime) {fSpillTrailTime = p_SpillTrailTime;}

    void SetAll(Hit* in);   //used to copy all hit info from one hit to another in the event selection



    //functions to retrieve data
    Int_t GetView() {return fview;}
    Int_t GetX() {return fX;}
    Int_t GetY() {return fY;}
    Int_t GetZ() {return fZ;}
    Double_t GetCharge() {return fCharge;}
    Double_t GetHG_pe() {return fHG_pe;}
    Double_t GetLG_pe() {return fLG_pe;}
    Double_t GetToT_pe() {return fToT_pe;}
    Double_t GetHitAmpl() {return fHitAmpl;}
    Double_t GetHitLGAmpl() {return fHitLGAmpl;}
    Double_t GetRE() {return fRE;}
    Double_t GetFE() {return fFE;}
    Double_t GetToT() {return fToT;}
    Double_t GetDt() {return fDt;}
    Double_t GetSpillTag() {return fSpillTag;}
    Double_t GetFEB() {return fFEB;}
    Double_t GetCh() {return fCh;}
    Double_t GetTfromSpill() {return fTfromSpill;}
    Double_t GetGTrigTag() {return fGTrigTag;}
    Double_t GetGTrigTime() {return fGTrigTime;}
    Double_t GetSpillTime() {return fSpillTime;}
    Double_t GetSpillTrailTime() {return fSpillTrailTime;}





    ClassDef(Hit,1);
};





class Event : public TObject {

private:
    TClonesArray*    fHits;
    Int_t            fNHits;                  //Number of hits in the event
    ULong_t          fEventID;                //Number of the event
    Double_t         fMaxCharge;              //Maximum energy in the event
    Int_t            fFEB12ch;                //FEB 12 channel
    Double_t         fFEB12LeadTime;          //lead time of FEB12 trigger
    Double_t         fFEB12HitTimeFromSpill;  //hit time from spill of FEB12
    Int_t            fOccupancyXZ[48];        //Occupancy per layer of Z in the XZ view
    Int_t            fOccupancyZY[48];        //Occupancy per layer of Z in the ZY view
    Double_t         fdEdzXZ[48];             //Energy loss along Z in XZ plane
    Double_t         fdEdzZY[48];             //Energy loss along Z in ZY plane
    Double_t         fdEdz[48];               //Energy loss along Z in both XZ and ZY planes (sum)
    Int_t            fRange;                  //last layer reached by the particle


public:
    Event()
    {
        fNHits = 0;
        fHits  = new TClonesArray("Hit", 10000);
    }

    virtual ~Event ()
    {
        Reset(0);
    }

    //functions to store data
    void SetEventID(Int_t p_fEventID) { fEventID = p_fEventID; }
    void SetMaxCharge(Int_t p_MaxCharge) {fMaxCharge = p_MaxCharge;}
    void SetOccupancyXZ(Int_t p_Z, Int_t p_N) {fOccupancyXZ[p_Z] = p_N; }
    void SetOccupancyZY(Int_t p_Z, Int_t p_N) {fOccupancyZY[p_Z] = p_N; }
    void SetdEdzXZ(Int_t p_Z, Double_t p_E) {fdEdzXZ[p_Z] = p_E; }
    void SetdEdzZY(Int_t p_Z, Double_t p_E) {fdEdzZY[p_Z] = p_E; }
    void SetdEdz(Int_t p_Z, Double_t p_E) {fdEdz[p_Z] = p_E; }
    void SetRange(Int_t p_Z) {fRange = p_Z; }
    void SetFEB12ch(Double_t p_FEB12ch) {fFEB12ch = p_FEB12ch;}
    void SetFEB12LeadTime(Int_t p_FEB12LeadTime) {fFEB12LeadTime = p_FEB12LeadTime;}
    void SetFEB12HitTimeFromSpill(Int_t p_FEB12HitTimeFromSpill) {fFEB12HitTimeFromSpill = p_FEB12HitTimeFromSpill;}

    //functions to retrieve data
    TClonesArray *GetHits() const {return fHits;}
    Int_t GetNHits()  const { return fNHits; }
    ULong_t GetEventID() {return fEventID; }
    Double_t GetMaxCharge() {return fMaxCharge; }
    Int_t GetFEB12ch() {return fFEB12ch;}
    Double_t GetFEB12LeadTime() {return fFEB12LeadTime;}
    Double_t GetFEB12HitTimeFromSpill() {return fFEB12HitTimeFromSpill;}
    Int_t GetOccupancyXZ(Int_t p_Z) {return fOccupancyXZ[p_Z];}
    Int_t GetOccupancyZY(Int_t p_Z) {return fOccupancyZY[p_Z];}
    Double_t GetdEdzXZ(Int_t p_Z) {return fdEdzXZ[p_Z];}
    Double_t GetdEdzZY(Int_t p_Z) {return fdEdzZY[p_Z];}
    Double_t GetdEdz(Int_t p_Z) {return fdEdz[p_Z];}
    Int_t GetRange() {return fRange;}



    void Clear(Option_t *option="");
    Hit* AddHit();
    Double_t FindMaxCharge();


    void Reset(Option_t* /*option*/="")
    {
        delete fHits;  fHits = 0;
    }



    ClassDef (Event,1) ;

};



#endif // _CLASSES_H_
