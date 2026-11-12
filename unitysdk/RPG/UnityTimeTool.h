#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_UNITYTIMETOOL_JAJBOLFGJOI_OFFSET UNITYSDK_OFFSET(0x1FEFC8A0)
#define RPG_UNITYTIMETOOL_KPKCFBCFKHH_OFFSET UNITYSDK_OFFSET(0x1FEFC950)
#define RPG_UNITYTIMETOOL_MEJHHMGCPHL_OFFSET UNITYSDK_OFFSET(0x1FEFCAD0)
#define RPG_UNITYTIMETOOL__INIT_OFFSET UNITYSDK_OFFSET(0x1FEFC910)

namespace RPG
{
	inline static constexpr unsigned int UnityTimeTool_TypeDefinitionIndex = 36105;

	class UnityTimeTool : public ::System::Object
	{
	public:
		static ::System::UInt32* StaticGet_LOOEBDMMDGI()
		{
			return (::System::UInt32*)UnitySDK::FromName("RPG", "UnityTimeTool")->GetStaticField(0x44E0);
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
