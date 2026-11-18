#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Variable_1.h"
#include "unitysdk/GJDFOIIBBPN.h"
#include "unitysdk/MoleMole/Cameras/OverShoulderCameraAxisState.h"
#include "unitysdk/PipelineCamera/EulerRotation.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Cameras { class CameraTrackBlending; }
namespace MoleMole::Cameras { class OverShoulderCameraConfig; }
namespace MoleMole::Cameras { class OverrideOverShoulderCameraConfig; }

#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_BBOJKOFCGNA_OFFSET UNITYSDK_OFFSET(0x7DB860)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_BIGIFAMNLEC_OFFSET UNITYSDK_OFFSET(0x7DBDF0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_BIHAHOPMLOK_OFFSET UNITYSDK_OFFSET(0x7DBD50)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_CDGLGBHGDKJ_OFFSET UNITYSDK_OFFSET(0x7DB900)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_DNJONIOAPEB_OFFSET UNITYSDK_OFFSET(0x7DBA60)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_EDDIKAOPENE_OFFSET UNITYSDK_OFFSET(0x7DBF30)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_EECCIPNEJPO_OFFSET UNITYSDK_OFFSET(0x7DBD20)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_EKFAGFGJBOH_OFFSET UNITYSDK_OFFSET(0x7DB810)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_EPODAPMMOCP_OFFSET UNITYSDK_OFFSET(0x7DC350)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_FKCDKPPAKIE_OFFSET UNITYSDK_OFFSET(0x7DB8D0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x7DB720)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_ISINFOCUSTARGETMODE_OFFSET UNITYSDK_OFFSET(0x7DB750)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDIN_OFFSET UNITYSDK_OFFSET(0x7DB730)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDOUT_OFFSET UNITYSDK_OFFSET(0x7DB740)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDECONFIG_OFFSET UNITYSDK_OFFSET(0x4B2E10)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GICJEGJFEJE_OFFSET UNITYSDK_OFFSET(0x7DB8F0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GOINDOELMHJ_OFFSET UNITYSDK_OFFSET(0x7DB840)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GOLGAJICJHN_OFFSET UNITYSDK_OFFSET(0x7DB790)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_HHECMLENBGC_1_OFFSET UNITYSDK_OFFSET(0x19221E50)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_HHECMLENBGC_OFFSET UNITYSDK_OFFSET(0x19220D90)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_HPMBMNJFHHF_OFFSET UNITYSDK_OFFSET(0x7DBE90)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_IANFKEENEMM_OFFSET UNITYSDK_OFFSET(0x7DB820)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_INMGLPLEEIK_OFFSET UNITYSDK_OFFSET(0x7DBB00)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_IOHPDJBMBMO_OFFSET UNITYSDK_OFFSET(0x7DB7A0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_JCIODAGLLGB_OFFSET UNITYSDK_OFFSET(0x19222AB0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_JDGPKNCDFPE_OFFSET UNITYSDK_OFFSET(0x7DBC10)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_JHAFMDCLJOH_OFFSET UNITYSDK_OFFSET(0x19221F80)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_JHOLKGBKOFM_OFFSET UNITYSDK_OFFSET(0x7DBC00)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_KGMELLKGHED_OFFSET UNITYSDK_OFFSET(0x7DBF40)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_LHNFDDBJDHP_OFFSET UNITYSDK_OFFSET(0x1921E2F0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_LNHANEMCFFM_OFFSET UNITYSDK_OFFSET(0x7DBBF0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_MCBAHLHLBPB_OFFSET UNITYSDK_OFFSET(0x7DB8E0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_MCEHKCOHJEO_OFFSET UNITYSDK_OFFSET(0x7DC300)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_MEKJLCIALAG_OFFSET UNITYSDK_OFFSET(0x7DBF20)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_MMGNJJGEHOD_OFFSET UNITYSDK_OFFSET(0x7DB800)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_NJENCPFFOLN_OFFSET UNITYSDK_OFFSET(0x7DBF70)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_OFMABJIMELG_OFFSET UNITYSDK_OFFSET(0x7DB9B0)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_OMHJFMDGNEO_OFFSET UNITYSDK_OFFSET(0x7DC340)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_PJHJHNJFEHG_OFFSET UNITYSDK_OFFSET(0x7DC330)
#define MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA__CTOR_OFFSET UNITYSDK_OFFSET(0x7DB760)

