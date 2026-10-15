#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_PS_LOGINMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x1BF2CB70)
#define MIHOYO_SDK_PS_LOGINMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x1BF2CBB0)
#define MIHOYO_SDK_PS_LOGINMANAGER___C__OPENUSERCENTER_B__20_0_OFFSET UNITYSDK_OFFSET(0x1BF2CBC0)

namespace MiHoYo::SDK::PS
{
	inline static constexpr unsigned int LoginManager___c_TypeDefinitionIndex = 8908;

	class LoginManager___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.PS", "<>c")->GetStaticField(0x1F470);
		}

		static ::System::Action** StaticGet___9__20_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.PS", "<>c")->GetStaticField(0x1F478);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _OpenUserCenter_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_PS_LOGINMANAGER___C__OPENUSERCENTER_B__20_0_OFFSET))(this);
		}

	};
}
