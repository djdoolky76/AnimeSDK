#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class GCCABICIFBN;
class GFFKKABHPGA;
class HPCKCJDCNFM;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA9B400)
#define GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1CAA1120)
#define GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMESTATEENTITY__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CAA1640)
#define GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMESTATEENTITY__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CAA15D0)
#define GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1CAA16C0)
#define GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1CAA1630)
#define GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1CAA15E0)
#define GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1CAA10F0)
#define GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1CAA1100)
#define GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1CAA1110)

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23>
	class GFFKKABHPGA___ForEachBeOverrideLevelActor_d__23 : public ::System::Object
	{
	public:
		::HPCKCJDCNFM* __2__current; // 0x10
		::HPCKCJDCNFM* actorEntity; // 0x18
		::GFFKKABHPGA* __4__this; // 0x20
		::GCCABICIFBN* _actor_5__2; // 0x28
		::HPCKCJDCNFM* __3__actorEntity; // 0x30
		::System::Object* __7__wrap2; // 0x38
		::System::Byte _padding0[0x10];
		::System::Int32 __l__initialThreadId; // 0x50
		::System::Int32 __1__state; // 0x54
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23___M__FINALLY2_OFFSET))(this);
		}

		::HPCKCJDCNFM* System_Collections_Generic_IEnumerator_RPG_Client_LittleGame_TimelineControlGameStateEntity__get_Current()
		{
			return ((::HPCKCJDCNFM*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMESTATEENTITY__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::HPCKCJDCNFM*>* System_Collections_Generic_IEnumerable_RPG_Client_LittleGame_TimelineControlGameStateEntity__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::HPCKCJDCNFM*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_LITTLEGAME_TIMELINECONTROLGAMESTATEENTITY__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA___FOREACHBEOVERRIDELEVELACTOR_D__23_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
