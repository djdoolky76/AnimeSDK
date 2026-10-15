#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/CinemachineCore_Stage.h"
#include "unitysdk/Cinemachine/CinemachineExtension.h"
#include "unitysdk/RPG/Client/CameraDataAndFlags_LockFovReason.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/Cinemachine/CameraState.h"
class NEOCEOCDEAF;
namespace Cinemachine { class CinemachineFreeLook; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace RPG::Client { class Freelook3rdModuleConfig; }
namespace RPG::Client { class PipelineCameraEngine; }
namespace RPG::Client { class ZoomModuleConfig; }

#define RPG_CLIENT_RPGCINEMACHINEZOOM_AAFMKHALBJE_OFFSET UNITYSDK_OFFSET(0xDE11760)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_ANMGNCEDAMD_OFFSET UNITYSDK_OFFSET(0xDE11640)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_AWAKE_OFFSET UNITYSDK_OFFSET(0xDE0F450)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_BFIAMMHMBII_OFFSET UNITYSDK_OFFSET(0xDE11370)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_CCIMLGABCDG_OFFSET UNITYSDK_OFFSET(0xDE11410)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_CGOIKMGOLIK_OFFSET UNITYSDK_OFFSET(0xDE0FE90)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_CLEARLOCKEDFIELDOFVIEWRATIO_OFFSET UNITYSDK_OFFSET(0xDE0F400)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_CTOR_OFFSET UNITYSDK_OFFSET(0xDE11D10)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_ELNGDKIBBIK_OFFSET UNITYSDK_OFFSET(0xDE11500)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_ENABLEUPDATE_OFFSET UNITYSDK_OFFSET(0xDE0F0A0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_ENLIIIBNBGH_OFFSET UNITYSDK_OFFSET(0xDE11040)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_GETMAXDAMPTIME_OFFSET UNITYSDK_OFFSET(0xDE0F000)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_GET_ENABLEZOOMCHANGEDATA_OFFSET UNITYSDK_OFFSET(0xDE11C90)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_GET_FIELDOFVIEWRATIO_OFFSET UNITYSDK_OFFSET(0xDE11CB0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_GJCPBBACOAF_OFFSET UNITYSDK_OFFSET(0xDE11550)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_GMCBFKEMGNI_OFFSET UNITYSDK_OFFSET(0xDE10D60)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_JJPBAOOIPEK_OFFSET UNITYSDK_OFFSET(0xDE11490)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_KICAJKEGDED_OFFSET UNITYSDK_OFFSET(0xDE10740)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_LADMFNMJBBA_OFFSET UNITYSDK_OFFSET(0xDE11B90)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_LOCKFOV_OFFSET UNITYSDK_OFFSET(0xDE0F210)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_MNBGMKIIBNI_OFFSET UNITYSDK_OFFSET(0xDE0FF70)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_MNPKJIJFMME_OFFSET UNITYSDK_OFFSET(0xDE11B40)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_NCAAPNAKLCA_OFFSET UNITYSDK_OFFSET(0xDE11C40)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_NEBAOBGPAAM_OFFSET UNITYSDK_OFFSET(0xDE10DC0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_NEKFLOKJMBH_OFFSET UNITYSDK_OFFSET(0xDE11AD0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_NNKGGHEPLCD_OFFSET UNITYSDK_OFFSET(0xDE10E90)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_OEAAMLFOCIP_OFFSET UNITYSDK_OFFSET(0xDE115D0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_OJMAAHDKKNE_OFFSET UNITYSDK_OFFSET(0xDE11320)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xDE0EF40)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_POSTPIPELINESTAGECALLBACK_OFFSET UNITYSDK_OFFSET(0xDE0F620)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_RELOADMODULECONFIG_OFFSET UNITYSDK_OFFSET(0xDE0F0F0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_RESETZOOMDISTANCEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xDE0EE80)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_SETLOCKEDFIELDOFVIEWRATIO_OFFSET UNITYSDK_OFFSET(0xDE0F3A0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_SET_ENABLEZOOMCHANGEDATA_OFFSET UNITYSDK_OFFSET(0xDE11CA0)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_STOPUPDATE_OFFSET UNITYSDK_OFFSET(0xDE0F050)
#define RPG_CLIENT_RPGCINEMACHINEZOOM_UNLOCKFOV_OFFSET UNITYSDK_OFFSET(0xDE0F2E0)

namespace RPG::Client
{
	inline static constexpr unsigned int RPGCinemachineZoom_TypeDefinitionIndex = 69709;

