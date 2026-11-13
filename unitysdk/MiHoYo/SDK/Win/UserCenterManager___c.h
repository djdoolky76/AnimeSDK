#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class Action; }
namespace System { class Object; }

#define MIHOYO_SDK_WIN_USERCENTERMANAGER___C_CCTOR_OFFSET UNITYSDK_OFFSET(0x19626DC0)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER___C_CTOR_OFFSET UNITYSDK_OFFSET(0x19626E00)
#define MIHOYO_SDK_WIN_USERCENTERMANAGER___C__ONGETUNIWEBVIEWMESSAGE_B__16_0_OFFSET UNITYSDK_OFFSET(0x19626E10)

namespace MiHoYo::SDK::Win
{
	inline static constexpr unsigned int UserCenterManager___c_TypeDefinitionIndex = 9489;

	class UserCenterManager___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__16_0()
		{
			return (::System::Action**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x22460);
		}

		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)UnitySDK::FromName("MiHoYo.SDK.Win", "<>c")->GetStaticField(0x22468);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER___C_CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER___C_CTOR_OFFSET))(this);
		}

		::System::Void _OnGetUniWebViewMessage_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MIHOYO_SDK_WIN_USERCENTERMANAGER___C__ONGETUNIWEBVIEWMESSAGE_B__16_0_OFFSET))(this);
		}

	};
}
