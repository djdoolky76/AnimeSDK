#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCCABICIFBN;
class GFFKKABHPGA;
class HPCKCJDCNFM;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA6CED0)
#define GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CA73300)
#define GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMESTATEENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CA73820)
#define GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMESTATEENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CA737B0)
#define GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CA738A0)
#define GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CA73810)
#define GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CA737C0)
#define GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CA732D0)
#define GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1CA732E0)
#define GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1CA732F0)

inline static constexpr unsigned int GFFKKABHPGA___ForEachOverrideLevelActor_d__22_TypeDefinitionIndex = 42530;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22>
	class GFFKKABHPGA___ForEachOverrideLevelActor_d__22 : public ::System::Object
	{
	public:
		::HPCKCJDCNFM* __3__actorEntity; // 0x10
		::HPCKCJDCNFM* actorEntity; // 0x18
		::GFFKKABHPGA* __4__this; // 0x20
		::System::Object* __7__wrap2; // 0x28
		::System::Byte _padding0[0x10];
		::HPCKCJDCNFM* __2__current; // 0x40
		::GCCABICIFBN* _actor_5__2; // 0x48
		::System::Int32 __l__initialThreadId; // 0x50
		::System::Int32 __1__state; // 0x54
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22___M__FINALLY2_OFFSET))(this);
		}

		::HPCKCJDCNFM* System_Collections_Generic_IEnumerator_RPG_Client_LittleGame_TimelineControlGameStateEntity__get_Current()
		{
			return ((::HPCKCJDCNFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMESTATEENTITY__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::HPCKCJDCNFM*>* System_Collections_Generic_IEnumerable_RPG_Client_LittleGame_TimelineControlGameStateEntity__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::HPCKCJDCNFM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMESTATEENTITY__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHOVERRIDELEVELACTOR_D__22_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
