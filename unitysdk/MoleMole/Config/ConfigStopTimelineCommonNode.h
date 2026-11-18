#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }

#define MOLEMOLE_CONFIG_CONFIGSTOPTIMELINECOMMONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x192AD670)
#define MOLEMOLE_CONFIG_CONFIGSTOPTIMELINECOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x192AD6E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigStopTimelineCommonNode_TypeDefinitionIndex = 81830;

	class ConfigStopTimelineCommonNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::BoolUISpecialNum* InvokeFinishCallback; // 0x18
		::MoleMole::Config::StringUISpecialNum* TimelineKey; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTOPTIMELINECOMMONNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTOPTIMELINECOMMONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
