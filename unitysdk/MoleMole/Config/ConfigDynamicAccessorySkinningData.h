#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBJIHJPGCDE.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORYSKINNINGDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x19B147D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigDynamicAccessorySkinningData_TypeDefinitionIndex = 73611;

	class ConfigDynamicAccessorySkinningData : public ::System::Object
	{
	public:
		::System::String* RootBoneAttachPoint; // 0x10
		::System::String* FollowAttachPoint; // 0x18
		::Il2CppArray<::System::String*>* BoneAttachpoints; // 0x20
		::System::String* DebugName; // 0x28
		::OBJIHJPGCDE BindMode; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGDYNAMICACCESSORYSKINNINGDATA__CTOR_OFFSET))(this);
		}
	};
}
