#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CharacterReplaceAnimatorController; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERREPLACEANIMATORCONTROLLER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54A350)
#define RPG_GAMECORE_CHARACTERREPLACEANIMATORCONTROLLER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54A390)
#define RPG_GAMECORE_CHARACTERREPLACEANIMATORCONTROLLER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54A2F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterReplaceAnimatorController_TypeDefinitionIndex = 23205;

	class CharacterReplaceAnimatorController : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* ControllerPath; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEANIMATORCONTROLLER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterReplaceAnimatorController* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterReplaceAnimatorController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEANIMATORCONTROLLER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterReplaceAnimatorController* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterReplaceAnimatorController*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERREPLACEANIMATORCONTROLLER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
