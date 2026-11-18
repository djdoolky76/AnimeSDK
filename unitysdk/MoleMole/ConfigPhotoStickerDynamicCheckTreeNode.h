#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ConfigBaseDynamicCheckTreeNode.h"

class CLFBLCIJPKD_LEPOLDOBOGO;
class KAJAGPBJADH;

#define MOLEMOLE_CONFIGPHOTOSTICKERDYNAMICCHECKTREENODE_CREATE_OFFSET UNITYSDK_OFFSET(0x1A05B7A0)
#define MOLEMOLE_CONFIGPHOTOSTICKERDYNAMICCHECKTREENODE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A05B820)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigPhotoStickerDynamicCheckTreeNode_TypeDefinitionIndex = 69556;

	class ConfigPhotoStickerDynamicCheckTreeNode : public ::MoleMole::ConfigBaseDynamicCheckTreeNode
	{
	public:
		::System::Int32 CompareArg; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPHOTOSTICKERDYNAMICCHECKTREENODE__CTOR_OFFSET))(this);
		}

		::CLFBLCIJPKD_LEPOLDOBOGO* Create(::KAJAGPBJADH* overrideMap)
		{
			return ((::CLFBLCIJPKD_LEPOLDOBOGO*(*)(::PVOID, ::KAJAGPBJADH*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGPHOTOSTICKERDYNAMICCHECKTREENODE_CREATE_OFFSET))(this, overrideMap);
		}
	};
}
