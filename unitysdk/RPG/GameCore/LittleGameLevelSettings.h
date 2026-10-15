#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LittleGameLevelSettings; }

#define RPG_GAMECORE_LITTLEGAMELEVELSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7E3DA0)
#define RPG_GAMECORE_LITTLEGAMELEVELSETTINGS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7E3DB0)
#define RPG_GAMECORE_LITTLEGAMELEVELSETTINGS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7E3980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameLevelSettings_TypeDefinitionIndex = 18840;

	class LittleGameLevelSettings : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELSETTINGS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelSettings* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELSETTINGS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LittleGameLevelSettings* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LittleGameLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMELEVELSETTINGS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
