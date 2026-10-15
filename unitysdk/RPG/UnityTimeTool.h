#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_UNITYTIMETOOL_JAJBOLFGJOI_OFFSET UNITYSDK_OFFSET(0x1EC1E7B0)
#define RPG_UNITYTIMETOOL_KPKCFBCFKHH_OFFSET UNITYSDK_OFFSET(0x1EC1E860)
#define RPG_UNITYTIMETOOL_MEJHHMGCPHL_OFFSET UNITYSDK_OFFSET(0x1EC1E9E0)
#define RPG_UNITYTIMETOOL__INIT_OFFSET UNITYSDK_OFFSET(0x1EC1E820)

namespace RPG
{
	inline static constexpr unsigned int UnityTimeTool_TypeDefinitionIndex = 35177;

	class UnityTimeTool : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_LOOEBDMMDGI()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG", "UnityTimeTool")->GetStaticField(0x2D60);
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
