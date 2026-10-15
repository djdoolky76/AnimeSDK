#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelGameView.h"

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXEL2DBRICKGAMEVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0xD45EB00)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXEL2DBRICKGAMEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD45EBD0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	class FourRotateVoxel2DBrickGameView : public ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelGameView
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXEL2DBRICKGAMEVIEW_CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXEL2DBRICKGAMEVIEW_AWAKE_OFFSET))(this);
		}

	};
}
