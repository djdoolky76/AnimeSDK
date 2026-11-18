#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigConditionPredicate.h"
#include "unitysdk/MoleMole/Config/ConfigUIBaseActionNode.h"

class ADCIIHIOAMH;

#define MOLEMOLE_CONFIG_CONFIGENABLEBLACKCURTAINNODE_GETUIANIMATIONNODE_OFFSET UNITYSDK_OFFSET(0x131E2AC0)
#define MOLEMOLE_CONFIG_CONFIGENABLEBLACKCURTAINNODE__CTOR_OFFSET UNITYSDK_OFFSET(0x131E2B30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigEnableBlackCurtainNode_TypeDefinitionIndex = 65891;

	class ConfigEnableBlackCurtainNode : public ::MoleMole::Config::ConfigUIBaseActionNode
	{
	public:
		::MoleMole::Config::ConfigConditionPredicate Predicate; // 0x18
		::System::Boolean Enable; // 0x28
		::System::Byte _padding0[0x3];
		::System::Single Duration; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENABLEBLACKCURTAINNODE__CTOR_OFFSET))(this);
		}

		::ADCIIHIOAMH* GetUIAnimationNode()
		{
			return ((::ADCIIHIOAMH*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGENABLEBLACKCURTAINNODE_GETUIANIMATIONNODE_OFFSET))(this);
		}
	};
}
