#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class CLFBLCIJPKD_LEPOLDOBOGO;
class KAJAGPBJADH;
namespace MoleMole::Config { class DynamicInt; }
namespace MoleMole::Config { class DynamicString; }

#define MOLEMOLE_CONFIGSUMMONEDENTITYDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0xFFF5B20)
#define MOLEMOLE_CONFIGSUMMONEDENTITYDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF5BD0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigSummonedEntityDynamicCheckTreeNode_TypeDefinitionIndex = 82024;

	class ConfigSummonedEntityDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::MoleMole::Config::DynamicInt* IsSummoned; // 0x10
		::MoleMole::Config::DynamicString* SpecialName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSUMMONEDENTITYDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::CLFBLCIJPKD_LEPOLDOBOGO* Create(::KAJAGPBJADH* overrideMap)
		{
			return ((::CLFBLCIJPKD_LEPOLDOBOGO*(*)(::PVOID, ::KAJAGPBJADH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSUMMONEDENTITYDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
