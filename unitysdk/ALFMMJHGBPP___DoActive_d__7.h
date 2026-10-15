#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class ALFMMJHGBPP;
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class NPCComponent; }
namespace System { class Object; }

#define ALFMMJHGBPP___DOACTIVE_D__7_CTOR_OFFSET UNITYSDK_OFFSET(0x15566E60)
#define ALFMMJHGBPP___DOACTIVE_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x15567120)
#define ALFMMJHGBPP___DOACTIVE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x155674C0)
#define ALFMMJHGBPP___DOACTIVE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x15567520)
#define ALFMMJHGBPP___DOACTIVE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x155674D0)
#define ALFMMJHGBPP___DOACTIVE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x15567100)

inline static constexpr unsigned int ALFMMJHGBPP___DoActive_d__7_TypeDefinitionIndex = 57129;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
	class ALFMMJHGBPP___DoActive_d__7 : public ::System::Object
	{
	public:
		::RPG::GameCore::GameEntity* _entity_5__2; // 0x10
		::System::Object* __2__current; // 0x18
		::RPG::GameCore::NPCComponent* _cmpt_5__3; // 0x20
		::ALFMMJHGBPP* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ALFMMJHGBPP___DOACTIVE_D__7_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP___DOACTIVE_D__7_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP___DOACTIVE_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Object* System_Collections_Generic_IEnumerator_System_Object__get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP___DOACTIVE_D__7_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_OBJECT__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP___DOACTIVE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + ALFMMJHGBPP___DOACTIVE_D__7_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

	};
