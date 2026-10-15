#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FourRotateVoxelGameModeConfig; }
namespace System { class String; }

#define RPG_GAMECORE_FOURROTATEVOXELGAMEMODECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6EF690)
#define RPG_GAMECORE_FOURROTATEVOXELGAMEMODECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6EF5C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FourRotateVoxelGameModeConfig_TypeDefinitionIndex = 16742;

	class FourRotateVoxelGameModeConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* GameModeTaskProgressText; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGAMEMODECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FourRotateVoxelGameModeConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FourRotateVoxelGameModeConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FOURROTATEVOXELGAMEMODECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
