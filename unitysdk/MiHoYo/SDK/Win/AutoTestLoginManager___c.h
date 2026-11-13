#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class NetworkResponseModel; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1720FEF0)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1720FF30)
#define MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__LOGOUT_B__11_0_OFFSET UNITYSDK_OFFSET(0x1720FF40)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int AutoTestLoginManager___c_TypeDefinitionIndex = 9282;

	class AutoTestLoginManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x22030);
		}

		static ::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>** StaticGet___9__11_0()
		{
			return (::System::Action_1<::MiHoYo::SDK::NetworkResponseModel*>**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x22038);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _Logout_b__11_0(::MiHoYo::SDK::NetworkResponseModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MiHoYo::SDK::NetworkResponseModel*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_AUTOTESTLOGINMANAGER___C__LOGOUT_B__11_0_OFFSET))(this, a1);
		}

	};
}
