#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGPLAYFULLSCREENVIDEONODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x190A51C0)
#define MOLEMOLE_CONFIG_CONFIGPLAYFULLSCREENVIDEONODE__CTOR_OFFSET UNITYSDK_OFFSET(0x190A5230)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayFullScreenVideoNode_TypeDefinitionIndex = 90763;

	class ConfigPlayFullScreenVideoNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::Il2CppArray<::System::Object*>* PlayItems; // 0x18
		::System::String* SkipPlayKey; // 0x20
		::System::Boolean IsTryStopPrev; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single CloseDelay; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYFULLSCREENVIDEONODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGPLAYFULLSCREENVIDEONODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
