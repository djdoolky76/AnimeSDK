#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BILMKGHAIOC.h"
#include "unitysdk/HGBCMFANCOE.h"
#include "unitysdk/KLNKLOMDIIC.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector3.h"
class HIOEAKHGILF;
class NDDFLGNNMDK;
class PEEDLCHFAFL;
namespace RPG::Client::LittleGame::FiveDim { class FiveDimMonoCamera; }
namespace RPG::GameCore { class FiveDimCameraFollowConfig; }
namespace RPG::GameCore { class FiveDimCameraLensConfig; }
namespace RPG::GameCore { class FiveDimCameraObserveConfig; }

#define FJKLPJPAHBM_ABDLODJPOFB_OFFSET UNITYSDK_OFFSET(0x157D4920)
#define FJKLPJPAHBM_CGEDCPHBOGM_OFFSET UNITYSDK_OFFSET(0x157D3A00)
#define FJKLPJPAHBM_CTOR_OFFSET UNITYSDK_OFFSET(0x157D2440)
#define FJKLPJPAHBM_DHDEFMPEEKE_OFFSET UNITYSDK_OFFSET(0x157D2920)
#define FJKLPJPAHBM_FLMJPMHBMNG_OFFSET UNITYSDK_OFFSET(0x157D39A0)
#define FJKLPJPAHBM_HAPBMPKHDNB_OFFSET UNITYSDK_OFFSET(0x157D2550)
#define FJKLPJPAHBM_HPMDLFADADH_OFFSET UNITYSDK_OFFSET(0x157D3810)
#define FJKLPJPAHBM_LATEEXECUTE_OFFSET UNITYSDK_OFFSET(0x157D24E0)
#define FJKLPJPAHBM_LHIGDAHGMHB_OFFSET UNITYSDK_OFFSET(0x157D2B60)
#define FJKLPJPAHBM_MELGAPEHNKG_OFFSET UNITYSDK_OFFSET(0x157D3930)
#define FJKLPJPAHBM_NICFCKBOLPL_OFFSET UNITYSDK_OFFSET(0x157D65C0)
#define FJKLPJPAHBM_PIBCNDJPKNG_OFFSET UNITYSDK_OFFSET(0x157D2D40)
#define FJKLPJPAHBM__CLEARACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x157D3B10)
#define FJKLPJPAHBM__CLEARCAMERAOBSERVEINPUT_OFFSET UNITYSDK_OFFSET(0x157D77A0)
#define FJKLPJPAHBM__COMPUTEFOLLOWROTATION_OFFSET UNITYSDK_OFFSET(0x157D5210)
#define FJKLPJPAHBM__COMPUTESCREENYREVERSE_OFFSET UNITYSDK_OFFSET(0x157D6410)
#define FJKLPJPAHBM__COMPUTETARGETSPACE_OFFSET UNITYSDK_OFFSET(0x157D4A80)
#define FJKLPJPAHBM__DAMPFOLLOWFORGRAVITYFIELDRING_OFFSET UNITYSDK_OFFSET(0x157D5A40)
#define FJKLPJPAHBM__GETROOTENTITYWORLDTRANSFORM_OFFSET UNITYSDK_OFFSET(0x157D7B90)
#define FJKLPJPAHBM__GETVIEWBOUND_OFFSET UNITYSDK_OFFSET(0x157D79D0)
#define FJKLPJPAHBM__GETWATERLEVELHEIGHT_OFFSET UNITYSDK_OFFSET(0x157D7B10)
#define FJKLPJPAHBM__HASVIEWBOUND_OFFSET UNITYSDK_OFFSET(0x157D7920)
#define FJKLPJPAHBM__HASWATERREFLECTION_OFFSET UNITYSDK_OFFSET(0x157D7A60)
#define FJKLPJPAHBM__INITACTIVECAMERA_OFFSET UNITYSDK_OFFSET(0x157D4380)
#define FJKLPJPAHBM__SETACTIVECAMERAVIEW_OFFSET UNITYSDK_OFFSET(0x157D3D90)
#define FJKLPJPAHBM__UPDATEFOLLOWCAMERAOBSERVE_OFFSET UNITYSDK_OFFSET(0x157D6810)
#define FJKLPJPAHBM__UPDATELOOKAHEADX_OFFSET UNITYSDK_OFFSET(0x157D58E0)

	class FJKLPJPAHBM
	{
	public:
		::PEEDLCHFAFL* PDENFEFCAGN; // 0x98
		::NDDFLGNNMDK* FKINCGODJEP; // 0xA0
		::System::UInt32 HCKKABGFKAA; // 0xA8
		::System::Int32 BGHOGCHFLJK; // 0xAC
		::System::Int32 LFOFAKKCPNI; // 0xB0
		::System::Int32 GNKONLBNDMF; // 0xB4
		::System::Void _ctor(::NDDFLGNNMDK* a1, ::PEEDLCHFAFL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::NDDFLGNNMDK*, ::PEEDLCHFAFL*))((::PBYTE)hIl2Cpp + FJKLPJPAHBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void LateExecute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKLPJPAHBM_LATEEXECUTE_OFFSET))(this);
		}

		::System::Void HPMDLFADADH(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FJKLPJPAHBM_HPMDLFADADH_OFFSET))(this, a1);
		}

		::System::Void MELGAPEHNKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKLPJPAHBM_MELGAPEHNKG_OFFSET))(this);
		}

		::System::Void DHDEFMPEEKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKLPJPAHBM_DHDEFMPEEKE_OFFSET))(this);
		}

		::System::Void HAPBMPKHDNB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKLPJPAHBM_HAPBMPKHDNB_OFFSET))(this);
		}

		::System::Void FLMJPMHBMNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKLPJPAHBM_FLMJPMHBMNG_OFFSET))(this);
		}

		::System::Void CGEDCPHBOGM(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FJKLPJPAHBM_CGEDCPHBOGM_OFFSET))(this, a1);
		}

		::System::Void LHIGDAHGMHB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKLPJPAHBM_LHIGDAHGMHB_OFFSET))(this);
		}

		::System::Void PIBCNDJPKNG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKLPJPAHBM_PIBCNDJPKNG_OFFSET))(this);
		}

		::System::Void _ClearActiveCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKLPJPAHBM__CLEARACTIVECAMERA_OFFSET))(this);
		}

		::System::Void _SetActiveCameraView(::HIOEAKHGILF* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FJKLPJPAHBM__SETACTIVECAMERAVIEW_OFFSET))(this, a1);
		}

		::System::Void _InitActiveCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKLPJPAHBM__INITACTIVECAMERA_OFFSET))(this);
		}

		static ::System::Void ABDLODJPOFB(::HIOEAKHGILF* a1, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera* a2, ::RPG::GameCore::FiveDimCameraLensConfig* a3)
		{
			return ((::System::Void(*)(::HIOEAKHGILF*, ::RPG::Client::LittleGame::FiveDim::FiveDimMonoCamera*, ::RPG::GameCore::FiveDimCameraLensConfig*))((::PBYTE)hIl2Cpp + FJKLPJPAHBM_ABDLODJPOFB_OFFSET))(a1, a2, a3);
		}

		::KLNKLOMDIIC _ComputeTargetSpace(::BILMKGHAIOC a1, ::HGBCMFANCOE a2)
		{
			return ((::KLNKLOMDIIC(*)(::PVOID, ::BILMKGHAIOC, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FJKLPJPAHBM__COMPUTETARGETSPACE_OFFSET))(this, a1, a2);
		}

		::System::Void _ComputeFollowRotation(::HIOEAKHGILF* a1, ::HGBCMFANCOE a2, ::BILMKGHAIOC a3, ::RPG::GameCore::FiveDimCameraFollowConfig* a4)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HGBCMFANCOE, ::BILMKGHAIOC, ::RPG::GameCore::FiveDimCameraFollowConfig*))((::PBYTE)hIl2Cpp + FJKLPJPAHBM__COMPUTEFOLLOWROTATION_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _UpdateLookAheadX(::RPG::GameCore::FiveDimCameraFollowConfig* a1, ::HGBCMFANCOE a2, ::BILMKGHAIOC a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::HGBCMFANCOE, ::BILMKGHAIOC))((::PBYTE)hIl2Cpp + FJKLPJPAHBM__UPDATELOOKAHEADX_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _DampFollowForGravityFieldRing(::HGBCMFANCOE a1, ::BILMKGHAIOC a2, ::RPG::GameCore::FiveDimCameraFollowConfig* a3, ::UnityEngine::Vector3 a4)
		{
			return ((::System::Void(*)(::PVOID, ::HGBCMFANCOE, ::BILMKGHAIOC, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FJKLPJPAHBM__DAMPFOLLOWFORGRAVITYFIELDRING_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void _ComputeScreenYReverse(::RPG::GameCore::FiveDimCameraFollowConfig* a1, ::HGBCMFANCOE a2, ::BILMKGHAIOC a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::HGBCMFANCOE, ::BILMKGHAIOC, ::System::Single))((::PBYTE)hIl2Cpp + FJKLPJPAHBM__COMPUTESCREENYREVERSE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single NICFCKBOLPL(::HGBCMFANCOE a1)
		{
			return ((::System::Single(*)(::PVOID, ::HGBCMFANCOE))((::PBYTE)hIl2Cpp + FJKLPJPAHBM_NICFCKBOLPL_OFFSET))(this, a1);
		}

		::System::Void _UpdateFollowCameraObserve(::HIOEAKHGILF* a1, ::HIOEAKHGILF* a2, ::HGBCMFANCOE a3, ::BILMKGHAIOC a4, ::RPG::GameCore::FiveDimCameraFollowConfig* a5, ::RPG::GameCore::FiveDimCameraObserveConfig* a6)
		{
			return ((::System::Void(*)(::PVOID, ::HIOEAKHGILF*, ::HIOEAKHGILF*, ::HGBCMFANCOE, ::BILMKGHAIOC, ::RPG::GameCore::FiveDimCameraFollowConfig*, ::RPG::GameCore::FiveDimCameraObserveConfig*))((::PBYTE)hIl2Cpp + FJKLPJPAHBM__UPDATEFOLLOWCAMERAOBSERVE_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void _ClearCameraObserveInput()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKLPJPAHBM__CLEARCAMERAOBSERVEINPUT_OFFSET))(this);
		}

		::System::Boolean _HasViewBound(::HIOEAKHGILF* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FJKLPJPAHBM__HASVIEWBOUND_OFFSET))(this, a1);
		}

		::UnityEngine::Bounds _GetViewBound(::HIOEAKHGILF* a1)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::HIOEAKHGILF*))((::PBYTE)hIl2Cpp + FJKLPJPAHBM__GETVIEWBOUND_OFFSET))(this, a1);
		}

		::System::Boolean _HasWaterReflection()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKLPJPAHBM__HASWATERREFLECTION_OFFSET))(this);
		}

		::System::Single _GetWaterLevelHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKLPJPAHBM__GETWATERLEVELHEIGHT_OFFSET))(this);
		}

		::KLNKLOMDIIC _GetRootEntityWorldTransform()
		{
			return ((::KLNKLOMDIIC(*)(::PVOID))((::PBYTE)hIl2Cpp + FJKLPJPAHBM__GETROOTENTITYWORLDTRANSFORM_OFFSET))(this);
		}

	};
