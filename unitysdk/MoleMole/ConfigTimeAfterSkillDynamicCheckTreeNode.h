#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/EntitySkillType.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class CLFBLCIJPKD_LEPOLDOBOGO;
class KAJAGPBJADH;

#define MOLEMOLE_CONFIGTIMEAFTERSKILLDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1C702FA0)
#define MOLEMOLE_CONFIGTIMEAFTERSKILLDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C703080)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigTimeAfterSkillDynamicCheckTreeNode_TypeDefinitionIndex = 58131;

	class ConfigTimeAfterSkillDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::System::Single Duration; // 0x10
		::MoleMole::Config::EntitySkillType EntitySkillType; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMEAFTERSKILLDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::CLFBLCIJPKD_LEPOLDOBOGO* Create(::KAJAGPBJADH* overrideMap)
		{
			return ((::CLFBLCIJPKD_LEPOLDOBOGO*(*)(::PVOID, ::KAJAGPBJADH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGTIMEAFTERSKILLDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
