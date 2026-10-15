#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::Client { class ShowMatchThreeV2LevelPreparePage; }

#define RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D336FA0)
#define RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D336FB0)
#define RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D336F70)

namespace RPG::Client
{
	inline static constexpr unsigned int ShowMatchThreeV2LevelPreparePage_TypeDefinitionIndex = 10255;

	class ShowMatchThreeV2LevelPreparePage : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 levelID; // 0x18
		::System::Boolean isShowWinResultPage; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::Client::ShowMatchThreeV2LevelPreparePage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ShowMatchThreeV2LevelPreparePage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::Client::ShowMatchThreeV2LevelPreparePage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::Client::ShowMatchThreeV2LevelPreparePage*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOWMATCHTHREEV2LEVELPREPAREPAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
