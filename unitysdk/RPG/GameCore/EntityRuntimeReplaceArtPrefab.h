#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EntityLodLoadingArtData; }
namespace RPG::GameCore { class EntityRuntimeReplaceArtPrefab; }

#define RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFAB_CTOR_OFFSET UNITYSDK_OFFSET(0x1D679B10)
#define RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFAB_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D679A80)

namespace RPG::GameCore
{
	class EntityRuntimeReplaceArtPrefab : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EntityLodLoadingArtData* ArtConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFAB_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EntityRuntimeReplaceArtPrefab* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EntityRuntimeReplaceArtPrefab*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ENTITYRUNTIMEREPLACEARTPREFAB_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
