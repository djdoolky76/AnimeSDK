#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGPLAYFULLSCENEVIDEOINDEX_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1924A3D0)
#define MOLEMOLE_CONFIG_CONFIGPLAYFULLSCENEVIDEOINDEX__CTOR_OFFSET UNITYSDK_OFFSET(0x1924A490)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayFullSceneVideoIndex_TypeDefinitionIndex = 45712;

	class ConfigPlayFullSceneVideoIndex : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::Boolean autoPlay; // 0x18
		::System::Boolean waitForFinish; // 0x19
		::System::Byte _padding0[0x2];
		::System::Int32 index; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYFULLSCENEVIDEOINDEX__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYFULLSCENEVIDEOINDEX_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
