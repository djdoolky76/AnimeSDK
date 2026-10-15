#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelPresetTeamConfig; }
namespace System { class String; }

#define RPG_GAMECORE_CHIMERADUELPRESETTEAMCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D579A50)
#define RPG_GAMECORE_CHIMERADUELPRESETTEAMCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5796E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelPresetTeamConfig_TypeDefinitionIndex = 16027;

	class ChimeraDuelPresetTeamConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::System::String*>* ChimeraPresetPaths; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETTEAMCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelPresetTeamConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelPresetTeamConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELPRESETTEAMCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
