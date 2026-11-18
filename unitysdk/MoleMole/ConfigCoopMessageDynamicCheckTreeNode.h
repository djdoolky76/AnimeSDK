#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class CLFBLCIJPKD_LEPOLDOBOGO;
class KAJAGPBJADH;
namespace MoleMole::Config { class DynamicInt; }

#define MOLEMOLE_CONFIGCOOPMESSAGEDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x19B2CBC0)
#define MOLEMOLE_CONFIGCOOPMESSAGEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B2CC90)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigCoopMessageDynamicCheckTreeNode_TypeDefinitionIndex = 61145;

	class ConfigCoopMessageDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicInt* EmojiType; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCOOPMESSAGEDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::CLFBLCIJPKD_LEPOLDOBOGO* Create(::KAJAGPBJADH* overrideMap)
		{
			return ((::CLFBLCIJPKD_LEPOLDOBOGO*(*)(::PVOID, ::KAJAGPBJADH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGCOOPMESSAGEDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
