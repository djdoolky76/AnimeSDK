#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CNHKFCHOEHK.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StagePVSOfflineSceneItemInfo; }

#define RPG_GAMECORE_STAGEPVSOFFLINESCENEITEMINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB12970)
#define RPG_GAMECORE_STAGEPVSOFFLINESCENEITEMINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB12710)

namespace RPG::GameCore
{
	class StagePVSOfflineSceneItemInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 lod0PathIndex; // 0x10
		::CNHKFCHOEHK matrix; // 0x14
		::System::Int32 OwnerBlockIndex; // 0x54
		::System::Int32 prefabIndex; // 0x58
		::System::Int32 prefabInstanceIndex; // 0x5C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESCENEITEMINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::StagePVSOfflineSceneItemInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StagePVSOfflineSceneItemInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STAGEPVSOFFLINESCENEITEMINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
