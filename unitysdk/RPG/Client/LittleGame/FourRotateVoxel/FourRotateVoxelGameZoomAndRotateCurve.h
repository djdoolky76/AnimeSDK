#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class BABNOKHOBCF;
class MNCOPNHONHO;
class PIJMKBDHLBH;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xD46B170)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_GET_CURRCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xD46A0C0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_GMBPHENIPKN_OFFSET UNITYSDK_OFFSET(0xD469C30)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_JMFPPJIMHEC_OFFSET UNITYSDK_OFFSET(0xD46A4E0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_LHFANFKFCIF_OFFSET UNITYSDK_OFFSET(0xD46A1A0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_OBHAJMPIOIM_OFFSET UNITYSDK_OFFSET(0xD46A270)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_STARTCURVE_OFFSET UNITYSDK_OFFSET(0xD469820)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameZoomAndRotateCurve_TypeDefinitionIndex = 76846;

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
		::System::Int32 JAEILJJCBAO; // 0xD4
		::Cinemachine::CinemachineVirtualCamera* EDPKNBLEGOD; // 0xD8
		::System::Action* BJLJAHMLKIO; // 0xE0
		::System::Boolean EBCAOFLACKM; // 0xE8
		::System::Boolean DMJKEOHADJD; // 0xE9
		::System::Byte _padding1[0x2];
		::System::Single NKLMMPKHEPL; // 0xEC
		::UnityEngine::Vector3 GDEIMGPKGML; // 0xF0
		::System::Int32 KPGALMHFPPJ; // 0xFC
		::System::String* LCJCCNJNADJ; // 0x100
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_CTOR_OFFSET))(this);
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

		::UnityEngine::Vector3 get_CurrCameraPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_GET_CURRCAMERAPOSITION_OFFSET))(this);
		}

		::System::Void GMBPHENIPKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMEZOOMANDROTATECURVE_GMBPHENIPKN_OFFSET))(this);
		}

	};
}
