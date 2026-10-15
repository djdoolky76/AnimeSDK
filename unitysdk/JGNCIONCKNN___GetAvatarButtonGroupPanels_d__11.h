#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class JGNCIONCKNN;
class NPECNJDLMFD;
namespace System { class Object; }
namespace System::Collections { class IEnumerator; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }

#define JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_CTOR_OFFSET UNITYSDK_OFFSET(0xB19BA20)
#define JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xB19E790)
#define JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLSPECIALAVATARBUTTONGROUPPANEL__GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB19EAC0)
#define JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLSPECIALAVATARBUTTONGROUPPANEL__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB19EA50)
#define JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0xB19EB20)
#define JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0xB19EAB0)
#define JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0xB19EA60)
#define JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0xB19E770)
#define JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11___M__FINALLY1_OFFSET UNITYSDK_OFFSET(0xB19E780)

inline static constexpr unsigned int JGNCIONCKNN___GetAvatarButtonGroupPanels_d__11_TypeDefinitionIndex = 71962;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11>
	class JGNCIONCKNN___GetAvatarButtonGroupPanels_d__11 : public ::System::Object
	{
	public:
		::NPECNJDLMFD* __2__current; // 0x10
		::JGNCIONCKNN* __4__this; // 0x18
		::System::Object* __7__wrap1; // 0x20
		::System::Byte _padding0[0x10];
		::System::Int32 __1__state; // 0x38
		::System::Int32 __l__initialThreadId; // 0x3C
		::System::Void _ctor(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_CTOR_OFFSET))(this, a1);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void __m__Finally1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11___M__FINALLY1_OFFSET))(this);
		}

		::NPECNJDLMFD* System_Collections_Generic_IEnumerator_RPG_Client_IBattleSkillSpecialAvatarButtonGroupPanel__get_Current()
		{
			return ((::NPECNJDLMFD*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_RPG_CLIENT_IBATTLESKILLSPECIALAVATARBUTTONGROUPPANEL__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerator_1<::NPECNJDLMFD*>* System_Collections_Generic_IEnumerable_RPG_Client_IBattleSkillSpecialAvatarButtonGroupPanel__GetEnumerator()
		{
			return ((::System::Collections::Generic::IEnumerator_1<::NPECNJDLMFD*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_SYSTEM_COLLECTIONS_GENERIC_IENUMERABLE_RPG_CLIENT_IBATTLESKILLSPECIALAVATARBUTTONGROUPPANEL__GETENUMERATOR_OFFSET))(this);
		}

		::System::Collections::IEnumerator* System_Collections_IEnumerable_GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + JGNCIONCKNN___GETAVATARBUTTONGROUPPANELS_D__11_SYSTEM_COLLECTIONS_IENUMERABLE_GETENUMERATOR_OFFSET))(this);
		}

	};
