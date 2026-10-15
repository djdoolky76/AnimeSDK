#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerHPRatioCheck; }

#define RPG_GAMECORE_PLAYERHPRATIOCHECK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D933E30)
#define RPG_GAMECORE_PLAYERHPRATIOCHECK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D933E40)
#define RPG_GAMECORE_PLAYERHPRATIOCHECK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D933E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerHPRatioCheck_TypeDefinitionIndex = 22959;

	class PlayerHPRatioCheck : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 AvatarID; // 0x18
		::RPG::GameCore::CompareType CompareType; // 0x1C
		::RPG::GameCore::FixPoint TargetHPRatio; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERHPRATIOCHECK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerHPRatioCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerHPRatioCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERHPRATIOCHECK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerHPRatioCheck* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerHPRatioCheck*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERHPRATIOCHECK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
