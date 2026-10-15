#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SkillType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ToggleSpecialSkillMark; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define RPG_GAMECORE_TOGGLESPECIALSKILLMARK_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB8C630)
#define RPG_GAMECORE_TOGGLESPECIALSKILLMARK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB8C640)
#define RPG_GAMECORE_TOGGLESPECIALSKILLMARK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB8C600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ToggleSpecialSkillMark_TypeDefinitionIndex = 23683;

	class ToggleSpecialSkillMark : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Enable; // 0x18
		::System::Byte _padding0[0x7];
		::Il2CppArray<::RPG::GameCore::SkillType>* AllowSkillType; // 0x20
		::System::String* TriggerName; // 0x28
		::Il2CppArray<::RPG::GameCore::UITextNode*>* UITextNodes; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESPECIALSKILLMARK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToggleSpecialSkillMark* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToggleSpecialSkillMark*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESPECIALSKILLMARK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ToggleSpecialSkillMark* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ToggleSpecialSkillMark*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TOGGLESPECIALSKILLMARK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
