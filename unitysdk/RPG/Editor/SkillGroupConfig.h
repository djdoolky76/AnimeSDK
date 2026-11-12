#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace UnityEngine { class RectTransform; }

#define RPG_EDITOR_SKILLGROUPCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xEF6CCF0)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillGroupConfig_TypeDefinitionIndex = 53147;

	class SkillGroupConfig : public ::System::Object
	{
	public:
		::UnityEngine::RectTransform* DecoGroup; // 0x10
		::UnityEngine::RectTransform* LineGroup; // 0x18
		::UnityEngine::RectTransform* SkillGroup; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLGROUPCONFIG_CTOR_OFFSET))(this);
		}

	};
}
