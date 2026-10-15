#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BABNOKHOBCF;
class MNCOPNHONHO;
class PIJMKBDHLBH;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xD45F5D0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_JMFPPJIMHEC_OFFSET UNITYSDK_OFFSET(0xD45F450)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_LHFANFKFCIF_OFFSET UNITYSDK_OFFSET(0xD45F360)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_OBHAJMPIOIM_OFFSET UNITYSDK_OFFSET(0xD45F3F0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_STARTCURVE_OFFSET UNITYSDK_OFFSET(0xD45F250)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelDeadCurve_TypeDefinitionIndex = 76836;

	class FourRotateVoxelDeadCurve : public ::RPG::Client::LittleGame::FourRotateVoxel::FouRotateVoxelSimpleCameraCurveBase
	{
	public:
		::System::Single DelayStartTime; // 0x78
		::System::Single BlendToPlayerDuration; // 0x7C
		::UnityEngine::AnimationCurve* BlendToPlayerCurve; // 0x80
		::Cinemachine::CinemachineVirtualCamera* EDPKNBLEGOD; // 0x88
		::System::Action* BJLJAHMLKIO; // 0x90
		::UnityEngine::Vector3 BCMDOLAFMHI; // 0x98
		::UnityEngine::Vector3 KMMDODFNJFM; // 0xA4
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_CTOR_OFFSET))(this);
		}

		::System::Void StartCurve(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2, ::PIJMKBDHLBH* a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5, ::System::Action* a6)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*, ::PIJMKBDHLBH*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_STARTCURVE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LHFANFKFCIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_LHFANFKFCIF_OFFSET))(this);
		}

		::System::Void OBHAJMPIOIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_OBHAJMPIOIM_OFFSET))(this);
		}

		::System::Void JMFPPJIMHEC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELDEADCURVE_JMFPPJIMHEC_OFFSET))(this, a1);
		}

	};
}
