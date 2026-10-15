#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TerrainStageLodConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_TERRAINSTAGELODCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB800B0)
#define RPG_GAMECORE_TERRAINSTAGELODCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB7FFE0)

namespace RPG::GameCore
{
	class TerrainStageLodConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* LodMap; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TERRAINSTAGELODCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TerrainStageLodConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TerrainStageLodConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TERRAINSTAGELODCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
