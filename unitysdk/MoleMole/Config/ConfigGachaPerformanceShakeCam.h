#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHAKECAM_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFAC6650)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHAKECAM__CTOR_OFFSET UNITYSDK_OFFSET(0xFAC66C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceShakeCam_TypeDefinitionIndex = 65663;

	class ConfigGachaPerformanceShakeCam : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* CamShakeKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHAKECAM__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCESHAKECAM_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
