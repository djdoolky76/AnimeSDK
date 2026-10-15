#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK::PC::OS::CXHandheld { class HandheldUserAgreementDialog; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS15_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF06090)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS15_1__SHOWUSERAGREEMENTDIALOG_B__5_OFFSET UNITYSDK_OFFSET(0x1BF06280)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	template <typename T>
	class LoginManagerHandheld___c__DisplayClass15_1 : public ::System::Object
	{
	public:
		::MiHoYo::SDK::PC::OS::CXHandheld::HandheldUserAgreementDialog* dialog; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS15_1_CTOR_OFFSET))(this);
		}

		::System::Void _ShowUserAgreementDialog_b__5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERHANDHELD___C__DISPLAYCLASS15_1__SHOWUSERAGREEMENTDIALOG_B__5_OFFSET))(this);
		}

	};
}
