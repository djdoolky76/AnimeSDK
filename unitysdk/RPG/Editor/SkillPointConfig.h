#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace RPG::Editor { class SkillPointSimConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_EDITOR_SKILLPOINTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0xE4A3630)
#define RPG_EDITOR_SKILLPOINTCONFIG_DAKJCGMIEKO_OFFSET UNITYSDK_OFFSET(0xE4A35E0)
#define RPG_EDITOR_SKILLPOINTCONFIG_KEMBAMFHOGC_OFFSET UNITYSDK_OFFSET(0xE4A3440)
#define RPG_EDITOR_SKILLPOINTCONFIG_KIHILIKANJG_OFFSET UNITYSDK_OFFSET(0xE4A34E0)

namespace RPG::Editor
{
	inline static constexpr unsigned int SkillPointConfig_TypeDefinitionIndex = 52043;

	class SkillPointConfig : public ::System::Object
	{
	public:
		::UnityEngine::GameObject* target; // 0x10
		::System::String* SkillID; // 0x18
		::UnityEngine::Vector2Int LayoutPosition; // 0x20
		::System::Boolean IsUseSimPoint; // 0x28
		::System::Byte _padding0[0x7];
		::System::Collections::Generic::List_1<::RPG::Editor::SkillPointSimConfig*>* SimSkills; // 0x30
		::System::Boolean IsUseDeco; // 0x38
		::System::Byte _padding1[0x7];
		::UnityEngine::GameObject* DecoGo; // 0x40
		::System::String* NextSkillID; // 0x48
		::UnityEngine::GameObject* TargLine; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* LsTargLine; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLPOINTCONFIG_CTOR_OFFSET))(this);
		}

		::System::Void KEMBAMFHOGC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLPOINTCONFIG_KEMBAMFHOGC_OFFSET))(this);
		}

		::System::Void KIHILIKANJG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLPOINTCONFIG_KIHILIKANJG_OFFSET))(this);
		}

		::System::Void DAKJCGMIEKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_EDITOR_SKILLPOINTCONFIG_DAKJCGMIEKO_OFFSET))(this);
		}

	};
}
