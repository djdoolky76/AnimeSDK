#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameViewComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimStageViewConfig; }

#define RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1E8E8630)
#define RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E8E8640)
#define RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E8E8600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimStageViewConfig_TypeDefinitionIndex = 18710;

	class FiveDimStageViewConfig : public ::RPG::GameCore::LittleGameViewComponentConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStageViewConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStageViewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimStageViewConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimStageViewConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSTAGEVIEWCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
