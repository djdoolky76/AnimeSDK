#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class CLFBLCIJPKD_LEPOLDOBOGO;
class KAJAGPBJADH;
namespace MoleMole::Config { class DynamicFloat; }
namespace MoleMole::Config { class DynamicString; }

#define MOLEMOLE_CONFIGGENERICSCORECOMPAREDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x118E8460)
#define MOLEMOLE_CONFIGGENERICSCORECOMPAREDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x118E8590)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigGenericScoreCompareDynamicCheckTreeNode_TypeDefinitionIndex = 47454;

	class ConfigGenericScoreCompareDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicString* ScoreName; // 0x10
		::MoleMole::Config::DynamicString* CompareType; // 0x18
		::MoleMole::Config::DynamicFloat* CompareArg; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGENERICSCORECOMPAREDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::CLFBLCIJPKD_LEPOLDOBOGO* Create(::KAJAGPBJADH* overrideMap)
		{
			return ((::CLFBLCIJPKD_LEPOLDOBOGO*(*)(::PVOID, ::KAJAGPBJADH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGGENERICSCORECOMPAREDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
