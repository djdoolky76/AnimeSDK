#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTCAMERAANIMNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x11E94820)
#define MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTCAMERAANIMNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x11E94890)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHollowResultCameraAnimNode_TypeDefinitionIndex = 66263;

	class ConfigHollowResultCameraAnimNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* CameraKey; // 0x18
		::System::Single DelayTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTCAMERAANIMNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHOLLOWRESULTCAMERAANIMNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
