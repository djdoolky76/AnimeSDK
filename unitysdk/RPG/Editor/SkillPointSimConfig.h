#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Editor/SkillPointSimConfig_PointType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPG_EDITOR_SKILLPOINTSIMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE4AE0A0)
#define RPG_EDITOR_SKILLPOINTSIMCONFIG_GET_CONTENTTITLE_OFFSET UNITYSDK_OFFSET(0xE4AE110)

namespace RPG::Editor
{
	class SkillPointSimConfig : public ::System::Object
	{
	public:
		::UnityEngine::Vector2Int LayoutPosition; // 0x10
		::RPG::Editor::SkillPointSimConfig_PointType Type; // 0x18
		::System::Byte _padding0[0x4];
		::UnityEngine::GameObject* TargLine; // 0x20
		::System::String* ContentSkillID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLPOINTSIMCONFIG_CTOR_OFFSET))(this);
		}

		::System::String* get_ContentTitle()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLPOINTSIMCONFIG_GET_CONTENTTITLE_OFFSET))(this);
		}

	};
}
