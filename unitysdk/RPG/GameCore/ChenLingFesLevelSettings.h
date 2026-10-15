#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameLevelSettings.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChenLingFesLevelSettings; }

#define RPG_GAMECORE_CHENLINGFESLEVELSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D58F8E0)
#define RPG_GAMECORE_CHENLINGFESLEVELSETTINGS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D58F8F0)
#define RPG_GAMECORE_CHENLINGFESLEVELSETTINGS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D58F820)

namespace RPG::GameCore
{
	class ChenLingFesLevelSettings : public ::RPG::GameCore::LittleGameLevelSettings
	{
	public:
		::System::Int32 InitFeverValue; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELSETTINGS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesLevelSettings* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELSETTINGS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChenLingFesLevelSettings* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChenLingFesLevelSettings*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHENLINGFESLEVELSETTINGS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
