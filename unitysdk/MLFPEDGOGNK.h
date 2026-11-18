#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/LensSettings.h"
#include "unitysdk/UnityEngine/Playables/PlayableBehaviour.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cinemachine/CameraState.h"
#include "unitysdk/UnityEngine/Playables/FrameData.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace Cinemachine { class CinemachineBasicMultiChannelPerlin; }
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class NoiseSettings; }
namespace MoleMole::Cameras { class AnimationVirtualCamera; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Transform; }

#define MLFPEDGOGNK_ALGBKLMGOFO_OFFSET UNITYSDK_OFFSET(0x16C9A600)
#define MLFPEDGOGNK_BFODBPKICCG_OFFSET UNITYSDK_OFFSET(0x16C981B0)
#define MLFPEDGOGNK_BGGGPJFEPJD_OFFSET UNITYSDK_OFFSET(0x16C9B410)
#define MLFPEDGOGNK_BKNOFBFABJG_OFFSET UNITYSDK_OFFSET(0x16C97D30)
#define MLFPEDGOGNK_EGADGIJOPOL_OFFSET UNITYSDK_OFFSET(0x16C9BB60)
#define MLFPEDGOGNK_FAAEEAKGEBI_OFFSET UNITYSDK_OFFSET(0x16C99010)
#define MLFPEDGOGNK_FBBKPKAGJAK_OFFSET UNITYSDK_OFFSET(0x16C9A5A0)
#define MLFPEDGOGNK_GHDJIEJFFKG_OFFSET UNITYSDK_OFFSET(0x16C9DE30)
#define MLFPEDGOGNK_GHEOIEOJFOH_OFFSET UNITYSDK_OFFSET(0x16C98E30)
#define MLFPEDGOGNK_GOEGFOELFLP_OFFSET UNITYSDK_OFFSET(0x16C9BBC0)
#define MLFPEDGOGNK_HCHCEDECJAC_OFFSET UNITYSDK_OFFSET(0x16C98BD0)
#define MLFPEDGOGNK_HDIEMEPKFNE_OFFSET UNITYSDK_OFFSET(0x16C9CA70)
#define MLFPEDGOGNK_IEPEOPHKHMC_OFFSET UNITYSDK_OFFSET(0x16C981F0)
#define MLFPEDGOGNK_IGADKPANHPI_OFFSET UNITYSDK_OFFSET(0x16C9C930)
#define MLFPEDGOGNK_JEJFCDMJAMC_OFFSET UNITYSDK_OFFSET(0x16C9B230)
#define MLFPEDGOGNK_JHNOIADHJID_OFFSET UNITYSDK_OFFSET(0x16C9C6E0)
#define MLFPEDGOGNK_JIIKLAHCBKN_OFFSET UNITYSDK_OFFSET(0x16C9C110)
#define MLFPEDGOGNK_JOGDGKLHJAC_OFFSET UNITYSDK_OFFSET(0x16C97CF0)
#define MLFPEDGOGNK_KCPNIFGGMAA_OFFSET UNITYSDK_OFFSET(0x16C9C050)
#define MLFPEDGOGNK_LCHPDDBBOCA_OFFSET UNITYSDK_OFFSET(0x16C9C170)
#define MLFPEDGOGNK_LJBLNIFDFAL_OFFSET UNITYSDK_OFFSET(0x16C9A210)
#define MLFPEDGOGNK_LMEGFIPJIAL_OFFSET UNITYSDK_OFFSET(0x16C9C010)
#define MLFPEDGOGNK_MBFEPBCELBJ_OFFSET UNITYSDK_OFFSET(0x16C98EA0)
#define MLFPEDGOGNK_MJBGOHGGKNJ_OFFSET UNITYSDK_OFFSET(0x16C9C2E0)
#define MLFPEDGOGNK_MOOABENAOAC_OFFSET UNITYSDK_OFFSET(0x16C990A0)
#define MLFPEDGOGNK_NANJAEHKCBN_OFFSET UNITYSDK_OFFSET(0x16C9CBA0)
#define MLFPEDGOGNK_OBHEEHPDALN_OFFSET UNITYSDK_OFFSET(0x16C9B120)
#define MLFPEDGOGNK_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x16C9A190)
#define MLFPEDGOGNK_PDEDKHJDBDD_OFFSET UNITYSDK_OFFSET(0x16C9A200)
#define MLFPEDGOGNK_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0x16C95FE0)
#define MLFPEDGOGNK__CTOR_OFFSET UNITYSDK_OFFSET(0x16C9A1F0)

inline static constexpr unsigned int MLFPEDGOGNK_TypeDefinitionIndex = 89396;

