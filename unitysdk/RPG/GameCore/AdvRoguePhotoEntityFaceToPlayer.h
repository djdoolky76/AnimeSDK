#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvRoguePhotoEntityFaceToPlayer; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVROGUEPHOTOENTITYFACETOPLAYER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D37F260)
#define RPG_GAMECORE_ADVROGUEPHOTOENTITYFACETOPLAYER_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D37F270)
#define RPG_GAMECORE_ADVROGUEPHOTOENTITYFACETOPLAYER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D37F230)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvRoguePhotoEntityFaceToPlayer_TypeDefinitionIndex = 20567;

	class AdvRoguePhotoEntityFaceToPlayer : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* SourceType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVROGUEPHOTOENTITYFACETOPLAYER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVROGUEPHOTOENTITYFACETOPLAYER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvRoguePhotoEntityFaceToPlayer*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVROGUEPHOTOENTITYFACETOPLAYER_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
