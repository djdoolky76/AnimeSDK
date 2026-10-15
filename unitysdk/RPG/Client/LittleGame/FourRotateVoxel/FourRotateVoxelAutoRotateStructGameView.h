#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelStructGameView.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELAUTOROTATESTRUCTGAMEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD455F70)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELAUTOROTATESTRUCTGAMEVIEW_DCGEOLANHKK_OFFSET UNITYSDK_OFFSET(0xD455F20)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelAutoRotateStructGameView_TypeDefinitionIndex = 76851;

	class FourRotateVoxelAutoRotateStructGameView : public ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView
	{
	public:
		::System::Boolean IsClockwiseRotate; // 0xF8
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector2 RotateRandomInterval; // 0xFC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELAUTOROTATESTRUCTGAMEVIEW_CTOR_OFFSET))(this);
		}

		::System::Void DCGEOLANHKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELAUTOROTATESTRUCTGAMEVIEW_DCGEOLANHKK_OFFSET))(this);
		}

	};
}
