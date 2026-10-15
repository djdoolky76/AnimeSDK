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

#define PCNOHEGKHKM___TORELICSFROMROW_D__5_CTOR_OFFSET UNITYSDK_OFFSET(0xC001DD0)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC002A90)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC002D00)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC002C50)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC002D60)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC002CB0)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC002C60)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC002A80)

inline static constexpr unsigned int PCNOHEGKHKM___ToRelicsFromRow_d__5_TypeDefinitionIndex = 62825;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class PCNOHEGKHKM___ToRelicsFromRow_d__5 : public ::System::Object
	{
	public:
		::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*> __2__current; // 0x10
		::System::Byte _padding0[0x8];
		::RPG::GameCore::SpecialAvatarRelicRow* specialAvatarRelicRow; // 0x20
		::RPG::GameCore::SpecialAvatarRelicRow* __3__specialAvatarRelicRow; // 0x28
		::Il2CppArray<::OKGJHHOHIIJ*>* __7__wrap1; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Int32 __7__wrap2; // 0x3C
		::System::Int32 __l__initialThreadId; // 0x40
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
