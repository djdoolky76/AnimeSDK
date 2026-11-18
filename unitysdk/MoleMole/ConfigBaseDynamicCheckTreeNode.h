#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIGBASEDYNAMICCHECKTREENODE_GETEXPAND_OFFSET UNITYSDK_OFFSET(0x1BA4E200)
#define MOLEMOLE_CONFIGBASEDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA4E240)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBaseDynamicCheckTreeNode_TypeDefinitionIndex = 88240;

	class ConfigBaseDynamicCheckTreeNode : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBASEDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::System::Boolean GetExpand()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBASEDYNAMICCHECKTREENODE_GETEXPAND_OFFSET))(this);
		}
	};
}
