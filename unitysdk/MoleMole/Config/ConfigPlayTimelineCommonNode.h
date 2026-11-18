#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace MoleMole::Config { class BoolUISpecialNum; }
namespace MoleMole::Config { class StringUISpecialNum; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGPLAYTIMELINECOMMONNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1B928EC0)
#define MOLEMOLE_CONFIG_CONFIGPLAYTIMELINECOMMONNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B928F30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayTimelineCommonNode_TypeDefinitionIndex = 67512;

	class ConfigPlayTimelineCommonNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* TimelineKey_BlackBoard; // 0x18
		::MoleMole::Config::StringUISpecialNum* ParentTransKey; // 0x20
		::MoleMole::Config::StringUISpecialNum* TimelineKey; // 0x28
		::MoleMole::Config::BoolUISpecialNum* IsSyncLoad; // 0x30
		::System::Boolean UseBlackBoard_TimelineKey; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYTIMELINECOMMONNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYTIMELINECOMMONNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
