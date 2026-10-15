#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FourRotateVoxelStructGameView.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELMOVESTRUCTGAMEVIEW_CTOR_OFFSET UNITYSDK_OFFSET(0xD4628E0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELMOVESTRUCTGAMEVIEW_DCGEOLANHKK_OFFSET UNITYSDK_OFFSET(0xD462890)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelMoveStructGameView_TypeDefinitionIndex = 76857;

	class FourRotateVoxelMoveStructGameView : public ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* TargetPositions; // 0xF8
		::System::Collections::Generic::List_1<::UnityEngine::Vector3>* PrivateTargetPositions; // 0x100
		::System::Collections::Generic::List_1<::System::Single>* MoveDurations; // 0x108
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELMOVESTRUCTGAMEVIEW_CTOR_OFFSET))(this);
		}

		::System::Void DCGEOLANHKK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELMOVESTRUCTGAMEVIEW_DCGEOLANHKK_OFFSET))(this);
		}

	};
}
