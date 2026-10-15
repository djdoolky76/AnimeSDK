#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/FourRotateVoxel/FouRotateVoxelSimpleCameraCurveBase.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class BABNOKHOBCF;
class MNCOPNHONHO;
class PIJMKBDHLBH;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace RPG::Client { class MonoEffect; }
namespace RPG::Client::LittleGame::FourRotateVoxel { class FourRotateVoxelStructGameView; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Coroutine; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_BPBBGOODOJK_OFFSET UNITYSDK_OFFSET(0xD465FD0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CTOR_OFFSET UNITYSDK_OFFSET(0xD466510)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_DHOEOKAOBLO_OFFSET UNITYSDK_OFFSET(0xD4654B0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GEBFHDCLIGC_OFFSET UNITYSDK_OFFSET(0xD460A90)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GET_CURRCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xD4653D0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GET_ZOOMINSTEP_OFFSET UNITYSDK_OFFSET(0xD461830)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GJPOLOINEAL_OFFSET UNITYSDK_OFFSET(0xD460880)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GMBPHENIPKN_OFFSET UNITYSDK_OFFSET(0xD461310)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_JGDFMEHGJFF_OFFSET UNITYSDK_OFFSET(0xD465930)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_JMFPPJIMHEC_OFFSET UNITYSDK_OFFSET(0xD461840)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_KEAHOEGPEBB_OFFSET UNITYSDK_OFFSET(0xD4659C0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_KEHAKNFLKIG_OFFSET UNITYSDK_OFFSET(0xD4649A0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_KHOODHIGGKI_OFFSET UNITYSDK_OFFSET(0xD464470)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_LHFANFKFCIF_OFFSET UNITYSDK_OFFSET(0xD460FD0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_MKCCBCMDBNH_OFFSET UNITYSDK_OFFSET(0xD466310)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_NIHNGJDNKAH_OFFSET UNITYSDK_OFFSET(0xD460800)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_NJEMMPBPKON_OFFSET UNITYSDK_OFFSET(0xD461770)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_OBHAJMPIOIM_OFFSET UNITYSDK_OFFSET(0xD465CD0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD4661B0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_PABLONEGLEB_OFFSET UNITYSDK_OFFSET(0xD4658B0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_RESETBYINITIALCAMERAPOSITION_OFFSET UNITYSDK_OFFSET(0xD4660D0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_SETPLAYERPOSITION_OFFSET UNITYSDK_OFFSET(0xD460B40)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_STARTCURVE_OFFSET UNITYSDK_OFFSET(0xD460BB0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE__STARTCURVE_B__30_0_OFFSET UNITYSDK_OFFSET(0xD4668E0)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___UPDATECAMERATRANSFORM_B__36_0_OFFSET UNITYSDK_OFFSET(0xD466980)
#define RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___UPDATECAMERATRANSFORM_B__36_1_OFFSET UNITYSDK_OFFSET(0xD466B50)

namespace RPG::Client::LittleGame::FourRotateVoxel
{
	inline static constexpr unsigned int FourRotateVoxelGameStartCurve_TypeDefinitionIndex = 76838;

	class FourRotateVoxelGameStartCurve : public ::RPG::Client::LittleGame::FourRotateVoxel::FouRotateVoxelSimpleCameraCurveBase
	{
	public:
		::System::Single DelayStartTime; // 0x78
		::System::Single DelaySetAnimalColorTime; // 0x7C
		::System::Single StartOrthographicSize; // 0x80
		::System::Single TargetOrthographicSize; // 0x84
		::System::Single ZoomOutDuration; // 0x88
		::System::Byte _padding0[0x4];
		::UnityEngine::AnimationCurve* ZoomOutCurve; // 0x90
		::System::Single DelayRotate; // 0x98
		::System::Single DelayZoomInTime; // 0x9C
		::System::Single ZoomInDuration; // 0xA0
		::System::Byte _padding1[0x4];
		::UnityEngine::AnimationCurve* ZoomInCurve; // 0xA8
		::System::Single BlendToPlayerDuration; // 0xB0
		::System::Byte _padding2[0x4];
		::UnityEngine::AnimationCurve* BlendToPlayerCurve; // 0xB8
		::System::Boolean OGJHABCCJHD; // 0xC0
		::System::Byte _padding3[0x3];
		::System::Single ColorDuration; // 0xC4
		::System::Single ColorRadius; // 0xC8
		::System::Single RotateSpeed; // 0xCC
		::UnityEngine::AnimationCurve* RotateSpeedCurve; // 0xD0
		::UnityEngine::AnimationCurve* FinalRotateCurve; // 0xD8
		::System::Single OJMFLFEJEMO; // 0xE0
		::System::Single RandomSprayMaxDistance; // 0xE4
		::System::Single RandomSpraySpeed; // 0xE8
		::System::Single ColorLiquidMoveSpeed; // 0xEC
		::UnityEngine::Vector2 ColorLiquidRandomIntervalTime; // 0xF0
		::System::Single ColoringCameraMoveSpeed; // 0xF8
		::System::Single BBFDNJKIFKP; // 0xFC
		::System::Single NMIIBKJCAMH; // 0x100
		::System::Boolean IDJGFJIGCNA; // 0x104
		::System::Byte _padding4[0x3];
		::System::Int32 CBNCOPOENPN; // 0x108
		::System::Single CFKGKLEPEAJ; // 0x10C
		::System::Nullable_1<::System::Single> EODJJNCHECO; // 0x110
		::Cinemachine::CinemachineVirtualCamera* EDPKNBLEGOD; // 0x118
		::UnityEngine::Vector3 NJMCHCDFAPC; // 0x120
		::UnityEngine::Vector3 OKADADJIFAM; // 0x12C
		::UnityEngine::Vector3 KBJDEGEEJEI; // 0x138
		::System::Byte _padding5[0x4];
		::System::Collections::Generic::List_1<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*>* INDPPAEIICN; // 0x148
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::UnityEngine::Transform*>* NGCEDPAKDIF; // 0x150
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Tuple_2<::UnityEngine::Vector3, ::RPG::Client::MonoEffect*>*>* ABNNDMNIBLC; // 0x158
		::System::Collections::Generic::Dictionary_2<::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::System::Object*>* IIFKHPMPBNA; // 0x160
		::System::Collections::Generic::List_1<::System::Single>* IENCIIAABCJ; // 0x168
		::System::Single BACCIAAOJBB; // 0x170
		::System::Byte _padding6[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* IGEIODIAEGP; // 0x178
		::System::Collections::Generic::List_1<::System::Object*>* DHABOPLDDHD; // 0x180
		::System::Collections::Generic::List_1<::RPG::Client::MonoEffect*>* KKDKIPAHBEO; // 0x188
		::System::Int32 CPMLLGNOOIH; // 0x190
		::System::Boolean OEKJAJNHEBM; // 0x194
		::System::Boolean GHEEEIPEFAK; // 0x195
		::System::Byte _padding7[0x2];
		::UnityEngine::Vector3 AHGAHHFLANF; // 0x198
		::UnityEngine::Vector3 GDEIMGPKGML; // 0x1A4
		::System::Boolean KFACBCHEAEI; // 0x1B0
		::System::Byte _padding8[0x7];
		::System::Collections::Generic::List_1<::UnityEngine::Coroutine*>* FIOONNCIFBA; // 0x1B8
		::System::Collections::Generic::List_1<::System::UInt32>* LGNFLEGGCIG; // 0x1C0
		::System::Boolean GCAJNHIBJHK; // 0x1C8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_CTOR_OFFSET))(this);
		}

		::System::Single NIHNGJDNKAH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_NIHNGJDNKAH_OFFSET))(this);
		}

		::System::Single GJPOLOINEAL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GJPOLOINEAL_OFFSET))(this);
		}

		::System::Void SetPlayerPosition(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_SETPLAYERPOSITION_OFFSET))(this, a1);
		}

		::System::Void StartCurve(::BABNOKHOBCF* a1, ::MNCOPNHONHO* a2, ::PIJMKBDHLBH* a3, ::System::Nullable_1<::System::Single> a4)
		{
			return ((::System::Void(*)(::PVOID, ::BABNOKHOBCF*, ::MNCOPNHONHO*, ::PIJMKBDHLBH*, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_STARTCURVE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void LHFANFKFCIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_LHFANFKFCIF_OFFSET))(this);
		}

		::System::Int32 get_ZoomInStep()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GET_ZOOMINSTEP_OFFSET))(this);
		}

		::System::Void JMFPPJIMHEC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_JMFPPJIMHEC_OFFSET))(this, a1);
		}

		::System::Void KHOODHIGGKI(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_KHOODHIGGKI_OFFSET))(this, a1, a2);
		}

		::System::Void PABLONEGLEB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_PABLONEGLEB_OFFSET))(this, a1);
		}

		::System::Void KEHAKNFLKIG(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_KEHAKNFLKIG_OFFSET))(this, a1);
		}

		::System::Void NJEMMPBPKON(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_NJEMMPBPKON_OFFSET))(this, a1);
		}

		::System::Boolean DHOEOKAOBLO(::System::Single a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_DHOEOKAOBLO_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 KEAHOEGPEBB(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_KEAHOEGPEBB_OFFSET))(this, a1, a2);
		}

		::System::Void OBHAJMPIOIM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_OBHAJMPIOIM_OFFSET))(this);
		}

		::System::Void ResetByInitialCameraPosition(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_RESETBYINITIALCAMERAPOSITION_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Vector3 get_CurrCameraPosition()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GET_CURRCAMERAPOSITION_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_ONDESTROY_OFFSET))(this);
		}

		::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* JGDFMEHGJFF()
		{
			return ((::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_JGDFMEHGJFF_OFFSET))(this);
		}

		::UnityEngine::Vector3 MKCCBCMDBNH(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_MKCCBCMDBNH_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 GEBFHDCLIGC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GEBFHDCLIGC_OFFSET))(this);
		}

		::System::Void GMBPHENIPKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_GMBPHENIPKN_OFFSET))(this);
		}

		::System::Void BPBBGOODOJK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE_BPBBGOODOJK_OFFSET))(this);
		}

		::System::Int32 _StartCurve_b__30_0(::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a1, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*, ::RPG::Client::LittleGame::FourRotateVoxel::FourRotateVoxelStructGameView*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE__STARTCURVE_B__30_0_OFFSET))(this, a1, a2);
		}

		::System::Void __UpdateCameraTransform_b__36_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___UPDATECAMERATRANSFORM_B__36_0_OFFSET))(this);
		}

		::System::Void __UpdateCameraTransform_b__36_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_FOURROTATEVOXEL_FOURROTATEVOXELGAMESTARTCURVE___UPDATECAMERATRANSFORM_B__36_1_OFFSET))(this);
		}

	};
}
