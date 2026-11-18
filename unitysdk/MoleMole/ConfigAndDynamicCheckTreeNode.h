#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigCompositeDynamicCheckTreeNode.h"

class CLFBLCIJPKD_LEPOLDOBOGO;
class KAJAGPBJADH;

#define MOLEMOLE_CONFIGANDDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x19268100)
#define MOLEMOLE_CONFIGANDDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19268280)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigAndDynamicCheckTreeNode_TypeDefinitionIndex = 47215;

	class ConfigAndDynamicCheckTreeNode : public ::MoleMole::ConfigCompositeDynamicCheckTreeNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANDDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::CLFBLCIJPKD_LEPOLDOBOGO* Create(::KAJAGPBJADH* overrideMap)
		{
			return ((::CLFBLCIJPKD_LEPOLDOBOGO*(*)(::PVOID, ::KAJAGPBJADH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGANDDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
