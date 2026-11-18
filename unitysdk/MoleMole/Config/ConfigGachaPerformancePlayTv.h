#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_GachaStageType.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEPLAYTV_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x19B18810)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEPLAYTV__CTOR_OFFSET UNITYSDK_OFFSET(0x19B18880)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformancePlayTv_TypeDefinitionIndex = 71815;

	class ConfigGachaPerformancePlayTv : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* EndTextureSheet; // 0x18
		::System::String* StartTextureSheet; // 0x20
		::System::String* LoopTextureSheet; // 0x28
		::System::Int32 TvIndex; // 0x30
		::MoleMole::UIGachaPerformance3DModelController_GachaStageType StageType; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEPLAYTV__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEPLAYTV_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
