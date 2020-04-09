// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME NewStructDictionary
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// The generated code does not explicitly qualifies STL entities
namespace std {} using namespace std;

// Header files passed as explicit arguments
#include "classes.h"

// Header files passed via #pragma extra_include

namespace ROOT {
   static void *new_Hit(void *p = 0);
   static void *newArray_Hit(Long_t size, void *p);
   static void delete_Hit(void *p);
   static void deleteArray_Hit(void *p);
   static void destruct_Hit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Hit*)
   {
      ::Hit *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Hit >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Hit", ::Hit::Class_Version(), "classes.h", 8,
                  typeid(::Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Hit::Dictionary, isa_proxy, 4,
                  sizeof(::Hit) );
      instance.SetNew(&new_Hit);
      instance.SetNewArray(&newArray_Hit);
      instance.SetDelete(&delete_Hit);
      instance.SetDeleteArray(&deleteArray_Hit);
      instance.SetDestructor(&destruct_Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Hit*)
   {
      return GenerateInitInstanceLocal((::Hit*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Hit*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Event(void *p = 0);
   static void *newArray_Event(Long_t size, void *p);
   static void delete_Event(void *p);
   static void deleteArray_Event(void *p);
   static void destruct_Event(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Event*)
   {
      ::Event *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Event >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Event", ::Event::Class_Version(), "classes.h", 109,
                  typeid(::Event), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Event::Dictionary, isa_proxy, 4,
                  sizeof(::Event) );
      instance.SetNew(&new_Event);
      instance.SetNewArray(&newArray_Event);
      instance.SetDelete(&delete_Event);
      instance.SetDeleteArray(&deleteArray_Event);
      instance.SetDestructor(&destruct_Event);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Event*)
   {
      return GenerateInitInstanceLocal((::Event*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Event*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Hit::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Hit::Class_Name()
{
   return "Hit";
}

//______________________________________________________________________________
const char *Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Hit*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Hit*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Hit*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Hit*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Event::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Event::Class_Name()
{
   return "Event";
}

//______________________________________________________________________________
const char *Event::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Event*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Event::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Event*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Event::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Event*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Event::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Event*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class Hit.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Hit::Class(),this);
   } else {
      R__b.WriteClassBuffer(Hit::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Hit(void *p) {
      return  p ? new(p) ::Hit : new ::Hit;
   }
   static void *newArray_Hit(Long_t nElements, void *p) {
      return p ? new(p) ::Hit[nElements] : new ::Hit[nElements];
   }
   // Wrapper around operator delete
   static void delete_Hit(void *p) {
      delete ((::Hit*)p);
   }
   static void deleteArray_Hit(void *p) {
      delete [] ((::Hit*)p);
   }
   static void destruct_Hit(void *p) {
      typedef ::Hit current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Hit

//______________________________________________________________________________
void Event::Streamer(TBuffer &R__b)
{
   // Stream an object of class Event.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Event::Class(),this);
   } else {
      R__b.WriteClassBuffer(Event::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Event(void *p) {
      return  p ? new(p) ::Event : new ::Event;
   }
   static void *newArray_Event(Long_t nElements, void *p) {
      return p ? new(p) ::Event[nElements] : new ::Event[nElements];
   }
   // Wrapper around operator delete
   static void delete_Event(void *p) {
      delete ((::Event*)p);
   }
   static void deleteArray_Event(void *p) {
      delete [] ((::Event*)p);
   }
   static void destruct_Event(void *p) {
      typedef ::Event current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Event

namespace {
  void TriggerDictionaryInitialization_libNewStructure_Impl() {
    static const char* headers[] = {
"classes.h",
0
    };
    static const char* includePaths[] = {
"/cshare/vol2/users/shihkai/sample_code/siva/sFGD_Unpacking_v2.2.2_NewDataStructure/.",
"/cshare/vol2/users/shihkai/sample_code/siva/sFGD_Unpacking_v2.2.2_NewDataStructure/src",
"/cshare/vol2/users/shihkai/anaconda3/envs/root6/include",
"/cshare/vol2/users/shihkai/anaconda3/envs/root6/include/",
"/cshare/vol2/users/shihkai/sample_code/siva/sFGD_Unpacking_v2.2.2_NewDataStructure/build/src/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libNewStructure dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_Autoloading_Map;
class __attribute__((annotate("$clingAutoload$classes.h")))  Hit;
class __attribute__((annotate("$clingAutoload$classes.h")))  Event;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libNewStructure dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "classes.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Event", payloadCode, "@",
"Hit", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libNewStructure",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libNewStructure_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libNewStructure_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libNewStructure() {
  TriggerDictionaryInitialization_libNewStructure_Impl();
}
