#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class AccountModel; }
namespace System { class Object; }

#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS5_1_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF01E70)
#define MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS5_1__ONHANDHELDLOGINCALLBACK_B__0_OFFSET UNITYSDK_OFFSET(0x1BF02FB0)

namespace MiHoYo::SDK::PC::OS::CXHandheld
{
	template <typename T>
	class LoginManagerCXHandheld___c__DisplayClass5_1 : public ::System::Object
	{
	public:
		::System::Object* CS___8__locals1; // 0x10
		::MiHoYo::SDK::AccountModel* userModel; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS5_1_CTOR_OFFSET))(this);
		}

		::System::Void _OnHandheldLoginCallback_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PC_OS_CXHANDHELD_LOGINMANAGERCXHANDHELD___C__DISPLAYCLASS5_1__ONHANDHELDLOGINCALLBACK_B__0_OFFSET))(this);
		}

	};
}
