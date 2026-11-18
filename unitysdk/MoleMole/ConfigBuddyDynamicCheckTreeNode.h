#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class CLFBLCIJPKD_LEPOLDOBOGO;
class KAJAGPBJADH;
namespace System { class String; }

#define MOLEMOLE_CONFIGBUDDYDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1654A180)
#define MOLEMOLE_CONFIGBUDDYDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1654A210)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigBuddyDynamicCheckTreeNode_TypeDefinitionIndex = 41617;

	class ConfigBuddyDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::Il2CppArray<::System::String*>* AnimatorZoneTags; // 0x10
		::System::Int32 MonsterCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::CLFBLCIJPKD_LEPOLDOBOGO* Create(::KAJAGPBJADH* overrideMap)
		{
			return ((::CLFBLCIJPKD_LEPOLDOBOGO*(*)(::PVOID, ::KAJAGPBJADH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGBUDDYDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
