#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIInLevelDomainNpcToolbarChildWindowController; }

#define MOLEMOLE_UIINLEVELDOMAINNPCTOOLBARCHILDWINDOWCONTROLLER__HIDESELF_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x19790F50)
#define MOLEMOLE_UIINLEVELDOMAINNPCTOOLBARCHILDWINDOWCONTROLLER__HIDESELF_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19791120)
#define MOLEMOLE_UIINLEVELDOMAINNPCTOOLBARCHILDWINDOWCONTROLLER__HIDESELF_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET UNITYSDK_OFFSET(0x19791180)
#define MOLEMOLE_UIINLEVELDOMAINNPCTOOLBARCHILDWINDOWCONTROLLER__HIDESELF_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET UNITYSDK_OFFSET(0x19791130)
#define MOLEMOLE_UIINLEVELDOMAINNPCTOOLBARCHILDWINDOWCONTROLLER__HIDESELF_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19790F40)
#define MOLEMOLE_UIINLEVELDOMAINNPCTOOLBARCHILDWINDOWCONTROLLER__HIDESELF_D__12__CTOR_OFFSET UNITYSDK_OFFSET(0x19790F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelDomainNpcToolbarChildWindowController__HideSelf_d__12_TypeDefinitionIndex = 48569;

	template <typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7, typename T8, typename T9, typename T10, typename T11, typename T12>
	class UIInLevelDomainNpcToolbarChildWindowController__HideSelf_d__12 : public ::System::Object
	{
	public:
		::MoleMole::UIInLevelDomainNpcToolbarChildWindowController* __4__this; // 0x10
		::System::Int32 __1__state; // 0x18
		::System::Single __2__current; // 0x1C

		::System::Void _ctor(::System::Int32 __1__state)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOMAINNPCTOOLBARCHILDWINDOWCONTROLLER__HIDESELF_D__12__CTOR_OFFSET))(this, __1__state);
		}

		::System::Void System_IDisposable_Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOMAINNPCTOOLBARCHILDWINDOWCONTROLLER__HIDESELF_D__12_SYSTEM_IDISPOSABLE_DISPOSE_OFFSET))(this);
		}

		::System::Boolean MoveNext()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOMAINNPCTOOLBARCHILDWINDOWCONTROLLER__HIDESELF_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Single System_Collections_Generic_IEnumerator_System_Single__get_Current()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOMAINNPCTOOLBARCHILDWINDOWCONTROLLER__HIDESELF_D__12_SYSTEM_COLLECTIONS_GENERIC_IENUMERATOR_SYSTEM_SINGLE__GET_CURRENT_OFFSET))(this);
		}

		::System::Void System_Collections_IEnumerator_Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOMAINNPCTOOLBARCHILDWINDOWCONTROLLER__HIDESELF_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_RESET_OFFSET))(this);
		}

		::System::Object* System_Collections_IEnumerator_get_Current()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELDOMAINNPCTOOLBARCHILDWINDOWCONTROLLER__HIDESELF_D__12_SYSTEM_COLLECTIONS_IENUMERATOR_GET_CURRENT_OFFSET))(this);
		}
	};
}
