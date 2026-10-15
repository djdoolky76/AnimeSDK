#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALFMMJHGBPP;
namespace RPG::Client { class MonoEffectManager; }
namespace RPG::GameCore { class GameEntity; }
namespace System { class Object; }

#define ALFMMJHGBPP___DOINACTIVE_D__8_CTOR_OFFSET UNITYSDK_OFFSET(0x15566E70)
#define ALFMMJHGBPP___DOINACTIVE_D__8_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15567550)
#define ALFMMJHGBPP___DOINACTIVE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15567BF0)
#define ALFMMJHGBPP___DOINACTIVE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15567C50)
#define ALFMMJHGBPP___DOINACTIVE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x15567C00)
#define ALFMMJHGBPP___DOINACTIVE_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15567530)

inline static constexpr unsigned int ALFMMJHGBPP___DoInactive_d__8_TypeDefinitionIndex = 57130;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8>
	class ALFMMJHGBPP___DoInactive_d__8 : public ::System::Object
	{
	public:
		::RPG::Client::MonoEffectManager* __MonoEffectManager_5__3; // 0x10
		::System::Object* __2__current; // 0x18
		::RPG::GameCore::GameEntity* _monsterEntity_5__2; // 0x20
		::ALFMMJHGBPP* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALFMMJHGBPP___DOINACTIVE_D__8_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP___DOINACTIVE_D__8_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP___DOINACTIVE_D__8_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP___DOINACTIVE_D__8_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP___DOINACTIVE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP___DOINACTIVE_D__8_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
