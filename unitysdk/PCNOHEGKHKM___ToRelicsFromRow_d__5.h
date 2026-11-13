#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class KGHMBCLFFLG;
class OKGJHHOHIIJ;
namespace RPG::GameCore { class SpecialAvatarRelicRow; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PCNOHEGKHKM___TORELICSFROMROW_D__5_CTOR_OFFSET UNITYSDK_OFFSET(0x1AAD9C10)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1AADA8C0)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AADAB20)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AADAA70)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1AADAB80)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1AADAAD0)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1AADAA80)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1AADA8B0)

inline static constexpr unsigned int PCNOHEGKHKM___ToRelicsFromRow_d__5_TypeDefinitionIndex = 64263;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class PCNOHEGKHKM___ToRelicsFromRow_d__5 : public ::System::Object
	{
	public:
		::RPG::GameCore::SpecialAvatarRelicRow* specialAvatarRelicRow; // 0x10
		::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*> __2__current; // 0x18
		::System::Byte _padding0[0x8];
		::Il2CppArray<::OKGJHHOHIIJ*>* __7__wrap1; // 0x28
		::RPG::GameCore::SpecialAvatarRelicRow* __3__specialAvatarRelicRow; // 0x30
		::System::Int32 __7__wrap2; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C
		::System::Int32 __1__state; // 0x40
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TORELICSFROMROW_D__5_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TORELICSFROMROW_D__5_MOVENEXT_OFFSET))(this);
		}

		::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*> System_Collections_Generic_IEnumerator_System_ValueTuple_RPG_GameCore_RelicType_RPG_AvatarSystem_IRelicProxy___get_Current()
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>* System_Collections_Generic_IEnumerable_System_ValueTuple_RPG_GameCore_RelicType_RPG_AvatarSystem_IRelicProxy___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
