#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x17218330)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x17218370)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__ANTIADDICTIONCALLBACK_B__25_0_OFFSET UNITYSDK_OFFSET(0x172184D0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__INITRESULTCALLBACK_B__23_0_OFFSET UNITYSDK_OFFSET(0x172183F0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__INITRESULTCALLBACK_B__23_1_OFFSET UNITYSDK_OFFSET(0x17218380)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__LOGINRESULTCALLBACK_B__24_0_OFFSET UNITYSDK_OFFSET(0x17218460)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__PAYCALLBACK_B__26_0_OFFSET UNITYSDK_OFFSET(0x172185A0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__PAYCALLBACK_B__26_1_OFFSET UNITYSDK_OFFSET(0x17218530)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliManager___c_TypeDefinitionIndex = 9331;

	class BiliBiliManager___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x22600);
		}

		static ::System::Action** StaticGet___9__23_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x22608);
		}

		static ::System::Action** StaticGet___9__24_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x22610);
		}

		static ::System::Action** StaticGet___9__26_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x22618);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x22620);
		}

		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x22628);
		}

		static ::System::Action** StaticGet___9__25_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x22630);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _InitResultCallback_b__23_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__INITRESULTCALLBACK_B__23_1_OFFSET))(this);
		}

		::System::Void _InitResultCallback_b__23_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__INITRESULTCALLBACK_B__23_0_OFFSET))(this);
		}

		::System::Void _LoginResultCallback_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__LOGINRESULTCALLBACK_B__24_0_OFFSET))(this);
		}

		::System::Void _AntiAddictionCallback_b__25_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__ANTIADDICTIONCALLBACK_B__25_0_OFFSET))(this);
		}

		::System::Void _PayCallback_b__26_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__PAYCALLBACK_B__26_1_OFFSET))(this);
		}

		::System::Void _PayCallback_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_BILIBILIMANAGER___C__PAYCALLBACK_B__26_0_OFFSET))(this);
		}

	};
}
