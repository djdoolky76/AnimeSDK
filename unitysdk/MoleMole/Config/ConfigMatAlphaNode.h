#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGMATALPHANODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0xFFD63A0)
#define MOLEMOLE_CONFIG_CONFIGMATALPHANODE__CTOR_OFFSET UNITYSDK_OFFSET(0xFFD6410)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigMatAlphaNode_TypeDefinitionIndex = 77757;

	class ConfigMatAlphaNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::System::String* MatProperty; // 0x18
		::System::String* TargetMats; // 0x20
		::System::Single TargetValue; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATALPHANODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGMATALPHANODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
