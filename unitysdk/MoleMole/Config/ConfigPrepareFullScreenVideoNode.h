#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGPREPAREFULLSCREENVIDEONODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x1BA3A850)
#define MOLEMOLE_CONFIG_CONFIGPREPAREFULLSCREENVIDEONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA3A8C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPrepareFullScreenVideoNode_TypeDefinitionIndex = 90765;

	class ConfigPrepareFullScreenVideoNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* VideoTag; // 0x18
		::Il2CppArray<::System::Object*>* PlayItems; // 0x20
		::System::Boolean IsSkipOnFastMode; // 0x28
		::System::Boolean WaitForPrepareFinish; // 0x29

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPREPAREFULLSCREENVIDEONODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPREPAREFULLSCREENVIDEONODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
