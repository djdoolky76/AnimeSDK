#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGPLAYPREPAREDFULLSCREENVIDEONODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x12776580)
#define MOLEMOLE_CONFIG_CONFIGPLAYPREPAREDFULLSCREENVIDEONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x127765F0)
#define MOLEMOLE_CONFIG_CONFIGPLAYPREPAREDFULLSCREENVIDEONODE__ONCHANGED_OFFSET UNITYSDK_OFFSET(0x12776520)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayPreparedFullScreenVideoNode_TypeDefinitionIndex = 87232;

	class ConfigPlayPreparedFullScreenVideoNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* VideoTag; // 0x18
		::System::Boolean IsCloseWhenFinish; // 0x20
		::System::Boolean IsLoopVideo; // 0x21
		::System::Boolean DontCloseWhenDestroy; // 0x22
		::System::Boolean IsSkipOnFastMode; // 0x23

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYPREPAREDFULLSCREENVIDEONODE__CTOR_OFFSET))(this);
		}

		::System::Void _OnChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYPREPAREDFULLSCREENVIDEONODE__ONCHANGED_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYPREPAREDFULLSCREENVIDEONODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
