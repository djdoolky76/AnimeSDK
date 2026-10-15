#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/RPG/Client/TriggerEffectParamsRef.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/RPG/Client/TriggerEffectCallbackParams.h"
class BABNOKHOBCF;
class MNCOPNHONHO;
class PIJMKBDHLBH;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class MonoEffect; }
namespace System { class Action; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xD460790)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_GET_CURRCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xD4606B0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_GMBPHENIPKN_OFFSET UNITYSDK_OFFSET(0xD45F8B0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_JMFPPJIMHEC_OFFSET UNITYSDK_OFFSET(0xD45FE00)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_LHFANFKFCIF_OFFSET UNITYSDK_OFFSET(0xD45FBF0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_NJEMMPBPKON_OFFSET UNITYSDK_OFFSET(0xD460610)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_OBHAJMPIOIM_OFFSET UNITYSDK_OFFSET(0xD45FC80)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_STARTCURVE_OFFSET UNITYSDK_OFFSET(0xD45F5F0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE___UPDATECAMERATRANSFORM_B__13_0_OFFSET UNITYSDK_OFFSET(0xD4607F0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	class FourRotateVoxelGameFinishCurve : public ::RPG::Client::LittleGame::FourRotateVoxel::FouRotateVoxelSimpleCameraCurveBase
	{
	public:
		::System::Single DelayStartTime; // 0x78
		::System::Single TargetOrthographicSize; // 0x7C
		::System::Single ZoomOutDuration; // 0x80
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* ZoomOutCurve; // 0x88
		::System::Single FocusAnimalDuration; // 0x90
		::System::Single DelayFadeEffectTime; // 0x94
		::System::Single DelayChangeAnimalColorTime; // 0x98
		::System::Single ZoomInDuration; // 0x9C
		::UnityEngine::AnimationCurve* ZoomInCurve; // 0xA0
		::System::Boolean INJJGMIGFFD; // 0xA8
		::System::Byte _padding1[0x3];
		::System::Int32 GLNMMIEPAIO; // 0xAC
		::System::Single FOKMMMMGIJI; // 0xB0
		::UnityEngine::Vector3 MNAMIJEKLOC; // 0xB4
		::UnityEngine::Vector3 OCIEOCEKBAO; // 0xC0
		::System::Byte _padding2[0x4];
		::RPG::Client::TriggerEffectParamsRef BFBOGIJAKHG; // 0xD0
		::RPG::Client::MonoEffect* FBBEBPOAMHP; // 0xE0
		::Cinemachine::CinemachineVirtualCamera* EDPKNBLEGOD; // 0xE8
		::System::Action* BJLJAHMLKIO; // 0xF0
		::System::Boolean PCEGGLGLCEM; // 0xF8
		::System::Byte _padding3[0x3];
		::UnityEngine::Vector3 GDEIMGPKGML; // 0xFC
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_CTOR_OFFSET))(this);
		}

		::System::Void StartCurve(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2, ::PIJMKBDHLBH* a3, ::System::Action* a4)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*, ::PIJMKBDHLBH*, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_STARTCURVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LHFANFKFCIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_LHFANFKFCIF_OFFSET))(this);
		}

		::System::Void OBHAJMPIOIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_OBHAJMPIOIM_OFFSET))(this);
		}

		::System::Void JMFPPJIMHEC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_JMFPPJIMHEC_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 get_CurrCameraPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_GET_CURRCAMERAPOSITION_OFFSET))(this);
		}

		::System::Void NJEMMPBPKON(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_NJEMMPBPKON_OFFSET))(this, a1);
		}

		::System::Void GMBPHENIPKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE_GMBPHENIPKN_OFFSET))(this);
		}

		::System::Void __UpdateCameraTransform_b__13_0(::RPG::Client::MonoEffect* a1, ::RPG::Client::TriggerEffectCallbackParams a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*, ::RPG::Client::TriggerEffectCallbackParams))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEFINISHCURVE___UPDATECAMERATRANSFORM_B__13_0_OFFSET))(this, a1, a2);
		}

	};
}
