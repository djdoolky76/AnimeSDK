#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameCurveInfoConfig; }
namespace RPG::GameCore { class LittleGameLevelCurveInfo; }

#define RPG_GAMECORE_LITTLEGAMECURVEINFOCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DFE40)
#define RPG_GAMECORE_LITTLEGAMECURVEINFOCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7DFE50)
#define RPG_GAMECORE_LITTLEGAMECURVEINFOCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DFDA0)

namespace RPG::GameCore
{
	class LittleGameCurveInfoConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::RPG::GameCore::LittleGameLevelCurveInfo* Curve; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECURVEINFOCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameCurveInfoConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameCurveInfoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECURVEINFOCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameCurveInfoConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameCurveInfoConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMECURVEINFOCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
