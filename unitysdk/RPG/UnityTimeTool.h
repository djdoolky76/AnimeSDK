#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_UNITYTIMETOOL_JAJBOLFGJOI_OFFSET UNITYSDK_OFFSET(0x1EC4BE40)
#define RPG_UNITYTIMETOOL_KPKCFBCFKHH_OFFSET UNITYSDK_OFFSET(0x1EC4BEF0)
#define RPG_UNITYTIMETOOL_MEJHHMGCPHL_OFFSET UNITYSDK_OFFSET(0x1EC4C070)
#define RPG_UNITYTIMETOOL__INIT_OFFSET UNITYSDK_OFFSET(0x1EC4BEB0)

namespace RPG
{
	class UnityTimeTool : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_LOOEBDMMDGI()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG", "UnityTimeTool")->GetStaticField(0x2DD0);
		}

		static ::System::Single JAJBOLFGJOI()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + RPG_UNITYTIMETOOL_JAJBOLFGJOI_OFFSET))();
		}

		static ::System::Void _Init()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_UNITYTIMETOOL__INIT_OFFSET))();
		}

		static ::System::Void MEJHHMGCPHL()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_UNITYTIMETOOL_MEJHHMGCPHL_OFFSET))();
		}

		static ::System::Void KPKCFBCFKHH()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_UNITYTIMETOOL_KPKCFBCFKHH_OFFSET))();
		}

	};
}
