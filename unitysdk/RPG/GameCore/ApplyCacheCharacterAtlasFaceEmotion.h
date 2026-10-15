#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ApplyCacheCharacterAtlasFaceEmotion; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_APPLYCACHECHARACTERATLASFACEEMOTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3C86B0)
#define RPG_GAMECORE_APPLYCACHECHARACTERATLASFACEEMOTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3C86C0)
#define RPG_GAMECORE_APPLYCACHECHARACTERATLASFACEEMOTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3C8680)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ApplyCacheCharacterAtlasFaceEmotion_TypeDefinitionIndex = 20628;

	class ApplyCacheCharacterAtlasFaceEmotion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYCACHECHARACTERATLASFACEEMOTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ApplyCacheCharacterAtlasFaceEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ApplyCacheCharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYCACHECHARACTERATLASFACEEMOTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ApplyCacheCharacterAtlasFaceEmotion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ApplyCacheCharacterAtlasFaceEmotion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_APPLYCACHECHARACTERATLASFACEEMOTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