class MLFPEDGOGNK : public ::UnityEngine::Playables::PlayableBehaviour
{
public:
	// static const ::System::Boolean JDOEACGOOFO = 0x0; // 0x0
	// static const ::System::Single ACGONKGLBHC; // 0x0
	::UnityEngine::Camera* NEOECDLIEKP; // 0x10
	::MoleMole::Cameras::AnimationVirtualCamera* BFPOOABOPHH; // 0x18
	::Cinemachine::CinemachineVirtualCamera* DMIMCJICAHM; // 0x20
	::Cinemachine::NoiseSettings* GICPNCKNINB; // 0x28
	::Cinemachine::CinemachineBasicMultiChannelPerlin* HILOJNBODOD; // 0x30
	::Cinemachine::CinemachineVirtualCamera* INDILHFMLFK; // 0x38
	::Cinemachine::CinemachineBrain* LIIBMPFFPDO; // 0x40
	::System::Single MPCGBKMOIBE; // 0x48
	::System::Single OBKDNFKGECJ; // 0x4C
	::System::Single NBEOKHHNOMJ; // 0x50
	::System::Boolean ENEBMJJJEPB; // 0x54
	::System::Boolean DELGICEGPME; // 0x55
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector3 PBODKAHOGLF; // 0x58
	::UnityEngine::Vector3 MDDDNGKBBEG; // 0x64
	::UnityEngine::Vector3 ANLJODEFMDC; // 0x70
	::UnityEngine::Quaternion FGKKFFJIMHN; // 0x7C
	::System::Boolean EEEBNDKOHMF; // 0x8C
	::System::Boolean GKDANPNDEPP; // 0x8D
	::System::Boolean BMDCFIENDJK; // 0x8E
	::System::Boolean GGAELJPNDLJ; // 0x8F
	::System::Single OFMLGAKNIBP; // 0x90
	::UnityEngine::Quaternion EJNEMMEBCAI; // 0x94
	::UnityEngine::Quaternion GKOJNGFMCFC; // 0xA4
	::UnityEngine::Vector3 HFBKJMAEEAP; // 0xB4
	::System::Single CCMKBGCOBKO; // 0xC0
	::UnityEngine::Vector3 MHBODHPDCCO; // 0xC4
	::UnityEngine::Vector2 JKHKFNJOFJF; // 0xD0
	::System::Single FKDBOFIKLJF; // 0xD8
	::Cinemachine::LensSettings MNHDKILBPBA; // 0xDC
	::UnityEngine::Quaternion IOCJBENKBMM; // 0x10C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFPEDGOGNK__CTOR_OFFSET))(this);
	}

	::System::Void ProcessFrame(::UnityEngine::Playables::Playable HKOFGPMIFHB, ::UnityEngine::Playables::FrameData HMMMOCJAEOA, ::System::Object* NEEMKJBIIBC)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_PROCESSFRAME_OFFSET))(this, HKOFGPMIFHB, HMMMOCJAEOA, NEEMKJBIIBC);
	}

	::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_ONPLAYABLEDESTROY_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void PDEDKHJDBDD(::UnityEngine::Playables::Playable MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_PDEDKHJDBDD_OFFSET))(this, MIALFKCCCPI);
	}

	static ::System::String* LJBLNIFDFAL(::Cinemachine::LensSettings FJPNEGOEHBN)
	{
		return ((::System::String*(*)(::Cinemachine::LensSettings))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_LJBLNIFDFAL_OFFSET))(FJPNEGOEHBN);
	}

	::System::Void GHEOIEOJFOH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_GHEOIEOJFOH_OFFSET))(this);
	}

	static ::System::Void FBBKPKAGJAK(::Cinemachine::CameraState JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_FBBKPKAGJAK_OFFSET))(JKBLDFBGBPK);
	}

	static ::System::Void JOGDGKLHJAC(::System::String* NAPFALLANDL)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_JOGDGKLHJAC_OFFSET))(NAPFALLANDL);
	}

	::System::Void ALGBKLMGOFO(::Cinemachine::CinemachineVirtualCamera* EBELLAGPNGB, ::Cinemachine::CameraState JKBLDFBGBPK, ::Cinemachine::CinemachineBrain* MPMLBBEHCCI)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CameraState, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_ALGBKLMGOFO_OFFSET))(this, EBELLAGPNGB, JKBLDFBGBPK, MPMLBBEHCCI);
	}

	static ::System::Void LMEGFIPJIAL()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MLFPEDGOGNK_LMEGFIPJIAL_OFFSET))();
	}

	::Cinemachine::CinemachineVirtualCamera* KCPNIFGGMAA(::Cinemachine::CinemachineBrain* MPMLBBEHCCI)
	{
		return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_KCPNIFGGMAA_OFFSET))(this, MPMLBBEHCCI);
	}

	static ::System::Single JIIKLAHCBKN()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + MLFPEDGOGNK_JIIKLAHCBKN_OFFSET))();
	}

	static ::System::Single MBFEPBCELBJ(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Single(*)(::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_MBFEPBCELBJ_OFFSET))(HKOFGPMIFHB);
	}

	static ::System::Void BFODBPKICCG(::System::String* NAPFALLANDL)
	{
		return ((::System::Void(*)(::System::String*))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_BFODBPKICCG_OFFSET))(NAPFALLANDL);
	}

	::System::Void IEPEOPHKHMC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_IEPEOPHKHMC_OFFSET))(this);
	}

	static ::Cinemachine::CameraState MJBGOHGGKNJ(::Cinemachine::CinemachineVirtualCamera* EBELLAGPNGB)
	{
		return ((::Cinemachine::CameraState(*)(::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_MJBGOHGGKNJ_OFFSET))(EBELLAGPNGB);
	}

	::System::Void BKNOFBFABJG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_BKNOFBFABJG_OFFSET))(this);
	}

	static ::Cinemachine::CinemachineBasicMultiChannelPerlin* HCHCEDECJAC(::Cinemachine::CinemachineVirtualCamera* CBCJEFCDICP)
	{
		return ((::Cinemachine::CinemachineBasicMultiChannelPerlin*(*)(::Cinemachine::CinemachineVirtualCamera*))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_HCHCEDECJAC_OFFSET))(CBCJEFCDICP);
	}

	static ::System::Void EGADGIJOPOL(::Cinemachine::CameraState JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::Cinemachine::CameraState))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_EGADGIJOPOL_OFFSET))(JKBLDFBGBPK);
	}

	::System::Void JHNOIADHJID()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_JHNOIADHJID_OFFSET))(this);
	}

	static ::System::Boolean LCHPDDBBOCA(::UnityEngine::Transform* HODAIDNDKHD, ::UnityEngine::Vector3 LBMNJDIJKGJ, ::UnityEngine::Quaternion FOMNEIHAIIL)
	{
		return ((::System::Boolean(*)(::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_LCHPDDBBOCA_OFFSET))(HODAIDNDKHD, LBMNJDIJKGJ, FOMNEIHAIIL);
	}

	::System::Boolean BGGGPJFEPJD(::Cinemachine::CinemachineVirtualCamera* EBELLAGPNGB, ::Cinemachine::CameraState JKBLDFBGBPK, ::Cinemachine::CinemachineBrain* MPMLBBEHCCI)
	{
		return ((::System::Boolean(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CameraState, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_BGGGPJFEPJD_OFFSET))(this, EBELLAGPNGB, JKBLDFBGBPK, MPMLBBEHCCI);
	}

	::UnityEngine::Vector3 HDIEMEPKFNE()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_HDIEMEPKFNE_OFFSET))(this);
	}

	::System::Void MOOABENAOAC(::UnityEngine::Playables::Playable HKOFGPMIFHB)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_MOOABENAOAC_OFFSET))(this, HKOFGPMIFHB);
	}

	::System::Void GOEGFOELFLP(::Cinemachine::CinemachineVirtualCamera* EBELLAGPNGB, ::Cinemachine::CinemachineBrain* MPMLBBEHCCI)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_GOEGFOELFLP_OFFSET))(this, EBELLAGPNGB, MPMLBBEHCCI);
	}

	::System::Void GHDJIEJFFKG(::UnityEngine::Playables::Playable MIALFKCCCPI, ::UnityEngine::Playables::FrameData KMGKAIDEIBA, ::System::Object* FDHMCIFPNCK)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable, ::UnityEngine::Playables::FrameData, ::System::Object*))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_GHDJIEJFFKG_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA, FDHMCIFPNCK);
	}

	static ::System::Single FAAEEAKGEBI(::UnityEngine::AnimationCurve* FAJHPKBELMF, ::System::Single AHAFNGEDPLI)
	{
		return ((::System::Single(*)(::UnityEngine::AnimationCurve*, ::System::Single))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_FAAEEAKGEBI_OFFSET))(FAJHPKBELMF, AHAFNGEDPLI);
	}

	static ::System::String* JEJFCDMJAMC(::UnityEngine::Quaternion EGEGIMGMJHN)
	{
		return ((::System::String*(*)(::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_JEJFCDMJAMC_OFFSET))(EGEGIMGMJHN);
	}

	::System::Void NANJAEHKCBN(::Cinemachine::CameraState& JKBLDFBGBPK, ::System::Single IKGLMHFNNIE)
	{
		return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState&, ::System::Single))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_NANJAEHKCBN_OFFSET))(this, JKBLDFBGBPK, IKGLMHFNNIE);
	}

	static ::System::String* OBHEEHPDALN(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::String*(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_OBHEEHPDALN_OFFSET))(EGEGIMGMJHN);
	}

	::MoleMole::Cameras::AnimationVirtualCamera* IGADKPANHPI(::Cinemachine::CinemachineVirtualCamera* EBELLAGPNGB, ::Cinemachine::CinemachineBrain* MPMLBBEHCCI)
	{
		return ((::MoleMole::Cameras::AnimationVirtualCamera*(*)(::PVOID, ::Cinemachine::CinemachineVirtualCamera*, ::Cinemachine::CinemachineBrain*))((::PBYTE)hIl2Cpp + MLFPEDGOGNK_IGADKPANHPI_OFFSET))(this, EBELLAGPNGB, MPMLBBEHCCI);
	}
};
