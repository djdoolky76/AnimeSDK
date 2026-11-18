#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_AVATARSCRIPTANDANIMOVERRIDECONFIG_SCRIPTANDANIMOVERRIDEPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x16405230)

namespace MoleMole::Config
{
	inline static constexpr unsigned int AvatarScriptAndAnimOverrideConfig_ScriptAndAnimOverrideParam_TypeDefinitionIndex = 72086;

	class AvatarScriptAndAnimOverrideConfig_ScriptAndAnimOverrideParam : public ::System::Object
	{
	public:
		::System::Int32 AvatarTemplateId; // 0x10
		::System::Byte _padding0[0x4];
		::Foundation::AssetPath OverrideScriptPath; // 0x18
		::Foundation::AssetPath OverrideAvatarAnimatorControllerPath; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_AVATARSCRIPTANDANIMOVERRIDECONFIG_SCRIPTANDANIMOVERRIDEPARAM__CTOR_OFFSET))(this);
		}
	};
}
