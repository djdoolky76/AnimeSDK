#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AnimGroupEventConfig; }
namespace RPG::GameCore { class CharacterAnimEventConfig; }
namespace RPG::GameCore { class LogicAnimEventEntry; }
namespace RPG::GameCore { class SingleAnimBehaviourEvent; }
namespace RPG::GameCore { class SingleAnimEventConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHARACTERANIMEVENTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D53B470)
#define RPG_GAMECORE_CHARACTERANIMEVENTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D53B240)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CharacterAnimEventConfig_TypeDefinitionIndex = 16298;

	class CharacterAnimEventConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::SingleAnimEventConfig*>* AnimatorStateEvents; // 0x10
		::Il2CppArray<::RPG::GameCore::SingleAnimBehaviourEvent*>* AnimatorBehaviourEvents; // 0x18
		::Il2CppArray<::RPG::GameCore::AnimGroupEventConfig*>* AnimatorStateGroupEvents; // 0x20
		::Il2CppArray<::RPG::GameCore::LogicAnimEventEntry*>* LogicAnimEvents; // 0x28
		::System::String* ReferenceJsonConfig; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMEVENTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CharacterAnimEventConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CharacterAnimEventConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHARACTERANIMEVENTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
