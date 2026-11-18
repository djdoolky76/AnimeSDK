#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigConditionPredicateNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEFADEOUTEFFECTNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x16411020)
#define MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEFADEOUTEFFECTNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x16411090)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGachaPerformanceFadeOutEffectNode_TypeDefinitionIndex = 76476;

	class ConfigGachaPerformanceFadeOutEffectNode : public ::MoleMole::Config::ConfigConditionPredicateNode
	{
	public:
		::System::String* EffectPattern; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEFADEOUTEFFECTNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGACHAPERFORMANCEFADEOUTEFFECTNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
