#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigGachaPerformanceFireEffectNode_GachaEffectType.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"
#include "unitysdk/MoleMole/UIGachaPerformance3DModelController_GachaStageType.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEFIREEFFECTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1929EBD0)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEFIREEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1929EC40)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceFireEffectNode_TypeDefinitionIndex = 81698;

	class ConfigGachaPerformanceFireEffectNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* FireCondition; // 0x18
		::System::String* EffectPattern; // 0x20
		::MoleMole::UIGachaPerformance3DModelController_GachaStageType StageType; // 0x28
		::MoleMole::Config::ConfigGachaPerformanceFireEffectNode_GachaEffectType EffectType; // 0x2C
		::System::Int32 TvIndex; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEFIREEFFECTNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEFIREEFFECTNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
