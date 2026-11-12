#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace MiHoYo::SDK { class JSONNode; }
namespace MiHoYo::SDK::HoYoPass { class UserCenterManager_UserCenterJsBridge; }
namespace System { class Object; }

#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1D003150)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1D003190)
#define MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__REGISTERRESULTHANDLER_B__15_2_OFFSET UNITYSDK_OFFSET(0x1D0031A0)

namespace MiHoYo::SDK::HoYoPass
{
	inline static constexpr unsigned int UserCenterManager___c_TypeDefinitionIndex = 8287;

	class UserCenterManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.HoYoPass", "<>c")->GetStaticField(0x65E30);
		}

		static ::MiHoYo::SDK::HoYoPass::UserCenterManager_UserCenterJsBridge** StaticGet___9__15_2()
		{
			return (::MiHoYo::SDK::HoYoPass::UserCenterManager_UserCenterJsBridge**)UnitySDK::FromName("MiHoYo.SDK.HoYoPass", "<>c")->GetStaticField(0x65E38);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _RegisterResultHandler_b__15_2(::System::Int32 a1, ::MiHoYo::SDK::JSONNode* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MiHoYo::SDK::JSONNode*))((::PBYTE)hIl2Cpp + MIHOYO_SDK_HOYOPASS_USERCENTERMANAGER___C__REGISTERRESULTHANDLER_B__15_2_OFFSET))(this, a1, a2);
		}

	};
}
