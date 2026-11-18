#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOFAMODPOO.h"
#include "unitysdk/MoleMole/ListKeyBindingSettingEntry.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_GAMEPADLISTKEYBINDINGSETTINGENTRY_GET_SETTINGRAWINPUTDEVICELIST_OFFSET UNITYSDK_OFFSET(0x1466D310)
#define MOLEMOLE_GAMEPADLISTKEYBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x1466D3A0)

namespace MoleMole
{
	inline static constexpr unsigned int GamepadListKeyBindingSettingEntry_TypeDefinitionIndex = 39669;

	class GamepadListKeyBindingSettingEntry : public ::MoleMole::ListKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADLISTKEYBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::AIOFAMODPOO>* get_SettingRawInputDeviceList()
		{
			return ((::System::Collections::Generic::List_1<::AIOFAMODPOO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GAMEPADLISTKEYBINDINGSETTINGENTRY_GET_SETTINGRAWINPUTDEVICELIST_OFFSET))(this);
		}
	};
}
