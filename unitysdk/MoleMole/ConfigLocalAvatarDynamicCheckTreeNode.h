#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class CLFBLCIJPKD_LEPOLDOBOGO;
class KAJAGPBJADH;
namespace System { class String; }

#define MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x19B2CF40)
#define MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B2CFD0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLocalAvatarDynamicCheckTreeNode_TypeDefinitionIndex = 46136;

	class ConfigLocalAvatarDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		// static const ::System::Int32 LocalAvatarCount = 0x1; // 0x0
		::Il2CppArray<::System::String*>* AnimatorZoneTags; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::CLFBLCIJPKD_LEPOLDOBOGO* Create(::KAJAGPBJADH* overrideMap)
		{
			return ((::CLFBLCIJPKD_LEPOLDOBOGO*(*)(::PVOID, ::KAJAGPBJADH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLOCALAVATARDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
