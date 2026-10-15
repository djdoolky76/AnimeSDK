#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class InputField; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHARACTERSKILLITEMDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xCA23B80)

namespace RPG::Client
{
	class CharacterSkillItemData : public ::System::Object
	{
	public:
		::UnityEngine::UI::InputField* SkillLevelInput; // 0x10
		::UnityEngine::GameObject* SkillItemRootGO; // 0x18
		::UnityEngine::UI::Text* SkillItemNameText; // 0x20
		::System::String* SkillName; // 0x28
		::System::Int32 SkillLevel; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHARACTERSKILLITEMDATA_CTOR_OFFSET))(this);
		}

	};
}
