#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayCrossHairPreviewFadeIn; }
namespace System { class String; }

#define RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8FF7E0)
#define RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D8FF7F0)
#define RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D8FF7B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayCrossHairPreviewFadeIn_TypeDefinitionIndex = 22944;

	class PlayCrossHairPreviewFadeIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Single FadeInOverrideTime; // 0x18
		::System::Boolean PlayOnAllTarget; // 0x1C
		::System::Byte _padding0[0x3];
		::System::String* FadeInOverrideAnimName; // 0x20
		::System::String* LoopOverrideAnimName; // 0x28
		::System::Boolean RefreshTargetInfo; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayCrossHairPreviewFadeIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayCrossHairPreviewFadeIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayCrossHairPreviewFadeIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayCrossHairPreviewFadeIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYCROSSHAIRPREVIEWFADEIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
