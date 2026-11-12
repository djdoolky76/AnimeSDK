#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NEJLIGKNHCC_KKGCNNMCFAP.h"
#include "unitysdk/System/Object.h"
class NEJLIGKNHCC;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define NEJLIGKNHCC__FILL_D__24_CTOR_OFFSET UNITYSDK_OFFSET(0xC3EA540)
#define NEJLIGKNHCC__FILL_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC3F14E0)
#define NEJLIGKNHCC__FILL_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC3F1830)
#define NEJLIGKNHCC__FILL_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC3F1750)
#define NEJLIGKNHCC__FILL_D__24_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC3F18C0)
#define NEJLIGKNHCC__FILL_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC3F17D0)
#define NEJLIGKNHCC__FILL_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC3F1780)
#define NEJLIGKNHCC__FILL_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC3F14D0)

inline static constexpr unsigned int NEJLIGKNHCC__Fill_d__24_TypeDefinitionIndex = 71254;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13, typename T14, typename T15, typename T16, typename T17, typename T18, typename T19, typename T20, typename T21, typename T22, typename T23, typename T24>
	class NEJLIGKNHCC__Fill_d__24 : public ::System::Object
	{
	public:
		::NEJLIGKNHCC_KKGCNNMCFAP __2__current; // 0x10
		::NEJLIGKNHCC* __4__this; // 0x48
		::System::Int32 __1__state; // 0x50
		::System::Single _timePass_5__2; // 0x54
		::System::Single __3__startTimePass; // 0x58
		::System::Single startTimePass; // 0x5C
		::System::Int32 _i_5__3; // 0x60
		::System::Int32 __l__initialThreadId; // 0x64
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NEJLIGKNHCC__FILL_D__24_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC__FILL_D__24_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC__FILL_D__24_MOVENEXT_OFFSET))(this);
		}

		::NEJLIGKNHCC_KKGCNNMCFAP System_Collections_Generic_IEnumerator_RPG_Client_PedestrianV2NPCEmitter_EmitRuntimeInfo__get_Current()
		{
			return ((::NEJLIGKNHCC_KKGCNNMCFAP(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC__FILL_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC__FILL_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC__FILL_D__24_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Object*>* System_Collections_Generic_IEnumerable_RPG_Client_PedestrianV2NPCEmitter_EmitRuntimeInfo__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC__FILL_D__24_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_PEDESTRIANV2NPCEMITTER_EMITRUNTIMEINFO__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + NEJLIGKNHCC__FILL_D__24_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
