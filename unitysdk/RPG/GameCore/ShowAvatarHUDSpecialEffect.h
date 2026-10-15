#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ShowAvatarHUDSpecialEffect; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class UITextNode; }
namespace System { class String; }

#define RPG_GAMECORE_SHOWAVATARHUDSPECIALEFFECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAA9690)
#define RPG_GAMECORE_SHOWAVATARHUDSPECIALEFFECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DAA96A0)
#define RPG_GAMECORE_SHOWAVATARHUDSPECIALEFFECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DAA9660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShowAvatarHUDSpecialEffect_TypeDefinitionIndex = 22931;

	class ShowAvatarHUDSpecialEffect : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::String* EffectPrefabPath; // 0x20
		::Il2CppArray<::RPG::GameCore::UITextNode*>* UITextNodes; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWAVATARHUDSPECIALEFFECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowAvatarHUDSpecialEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowAvatarHUDSpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWAVATARHUDSPECIALEFFECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ShowAvatarHUDSpecialEffect* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ShowAvatarHUDSpecialEffect*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SHOWAVATARHUDSPECIALEFFECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