	class RPGCinemachineZoom : public ::Cinemachine::CinemachineExtension
	{
	public:
		::System::Single m_ZoomSensitive; // 0x28
		::System::Single m_Damping; // 0x2C
		::System::Nullable_1<::System::Single> KGABOELBDFI; // 0x30
		::System::Single ACHCADLBGHB; // 0x38
		::System::Single GFFODDDOJCL; // 0x3C
		::System::Boolean AGLOGGODABF; // 0x40
		::System::Byte _padding0[0x3];
		::System::Single JJJMDDBOJGA; // 0x44
		::System::Nullable_1<::System::Single> BCCHKOFHHIG; // 0x48
		::System::Single EGIIBCLDKBA; // 0x50
		::System::Single IAALGINAHEI; // 0x54
		::System::Single IHJCLMFJCFI; // 0x58
		::System::Nullable_1<::System::Single> BEBNHKJCBLL; // 0x5C
		::System::Nullable_1<::System::Single> BAJDACPIKJI; // 0x64
		::System::Byte _padding1[0x4];
		::NEOCEOCDEAF* MGMKAEJAEOE; // 0x70
		::RPG::Client::PipelineCameraEngine* EGBDJHPFMCD; // 0x78
		::RPG::Client::CameraDataAndFlags* OEPENBEJDCN; // 0x80
		::RPG::Client::ZoomModuleConfig* OECNIGBFPLI; // 0x88
		::RPG::Client::Freelook3rdModuleConfig* HEGMHCKPMHE; // 0x90
		::Cinemachine::CinemachineFreeLook* ODIDIJIBJKK; // 0x98
		::System::Boolean IMKFKHKDNDH; // 0xA0
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector3 FENLCMOEDMP; // 0xA4
		::System::Single JJNLIEIDEGK; // 0xB0
		::System::Int32 IAHELHLIFND; // 0xB4
		::System::Single GJECNDIGFMD; // 0xB8
		::System::Boolean KIOADONMNJM; // 0xBC
		::System::Byte _padding3[0x3];
		::System::Single IHKMAPCDELD; // 0xC0
		::System::Single DDMMDBKCHJE; // 0xC4
		::System::Single JAKNBHFCHNN; // 0xC8
		::System::Single DLAKLIOGHFJ; // 0xCC
		::System::Boolean IBNGJNPOMAF; // 0xD0
		// static const ::System::Object GIJGKOPNDBJ; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_CTOR_OFFSET))(this);
		}

