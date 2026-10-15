#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterHUDType.h"
#include "unitysdk/RPG/GameCore/CharacterSomatoType.h"
#include "unitysdk/RPG/GameCore/CrosshairLayoutType.h"
#include "unitysdk/RPG/GameCore/CrosshairType.h"
#include "unitysdk/RPG/GameCore/ResilienceEnum.h"
#include "unitysdk/RPG/GameCore/SpecialSkillButtonGroupType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChangeCharacterConfigParam; }
namespace RPG::GameCore { class EffectAdaptionConfig; }
namespace RPG::GameCore { class HitBoxConfig; }
namespace RPG::GameCore { class LocationConfig; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace System { class String; }

#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D536BB0)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D536C50)
#define RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D536940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChangeCharacterConfigParam_TypeDefinitionIndex = 23679;

	class ChangeCharacterConfigParam : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Boolean IsReset; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::ResilienceEnum Resilience; // 0x24
		::RPG::MVector3 BuffPanelOffset; // 0x28
		::System::Byte _padding1[0x4];
		::RPG::GameCore::LocationConfig* Location; // 0x38
		::System::Single VisualRadius; // 0x40
		::System::Byte _padding2[0x4];
		::RPG::GameCore::HitBoxConfig* HitBox; // 0x48
		::RPG::GameCore::CharacterSomatoType SomatoType; // 0x50
		::System::Byte _padding3[0x4];
		::Il2CppArray<::RPG::GameCore::EffectAdaptionConfig*>* EffectAdaptionList; // 0x58
		::System::String* GraphEmotionAsset; // 0x60
		::Il2CppArray<::System::String*>* AnimEventConfigList; // 0x68
		::System::String* AnimEventPreloadTag; // 0x70
		::RPG::MVector3 HudOffset; // 0x78
		::System::Byte _padding4[0x4];
		::System::String* CustomHUDAttachPointName; // 0x88
		::System::Single HudOffsetBlendTime; // 0x90
		::System::Int32 ViewModeExtraEffectID; // 0x94
		::RPG::GameCore::CrosshairType CrosshairType; // 0x98
		::RPG::GameCore::CrosshairLayoutType CrosshairLayout; // 0x9C
		::RPG::GameCore::CrosshairType MainCrosshairType; // 0xA0
		::RPG::GameCore::SpecialSkillButtonGroupType SpecialSkillButtonGroupType; // 0xA4
		::RPG::GameCore::CharacterHUDType HUDType; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeCharacterConfigParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeCharacterConfigParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChangeCharacterConfigParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChangeCharacterConfigParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHANGECHARACTERCONFIGPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
