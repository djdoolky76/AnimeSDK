#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RelicType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
class JIEOLMHJJGF;
class KGHMBCLFFLG;
namespace Proto { class DisplayAvatarDetailInfo; }
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define HABOIOEBDOA___TORELICS_D__4_CTOR_OFFSET UNITYSDK_OFFSET(0x16AF7980)
#define HABOIOEBDOA___TORELICS_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x16AF7B00)
#define HABOIOEBDOA___TORELICS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16AF7FA0)
#define HABOIOEBDOA___TORELICS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16AF7EF0)
#define HABOIOEBDOA___TORELICS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x16AF8020)
#define HABOIOEBDOA___TORELICS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x16AF7F50)
#define HABOIOEBDOA___TORELICS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x16AF7F00)
#define HABOIOEBDOA___TORELICS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x16AF79C0)
#define HABOIOEBDOA___TORELICS_D__4___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0x16AF7A00)

inline static constexpr unsigned int HABOIOEBDOA___ToRelics_d__4_TypeDefinitionIndex = 64170;

	template <typename T1, typename T2, typename T3, typename T4>
	class HABOIOEBDOA___ToRelics_d__4 : public ::System::Object
	{
	public:
		::Proto::DisplayAvatarDetailInfo* detailInfo; // 0x10
		::Proto::DisplayAvatarDetailInfo* __3__detailInfo; // 0x18
		::System::Collections::Generic::IEnumerator_1<::JIEOLMHJJGF*>* __7__wrap1; // 0x20
		::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*> __2__current; // 0x28
		::System::Byte _padding0[0x8];
		::System::Int32 __l__initialThreadId; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TORELICS_D__4_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TORELICS_D__4_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TORELICS_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TORELICS_D__4___M__FINALLY1_OFFSET))(this);
		}

		::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*> System_Collections_Generic_IEnumerator_System_ValueTuple_RPG_GameCore_RelicType_RPG_AvatarSystem_IRelicProxy___get_Current()
		{
			return ((::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TORELICS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TORELICS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TORELICS_D__4_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>* System_Collections_Generic_IEnumerable_System_ValueTuple_RPG_GameCore_RelicType_RPG_AvatarSystem_IRelicProxy___GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::ValueTuple_2<::RPG::GameCore::RelicType, ::KGHMBCLFFLG*>>*(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TORELICS_D__4_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_SYSTEM_VALUETUPLE_RPG_GAMECORE_RELICTYPE_RPG_AVATARSYSTEM_IRELICPROXY___GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + HABOIOEBDOA___TORELICS_D__4_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
