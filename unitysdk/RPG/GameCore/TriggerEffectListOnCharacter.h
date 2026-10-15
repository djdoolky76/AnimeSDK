#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EffectConfig; }
namespace RPG::GameCore { class TriggerEffectListOnCharacter; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGEREFFECTLISTONCHARACTER_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC240F0)
#define RPG_GAMECORE_TRIGGEREFFECTLISTONCHARACTER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC24100)
#define RPG_GAMECORE_TRIGGEREFFECTLISTONCHARACTER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC240C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerEffectListOnCharacter_TypeDefinitionIndex = 21912;

	class TriggerEffectListOnCharacter : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::Il2CppArray<::RPG::GameCore::EffectConfig*>* EffectList; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTONCHARACTER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEffectListOnCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEffectListOnCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTONCHARACTER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerEffectListOnCharacter* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerEffectListOnCharacter*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGEREFFECTLISTONCHARACTER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
