#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

#define MOLEMOLE_DIGIBOOPOPWNDSHOW_GET_ISTRIGGERINLOADING_OFFSET UNITYSDK_OFFSET(0x118F7B60)
#define MOLEMOLE_DIGIBOOPOPWNDSHOW_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x118F7B70)
#define MOLEMOLE_DIGIBOOPOPWNDSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x118F7C10)
#define MOLEMOLE_DIGIBOOPOPWNDSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x118F7BB0)
#define MOLEMOLE_DIGIBOOPOPWNDSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x118F7B80)
#define MOLEMOLE_DIGIBOOPOPWNDSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x118F7C50)

namespace MoleMole
{
	inline static constexpr unsigned int DigibooPopWndShow_TypeDefinitionIndex = 88812;

	class DigibooPopWndShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DIGIBOOPOPWNDSHOW__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerInLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DIGIBOOPOPWNDSHOW_GET_ISTRIGGERINLOADING_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DIGIBOOPOPWNDSHOW_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DIGIBOOPOPWNDSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DIGIBOOPOPWNDSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_DIGIBOOPOPWNDSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
