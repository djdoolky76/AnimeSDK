#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameLevelCurveInfo; }

#define RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7DDE60)
#define RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E3C90)
#define RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7DFED0)

namespace RPG::GameCore
{
	class LittleGameLevelCurveInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Boolean IsClosed; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelCurveInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelCurveInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelCurveInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELCURVEINFO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
