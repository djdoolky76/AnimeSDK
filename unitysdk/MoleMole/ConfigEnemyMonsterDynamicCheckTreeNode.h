#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class CLFBLCIJPKD_LEPOLDOBOGO;
class KAJAGPBJADH;
namespace System { class String; }

#define MOLEMOLE_CONFIGENEMYMONSTERDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A772CA0)
#define MOLEMOLE_CONFIGENEMYMONSTERDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A772D30)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigEnemyMonsterDynamicCheckTreeNode_TypeDefinitionIndex = 84856;

	class ConfigEnemyMonsterDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::Il2CppArray<::System::String*>* AnimatorZoneTags; // 0x10
		::System::Int32 MonsterCount; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENEMYMONSTERDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::CLFBLCIJPKD_LEPOLDOBOGO* Create(::KAJAGPBJADH* overrideMap)
		{
			return ((::CLFBLCIJPKD_LEPOLDOBOGO*(*)(::PVOID, ::KAJAGPBJADH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGENEMYMONSTERDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
