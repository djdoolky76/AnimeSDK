#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

#define RPG_CLIENT_SKIRTIKCONFIG_EDITORONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1B41FCC0)

namespace RPG::Client
{
	inline static constexpr unsigned int SkirtIKConfig_EditorOnly_TypeDefinitionIndex = 70325;

	class SkirtIKConfig_EditorOnly : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SKIRTIKCONFIG_EDITORONLY_CTOR_OFFSET))(this);
		}

	};
}