namespace MoleMole::Cameras
{
	inline static constexpr unsigned int OverShoulderCameraData_TypeDefinitionIndex = 70167;

	struct alignas(8) OverShoulderCameraData
	{
		::PipelineCamera::EulerRotation _cameraRotation; // 0x10
		::Foundation::Variable_1<::UnityEngine::Vector3> _characterPosition; // 0x58
		::System::Byte _padding0[0x18];
		::System::Single _startFov; // 0x78
		::System::Single _currentFov; // 0x7C
		::UnityEngine::Vector3 _dampingTargetPosition; // 0x80
		::System::Byte _padding1[0x4];
		::MoleMole::Cameras::OverShoulderCameraConfig* _config; // 0x90
		::MoleMole::Cameras::OverrideOverShoulderCameraConfig* _overrideConfig; // 0x98
		::MoleMole::Cameras::CameraTrackBlending* _overrideBlendIn; // 0xA0
		::MoleMole::Cameras::CameraTrackBlending* _overrideBlendOut; // 0xA8
		::System::Boolean _enableYawAngleLimit; // 0xB0
		::System::Byte _padding2[0x7];
		::Foundation::Variable_1<::System::Single> _centerYawAngle; // 0xB8
		::System::Byte _padding3[0x10];
		::System::Single _yawAngleLimitThreshold; // 0xD0
		::System::Boolean _enableYawAngleLimitMinMax; // 0xD4
		::System::Byte _padding4[0x3];
		::System::Single _yawAngleLimitLeft; // 0xD8
		::System::Single _yawAngleLimitRight; // 0xDC
		::MoleMole::Cameras::OverShoulderCameraAxisState _xAxisState; // 0xE0
		::MoleMole::Cameras::OverShoulderCameraAxisState _yAxisState; // 0xEC
		::System::Boolean _isInFocusTargetMode; // 0xF8
		::System::Byte _padding5[0x3];
		::UnityEngine::Vector3 _curFocusTargetPos; // 0xFC
		::System::Single _focusTargetRotateDampSpeed; // 0x108
		::System::Byte _padding6[0x4];
		::GJDFOIIBBPN _context; // 0x110
		::UnityEngine::Vector3 _xzDampingVelocity; // 0x238
		::System::Single _yDampingVelocity; // 0x244
		::UnityEngine::Vector3 _lastPositionDampingCharacterPosition; // 0x248
		::System::Boolean _hasLastPositionDampingCharacterPosition; // 0x254

