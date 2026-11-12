#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE70830)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1CE70870)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__ANTIADDICTIONCALLBACK_B__25_0_OFFSET UNITYSDK_OFFSET(0x1CE709D0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__INITRESULTCALLBACK_B__23_0_OFFSET UNITYSDK_OFFSET(0x1CE708F0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__INITRESULTCALLBACK_B__23_1_OFFSET UNITYSDK_OFFSET(0x1CE70880)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__LOGINRESULTCALLBACK_B__24_0_OFFSET UNITYSDK_OFFSET(0x1CE70960)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__PAYCALLBACK_B__26_0_OFFSET UNITYSDK_OFFSET(0x1CE70AA0)
#define MIHOYO_SDK_WIN_BILIBILIMANAGER___C__PAYCALLBACK_B__26_1_OFFSET UNITYSDK_OFFSET(0x1CE70A30)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int BiliBiliManager___c_TypeDefinitionIndex = 9331;

	class BiliBiliManager___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__23_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x26670);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x26678);
		}

		static ::System::Action** StaticGet___9__26_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x26680);
		}

		static ::System::Action** StaticGet___9__24_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x26688);
		}

		static ::System::Action** StaticGet___9__26_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x26690);
		}

		static ::System::Action** StaticGet___9__23_1()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x26698);
		}

		static ::System::Action** StaticGet___9__25_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x266A0);
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
