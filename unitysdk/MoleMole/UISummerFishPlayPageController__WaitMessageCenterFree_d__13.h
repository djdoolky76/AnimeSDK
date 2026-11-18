#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__WAITMESSAGECENTERFREE_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1135D850)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__WAITMESSAGECENTERFREE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1135D9C0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__WAITMESSAGECENTERFREE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x1135DA20)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__WAITMESSAGECENTERFREE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x1135D9D0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__WAITMESSAGECENTERFREE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x1135D840)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__WAITMESSAGECENTERFREE_D__13__CTOR_OFFSET UNITYSDK_OFFSET(0x1135D830)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishPlayPageController__WaitMessageCenterFree_d__13_TypeDefinitionIndex = 64779;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12, typename T13>
	class UISummerFishPlayPageController__WaitMessageCenterFree_d__13 : public ::System::Object
	{
	public:
		::System::Action* callback; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Single __2__current; // 0x1C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__WAITMESSAGECENTERFREE_D__13__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__WAITMESSAGECENTERFREE_D__13_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__WAITMESSAGECENTERFREE_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__WAITMESSAGECENTERFREE_D__13_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__WAITMESSAGECENTERFREE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__WAITMESSAGECENTERFREE_D__13_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