		::System::Void _ctor(::MoleMole::Cameras::OverShoulderCameraConfig* DFMKILICPFB, ::UnityEngine::Quaternion CKMIDJKEGFP, ::System::Single ECMOEENIHME, ::GJDFOIIBBPN& AAOCANGHBDG, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*& EKPAIOGJEPO)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Cameras::OverShoulderCameraConfig*, ::UnityEngine::Quaternion, ::System::Single, ::GJDFOIIBBPN&, ::MoleMole::Cameras::OverrideOverShoulderCameraConfig*&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA__CTOR_OFFSET))(this, DFMKILICPFB, CKMIDJKEGFP, ECMOEENIHME, AAOCANGHBDG, EKPAIOGJEPO);
		}

		::MoleMole::Cameras::OverShoulderCameraConfig* get_Config()
		{
			return ((::MoleMole::Cameras::OverShoulderCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_CONFIG_OFFSET))(this);
		}

		::MoleMole::Cameras::OverrideOverShoulderCameraConfig* get_OverrideConfig()
		{
			return ((::MoleMole::Cameras::OverrideOverShoulderCameraConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDECONFIG_OFFSET))(this);
		}

		::MoleMole::Cameras::CameraTrackBlending* get_OverrideBlendIn()
		{
			return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDIN_OFFSET))(this);
		}

		::MoleMole::Cameras::CameraTrackBlending* get_OverrideBlendOut()
		{
			return ((::MoleMole::Cameras::CameraTrackBlending*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_OVERRIDEBLENDOUT_OFFSET))(this);
		}

		::System::Boolean get_IsInFocusTargetMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GET_ISINFOCUSTARGETMODE_OFFSET))(this);
		}

		static ::System::Boolean LHNFDDBJDHP(::UnityEngine::Vector3& LJEHIPNKLHE, ::UnityEngine::Vector3& ENALJKCFLKL, ::UnityEngine::Vector3 OKNABNLNGHC, ::UnityEngine::Vector3 FAODJOFIEFH, ::System::Single KKCHBFFDONG, ::UnityEngine::Vector3 NCIBPHOKLGL)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_LHNFDDBJDHP_OFFSET))(LJEHIPNKLHE, ENALJKCFLKL, OKNABNLNGHC, FAODJOFIEFH, KKCHBFFDONG, NCIBPHOKLGL);
		}

		::System::Boolean GOLGAJICJHN(::System::Single& GKAHLDEKGFF, ::System::Single& FCOOLGEBGLL)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GOLGAJICJHN_OFFSET))(this, GKAHLDEKGFF, FCOOLGEBGLL);
		}

		::System::Void IOHPDJBMBMO(::System::Single DNDJCAAFEML)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_IOHPDJBMBMO_OFFSET))(this, DNDJCAAFEML);
		}

		::UnityEngine::Vector2 MMGNJJGEHOD(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_MMGNJJGEHOD_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC);
		}

		::System::Void EKFAGFGJBOH(::System::Single PMNLNNGEIFM, ::System::Single& OFELHMPFHPO, ::System::Single& DNBPHJBFMIC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single&, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_EKFAGFGJBOH_OFFSET))(this, PMNLNNGEIFM, OFELHMPFHPO, DNBPHJBFMIC);
		}

		::System::Void IANFKEENEMM(::UnityEngine::Quaternion BFBELMDIAHI)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_IANFKEENEMM_OFFSET))(this, BFBELMDIAHI);
		}

		::PipelineCamera::WorldBasicCameraData GOINDOELMHJ(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GOINDOELMHJ_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC);
		}

		::System::Void BBOJKOFCGNA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_BBOJKOFCGNA_OFFSET))(this);
		}

		::System::Single FKCDKPPAKIE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_FKCDKPPAKIE_OFFSET))(this);
		}

		::System::Void MCBAHLHLBPB(::PipelineCamera::WorldBasicCameraData& IIHGNBNLLNG)
		{
			return ((::System::Void(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_MCBAHLHLBPB_OFFSET))(this, IIHGNBNLLNG);
		}

		::System::Void GICJEGJFEJE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_GICJEGJFEJE_OFFSET))(this);
		}

		::System::Void CDGLGBHGDKJ(::System::Boolean GCDKMFLGLIJ, ::System::Single IBCAFNKFIDH, ::System::Boolean IIFLMEBNLDG, ::System::Single FLKMOKLIPKN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_CDGLGBHGDKJ_OFFSET))(this, GCDKMFLGLIJ, IBCAFNKFIDH, IIFLMEBNLDG, FLKMOKLIPKN);
		}

		static ::System::Single HHECMLENBGC(::System::Single LFLLGABBFFD, ::System::Single CIBBDCKPMIB, ::System::Single GLJHHHKILHO, ::System::Single PMNLNNGEIFM)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_HHECMLENBGC_OFFSET))(LFLLGABBFFD, CIBBDCKPMIB, GLJHHHKILHO, PMNLNNGEIFM);
		}

		::PipelineCamera::WorldBasicCameraData OFMABJIMELG(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_OFMABJIMELG_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC);
		}

		::UnityEngine::Vector3 DNJONIOAPEB()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_DNJONIOAPEB_OFFSET))(this);
		}

		::UnityEngine::Quaternion INMGLPLEEIK()
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_INMGLPLEEIK_OFFSET))(this);
		}

		::System::Void LNHANEMCFFM(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_LNHANEMCFFM_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::Void JHOLKGBKOFM(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_JHOLKGBKOFM_OFFSET))(this, PMNLNNGEIFM);
		}

		::PipelineCamera::EulerRotation JDGPKNCDFPE(::System::Single DMAFDMDAGKK, ::System::Single NHFLBHJHOIC)
		{
			return ((::PipelineCamera::EulerRotation(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_JDGPKNCDFPE_OFFSET))(this, DMAFDMDAGKK, NHFLBHJHOIC);
		}

		::System::Void EECCIPNEJPO(::UnityEngine::Vector3 HODAIDNDKHD, ::System::Single NKAHIHHAPCP)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_EECCIPNEJPO_OFFSET))(this, HODAIDNDKHD, NKAHIHHAPCP);
		}

		::UnityEngine::Vector3 BIHAHOPMLOK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_BIHAHOPMLOK_OFFSET))(this);
		}

		::System::Void BIGIFAMNLEC(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_BIGIFAMNLEC_OFFSET))(this, PMNLNNGEIFM);
		}

		static ::UnityEngine::Vector2 HHECMLENBGC_1(::UnityEngine::Vector2 LFLLGABBFFD, ::UnityEngine::Vector2 CIBBDCKPMIB, ::System::Single GLJHHHKILHO, ::System::Single PMNLNNGEIFM)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_HHECMLENBGC_1_OFFSET))(LFLLGABBFFD, CIBBDCKPMIB, GLJHHHKILHO, PMNLNNGEIFM);
		}

		::System::Boolean HPMBMNJFHHF(::System::Single& DNDJCAAFEML)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_HPMBMNJFHHF_OFFSET))(this, DNDJCAAFEML);
		}

		static ::System::Single JHAFMDCLJOH(::System::Single ACLCAIGBECI)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_JHAFMDCLJOH_OFFSET))(ACLCAIGBECI);
		}

		::System::Single MEKJLCIALAG()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_MEKJLCIALAG_OFFSET))(this);
		}

		::System::Void EDDIKAOPENE(::System::Single PMNLNNGEIFM)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_EDDIKAOPENE_OFFSET))(this, PMNLNNGEIFM);
		}

		::System::ValueTuple_2<::System::Single, ::System::Single> KGMELLKGHED(::UnityEngine::Vector3 HODAIDNDKHD)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_KGMELLKGHED_OFFSET))(this, HODAIDNDKHD);
		}

		::System::Void NJENCPFFOLN(::System::Boolean LNGOJNPBNJL, ::UnityEngine::Vector3 MGLDGBPKBDK, ::System::Single CPMEKIKJEFD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_NJENCPFFOLN_OFFSET))(this, LNGOJNPBNJL, MGLDGBPKBDK, CPMEKIKJEFD);
		}

		::System::Nullable_1<::PipelineCamera::WorldBasicCameraData> MCEHKCOHJEO(::PipelineCamera::WorldBasicCameraData& HMDKJJICHAO, ::UnityEngine::Vector3 HODAIDNDKHD)
		{
			return ((::System::Nullable_1<::PipelineCamera::WorldBasicCameraData>(*)(::PVOID, ::PipelineCamera::WorldBasicCameraData&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_MCEHKCOHJEO_OFFSET))(this, HMDKJJICHAO, HODAIDNDKHD);
		}

		/*
		static ::PipelineCamera::WorldBasicCameraData JCIODAGLLGB(::MoleMole::Cameras::OverShoulderCameraData& IPMMCGDMODG)
		{
			return ((::PipelineCamera::WorldBasicCameraData(*)(::MoleMole::Cameras::OverShoulderCameraData&))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_JCIODAGLLGB_OFFSET))(IPMMCGDMODG);
		}
		*/

		::System::Void PJHJHNJFEHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_PJHJHNJFEHG_OFFSET))(this);
		}

		::System::Void OMHJFMDGNEO(::System::Single FNIOPKPHDEH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_OMHJFMDGNEO_OFFSET))(this, FNIOPKPHDEH);
		}

		::System::Single EPODAPMMOCP()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CAMERAS_OVERSHOULDERCAMERADATA_EPODAPMMOCP_OFFSET))(this);
		}
	};
}
