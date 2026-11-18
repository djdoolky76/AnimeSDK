#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AIOFAMODPOO.h"
#include "unitysdk/MoleMole/ListKeyBindingSettingEntry.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_KEYBOARDMOUSEKEYBINDINGSETTINGENTRY_GET_SETTINGRAWINPUTDEVICELIST_OFFSET UNITYSDK_OFFSET(0x14AEEF20)
#define MOLEMOLE_KEYBOARDMOUSEKEYBINDINGSETTINGENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x14AEEEF0)
#define MOLEMOLE_KEYBOARDMOUSEKEYBINDINGSETTINGENTRY___BASE_GET_SETTINGRAWINPUTDEVICELIST_OFFSET UNITYSDK_OFFSET(0x14AEEFF0)

namespace MoleMole
{
	inline static constexpr unsigned int KeyboardMouseKeyBindingSettingEntry_TypeDefinitionIndex = 77795;

	class KeyboardMouseKeyBindingSettingEntry : public ::MoleMole::ListKeyBindingSettingEntry
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_KEYBOARDMOUSEKEYBINDINGSETTINGENTRY__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::AIOFAMODPOO>* get_SettingRawInputDeviceList()
		{
			return ((::System::Collections::Generic::List_1<::AIOFAMODPOO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_KEYBOARDMOUSEKEYBINDINGSETTINGENTRY_GET_SETTINGRAWINPUTDEVICELIST_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::AIOFAMODPOO>* __base_get_SettingRawInputDeviceList()
		{
			return ((::System::Collections::Generic::List_1<::AIOFAMODPOO>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_KEYBOARDMOUSEKEYBINDINGSETTINGENTRY___BASE_GET_SETTINGRAWINPUTDEVICELIST_OFFSET))(this);
		}
	};
}