		::System::Void ResetZoomDistanceImmediately(::RPG::Client::PipelineCameraEngine* a1, ::RPG::Client::CameraDataAndFlags* a2, ::System::Nullable_1<::System::Single> a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::PipelineCameraEngine*, ::RPG::Client::CameraDataAndFlags*, ::System::Nullable_1<::System::Single>))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_RESETZOOMDISTANCEIMMEDIATELY_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_ONDESTROY_OFFSET))(this);
		}

		::System::Single GetMaxDampTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_GETMAXDAMPTIME_OFFSET))(this);
		}

		::System::Void StopUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_STOPUPDATE_OFFSET))(this);
		}

		::System::Void EnableUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_ENABLEUPDATE_OFFSET))(this);
		}

		::System::Void ReloadModuleConfig()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_RELOADMODULECONFIG_OFFSET))(this);
		}

		::System::Void LockFov(::RPG::Client::CameraDataAndFlags_LockFovReason a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_LockFovReason, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_LOCKFOV_OFFSET))(this, a1, a2);
		}

		::System::Void UnlockFov(::RPG::Client::CameraDataAndFlags_LockFovReason a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags_LockFovReason))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_UNLOCKFOV_OFFSET))(this, a1);
		}

		::System::Void SetLockedFieldOfViewRatio(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_SETLOCKEDFIELDOFVIEWRATIO_OFFSET))(this, a1);
		}

		::System::Void ClearLockedFieldOfViewRatio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_CLEARLOCKEDFIELDOFVIEWRATIO_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_AWAKE_OFFSET))(this);
		}

		::System::Void PostPipelineStageCallback(::Cinemachine::CinemachineVirtualCameraBase* a1, ::Cinemachine::CinemachineCore_Stage a2, ::Cinemachine::CameraState a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::Cinemachine::CinemachineCore_Stage, ::Cinemachine::CameraState, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_POSTPIPELINESTAGECALLBACK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single MNBGMKIIBNI(::Cinemachine::CameraState a1, ::System::Single a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Single(*)(::PVOID, ::Cinemachine::CameraState, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_MNBGMKIIBNI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void KICAJKEGDED(::Cinemachine::CameraState a1, ::System::Single a2, ::UnityEngine::Vector3 a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState, ::System::Single, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_KICAJKEGDED_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single AAFMKHALBJE(::RPG::Client::Freelook3rdModuleConfig* a1, ::RPG::Client::CameraDataAndFlags* a2)
		{
			return ((::System::Single(*)(::PVOID, ::RPG::Client::Freelook3rdModuleConfig*, ::RPG::Client::CameraDataAndFlags*))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_AAFMKHALBJE_OFFSET))(this, a1, a2);
		}

		::System::Void ANMGNCEDAMD(::Cinemachine::CameraState a1, ::RPG::Client::CameraDataAndFlags* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CameraState, ::RPG::Client::CameraDataAndFlags*, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_ANMGNCEDAMD_OFFSET))(this, a1, a2, a3);
		}

		::System::Single GMCBFKEMGNI()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_GMCBFKEMGNI_OFFSET))(this);
		}

		::System::Single NEKFLOKJMBH()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_NEKFLOKJMBH_OFFSET))(this);
		}

		::System::Single JJPBAOOIPEK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_JJPBAOOIPEK_OFFSET))(this);
		}

		::System::Boolean MNPKJIJFMME()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_MNPKJIJFMME_OFFSET))(this);
		}

		::System::Boolean LADMFNMJBBA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_LADMFNMJBBA_OFFSET))(this);
		}

		::System::Void ENLIIIBNBGH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_ENLIIIBNBGH_OFFSET))(this);
		}

		::System::Void OJMAAHDKKNE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_OJMAAHDKKNE_OFFSET))(this);
		}

		::System::Void NCAAPNAKLCA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_NCAAPNAKLCA_OFFSET))(this);
		}

		::System::Void ELNGDKIBBIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_ELNGDKIBBIK_OFFSET))(this);
		}

		::System::Boolean GJCPBBACOAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_GJCPBBACOAF_OFFSET))(this);
		}

		::System::Boolean OEAAMLFOCIP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_OEAAMLFOCIP_OFFSET))(this);
		}

		::System::Single CCIMLGABCDG(::System::Single a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_CCIMLGABCDG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void NEBAOBGPAAM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_NEBAOBGPAAM_OFFSET))(this);
		}

		::System::Void NNKGGHEPLCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_NNKGGHEPLCD_OFFSET))(this);
		}

		::System::Void CGOIKMGOLIK(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_CGOIKMGOLIK_OFFSET))(this, a1);
		}

		::System::Single BFIAMMHMBII()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_BFIAMMHMBII_OFFSET))(this);
		}

		::System::Boolean get_EnableZoomChangeData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_GET_ENABLEZOOMCHANGEDATA_OFFSET))(this);
		}

		::System::Void set_EnableZoomChangeData(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_SET_ENABLEZOOMCHANGEDATA_OFFSET))(this, a1);
		}

		::System::Single get_FieldOfViewRatio()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_RPGCINEMACHINEZOOM_GET_FIELDOFVIEWRATIO_OFFSET))(this);
		}

	};
}
