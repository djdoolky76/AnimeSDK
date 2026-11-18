#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigCompositeDynamicCheckTreeNode.h"

class CLFBLCIJPKD_LEPOLDOBOGO;
class KAJAGPBJADH;

#define MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A05B610)
#define MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05B790)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigOrDynamicCheckTreeNode_TypeDefinitionIndex = 42894;

	class ConfigOrDynamicCheckTreeNode : public ::MoleMole::ConfigCompositeDynamicCheckTreeNode
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::CLFBLCIJPKD_LEPOLDOBOGO* Create(::KAJAGPBJADH* overrideMap)
		{
			return ((::CLFBLCIJPKD_LEPOLDOBOGO*(*)(::PVOID, ::KAJAGPBJADH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGORDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
