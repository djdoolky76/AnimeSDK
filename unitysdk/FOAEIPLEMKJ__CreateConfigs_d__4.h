#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CommonIndexKey.h"
#include "unitysdk/RPG/GameCore/FixEnumerator_2.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class EAODNLIPMEO;
class FOAEIPLEMKJ;
class HNGODOCOCCF;
class PBICIFBPKHF;
class PENGPJKHIJF;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define FOAEIPLEMKJ__CREATECONFIGS_D__4_CTOR_OFFSET UNITYSDK_OFFSET(0x1680BC80)
#define FOAEIPLEMKJ__CREATECONFIGS_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1680D180)
#define FOAEIPLEMKJ__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCECONFIG___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1680D7E0)
#define FOAEIPLEMKJ__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCECONFIG___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1680D730)
#define FOAEIPLEMKJ__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1680D850)
#define FOAEIPLEMKJ__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1680D790)
#define FOAEIPLEMKJ__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1680D740)
#define FOAEIPLEMKJ__CREATECONFIGS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1680D080)
#define FOAEIPLEMKJ__CREATECONFIGS_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x1680D120)
#define FOAEIPLEMKJ__CREATECONFIGS_D__4___M__FINALLY2_OFFSET UNITYSDK_OFFSET(0x1680D140)
#define FOAEIPLEMKJ__CREATECONFIGS_D__4___M__FINALLY3_OFFSET UNITYSDK_OFFSET(0x1680D160)

inline static constexpr unsigned int FOAEIPLEMKJ__CreateConfigs_d__4_TypeDefinitionIndex = 84278;

	template <typename T1, typename T2, typename T3, typename T4>
	class FOAEIPLEMKJ__CreateConfigs_d__4 : public ::System::Object
	{
	public:
		::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PBICIFBPKHF*> _iter_5__4; // 0x10
		::System::Byte _padding0[0x38];
		::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::PENGPJKHIJF*> _iter_5__3; // 0x50
		::System::Byte _padding1[0x38];
		::System::ValueTuple_2<::System::UInt32, ::EAODNLIPMEO*> __2__current; // 0x90
		::System::Byte _padding2[0x8];
		::FOAEIPLEMKJ* __4__this; // 0xA0
		::RPG::GameCore::FixEnumerator_2<::RPG::GameCore::CommonIndexKey, ::HNGODOCOCCF*> _iter_5__2; // 0xA8
		::System::Byte _padding3[0x38];
		::System::Int32 __l__initialThreadId; // 0xE8
		::System::Int32 __1__state; // 0xEC
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ__CREATECONFIGS_D__4_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ__CREATECONFIGS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ__CREATECONFIGS_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ__CREATECONFIGS_D__4___M__FINALLY1_OFFSET))(this);
		}

		::System::Void __m__Finally2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ__CREATECONFIGS_D__4___M__FINALLY2_OFFSET))(this);
		}

		::System::Void __m__Finally3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ__CREATECONFIGS_D__4___M__FINALLY3_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::UInt32, ::EAODNLIPMEO*> System_Collections_Generic_IEnumerator_System_ValueTuple_System_UInt32_RPG_Client_Challenge_Tierce_ChallengeTierceConfig___get_Current()
		{
			return ((::System::ValueTuple_2<::System::UInt32, ::EAODNLIPMEO*>(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_SYSTEM_UINT32_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCECONFIG___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::UInt32, ::EAODNLIPMEO*>>* System_Collections_Generic_IEnumerable_System_ValueTuple_System_UInt32_RPG_Client_Challenge_Tierce_ChallengeTierceConfig___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::System::UInt32, ::EAODNLIPMEO*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_SYSTEM_UINT32_RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCECONFIG___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + FOAEIPLEMKJ__CREATECONFIGS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
