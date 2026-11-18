#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/DisplayMessageBase.h"

class FPBOLBNCDIP;

#define MOLEMOLE_LOGINACTIVITYPOPSHOW_GET_ISTRIGGER_OFFSET UNITYSDK_OFFSET(0x14330340)
#define MOLEMOLE_LOGINACTIVITYPOPSHOW_GET_PRIORITY_OFFSET UNITYSDK_OFFSET(0x14330330)
#define MOLEMOLE_LOGINACTIVITYPOPSHOW_ONPROCESS_OFFSET UNITYSDK_OFFSET(0x14330420)
#define MOLEMOLE_LOGINACTIVITYPOPSHOW_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x143303D0)
#define MOLEMOLE_LOGINACTIVITYPOPSHOW__CTOR_OFFSET UNITYSDK_OFFSET(0x14331460)
#define MOLEMOLE_LOGINACTIVITYPOPSHOW___BASE_SETMESSAGECONFIG_OFFSET UNITYSDK_OFFSET(0x14331470)

namespace MoleMole
{
	inline static constexpr unsigned int LoginActivityPopShow_TypeDefinitionIndex = 73838;

	class LoginActivityPopShow : public ::MoleMole::DisplayMessageBase
	{
	public:
		::FPBOLBNCDIP* popData; // 0x28
		::System::Int32 popPriority; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOGINACTIVITYPOPSHOW__CTOR_OFFSET))(this);
		}

		::System::Int32 get_Priority()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOGINACTIVITYPOPSHOW_GET_PRIORITY_OFFSET))(this);
		}

		::System::Boolean get_IsTrigger()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOGINACTIVITYPOPSHOW_GET_ISTRIGGER_OFFSET))(this);
		}

		::System::Void SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOGINACTIVITYPOPSHOW_SETMESSAGECONFIG_OFFSET))(this);
		}

		::System::Void OnProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOGINACTIVITYPOPSHOW_ONPROCESS_OFFSET))(this);
		}

		::System::Void __base_SetMessageConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_LOGINACTIVITYPOPSHOW___BASE_SETMESSAGECONFIG_OFFSET))(this);
		}
	};
}
