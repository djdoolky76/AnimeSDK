#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BABNOKHOBCF;
class MNCOPNHONHO;
class PIJMKBDHLBH;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_BDPMIJCMJNM_OFFSET UNITYSDK_OFFSET(0xDED8DE0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_CCTOR_OFFSET UNITYSDK_OFFSET(0xDED9150)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xDED90E0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_EEOFNIPIEKO_OFFSET UNITYSDK_OFFSET(0xDED8CA0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_GET_CURRCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xDED9000)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_GMBPHENIPKN_OFFSET UNITYSDK_OFFSET(0xDED71F0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_JMFPPJIMHEC_OFFSET UNITYSDK_OFFSET(0xDED7AF0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_LHFANFKFCIF_OFFSET UNITYSDK_OFFSET(0xDED7670)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_LKCJCAMOIHL_OFFSET UNITYSDK_OFFSET(0xDED8D60)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_OBHAJMPIOIM_OFFSET UNITYSDK_OFFSET(0xDED7740)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_STARTCURVE_OFFSET UNITYSDK_OFFSET(0xDED6AF0)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameZoomAndRotateCurve_TypeDefinitionIndex = 79180;

	class FourRotateVoxelGameZoomAndRotateCurve : public ::RPG::Client::LittleGame::FourRotateVoxel::FouRotateVoxelSimpleCameraCurveBase
	{
	public:
		::System::Single TargetOrthographicSize; // 0x78
		::System::Single ZoomOutDuration; // 0x7C
		::UnityEngine::AnimationCurve* ZoomOutCurve; // 0x80
		::System::Single RotateDuration; // 0x88
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* RotateCurve; // 0x90
		::System::Single HDKHGKNBPBN; // 0x98
		::System::Single ZoomInDuration; // 0x9C
		::UnityEngine::AnimationCurve* ZoomInCurve; // 0xA0
		::System::Int32 TargetDirectionIndex; // 0xA8
		::System::Int32 MaxRotateLoops; // 0xAC
		::System::Int32 GLNMMIEPAIO; // 0xB0
		::System::Single FOKMMMMGIJI; // 0xB4
		::UnityEngine::Vector3 MNAMIJEKLOC; // 0xB8
		::UnityEngine::Quaternion KJCAIELAHME; // 0xC4
		::UnityEngine::Vector2 MCPDABFODGL; // 0xD4
		::UnityEngine::Vector3 PMNMJKNMFEP; // 0xDC
		::UnityEngine::Vector3 ODEEHOGDAKK; // 0xE8
		::UnityEngine::Vector3 KLNDEDPOCGH; // 0xF4
		::System::Int32 JAEILJJCBAO; // 0x100
		::System::Byte _padding1[0x4];
		::Cinemachine::CinemachineVirtualCamera* EDPKNBLEGOD; // 0x108
		::System::Action* BJLJAHMLKIO; // 0x110
		::System::Boolean EBCAOFLACKM; // 0x118
		::System::Boolean DMJKEOHADJD; // 0x119
		::System::Byte _padding2[0x2];
		::System::Single NKLMMPKHEPL; // 0x11C
		::UnityEngine::Vector3 GDEIMGPKGML; // 0x120
		::System::Int32 KPGALMHFPPJ; // 0x12C
		::System::String* LCJCCNJNADJ; // 0x130
		static ::UnityEngine::Vector2* StaticGet_CMNMCOMCNJK()
		{
			return (::UnityEngine::Vector2*)UnitySDK::FromName("RPG.Client.LittleGame.FourRotateVoxel", "FourRotateVoxelGameZoomAndRotateCurve")->GetStaticField(0xDD90);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_CCTOR_OFFSET))();
		}

		::System::Void StartCurve(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2, ::PIJMKBDHLBH* a3, ::System::Action* a4, ::System::Int32 a5, ::System::String* a6)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*, ::PIJMKBDHLBH*, ::System::Action*, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_STARTCURVE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void LHFANFKFCIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_LHFANFKFCIF_OFFSET))(this);
		}

		::System::Void OBHAJMPIOIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_OBHAJMPIOIM_OFFSET))(this);
		}

		::System::Void JMFPPJIMHEC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_JMFPPJIMHEC_OFFSET))(this, a1);
		}

		::System::Single EEOFNIPIEKO(::UnityEngine::AnimationCurve* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_EEOFNIPIEKO_OFFSET))(this, a1, a2);
		}

		::System::Void BDPMIJCMJNM(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::UnityEngine::Vector2, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_BDPMIJCMJNM_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::UnityEngine::Vector3 get_CurrCameraPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_GET_CURRCAMERAPOSITION_OFFSET))(this);
		}

		::UnityEngine::Vector3 LKCJCAMOIHL()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_LKCJCAMOIHL_OFFSET))(this);
		}

		::System::Void GMBPHENIPKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_GMBPHENIPKN_OFFSET))(this);
		}

	};
}
