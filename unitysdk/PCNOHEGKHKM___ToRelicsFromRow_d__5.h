#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple.h"
class KGHMBCLFFLG;
class OKGJHHOHIIJ;
namespace RPG::GameCore { class SpecialAvatarRelicRow; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define PCNOHEGKHKM___TORELICSFROMROW_D__5_CTOR_OFFSET UNITYSDK_OFFSET(0xC009490)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xC00A150)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC00A3C0)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC00A310)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xC00A420)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xC00A370)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xC00A320)
#define PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xC00A140)

inline static constexpr unsigned int PCNOHEGKHKM___ToRelicsFromRow_d__5_TypeDefinitionIndex = 62825;

	template <typename T1, typename T2, typename T3, typename T4, typename T5>
	class PCNOHEGKHKM___ToRelicsFromRow_d__5 : public ::System::Object
	{
	public:
		::System::ValueTuple __2__current; // 0x10
		::System::Byte _padding0[0x8];
		::RPG::GameCore::SpecialAvatarRelicRow* specialAvatarRelicRow; // 0x20
		::Il2CppArray<::OKGJHHOHIIJ*>* __7__wrap1; // 0x28
		::RPG::GameCore::SpecialAvatarRelicRow* __3__specialAvatarRelicRow; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C
		::System::Int32 __7__wrap2; // 0x40
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

		::System::ValueTuple System_Collections_Generic_IEnumerator_System_ValueTuple_RPG_GameCore_RelicType_RPG_AvatarSystem_IRelicProxy___get_Current()
		{
			return ((::System::ValueTuple(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple>* System_Collections_Generic_IEnumerable_System_ValueTuple_RPG_GameCore_RelicType_RPG_AvatarSystem_IRelicProxy___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple>*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + PCNOHEGKHKM___TORELICSFROMROW_D__5_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
