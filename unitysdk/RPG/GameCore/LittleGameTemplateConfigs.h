#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameTemplateConfigs; }

#define RPG_GAMECORE_LITTLEGAMETEMPLATECONFIGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E7090)
#define RPG_GAMECORE_LITTLEGAMETEMPLATECONFIGS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E7050)

namespace RPG::GameCore
{
	class LittleGameTemplateConfigs : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETEMPLATECONFIGS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameTemplateConfigs* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameTemplateConfigs*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMETEMPLATECONFIGS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
