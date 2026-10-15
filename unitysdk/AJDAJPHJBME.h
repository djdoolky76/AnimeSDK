#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPAGJNNOMM_VCameraType.h"
#include "unitysdk/Cinemachine/CinemachineTransposer_BindingMode.h"
#include "unitysdk/RPG/GameCore/FreelookCameraDragMode.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"
class AJDAJPHJBME;
class JIDKACGCHMA;
class LBJHOHLLJDE;
namespace Cinemachine { class AxisState_IInputAxisProvider; }
namespace Cinemachine { class CinemachineFreeLook; }
namespace RPG::Client { class CameraBlendCurve; }
namespace RPG::Client { class Freelook3rdRigParams; }
namespace RPG::Client { class RPGCinemachineCorrectionExtension; }
namespace RPG::Client { class RPGCinemachineOldFreelook3rdBlend; }
namespace RPG::Client { class RPGCinemachineZoom; }
namespace System { class Nullable; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define AJDAJPHJBME_AFDBCIKJMKE_OFFSET UNITYSDK_OFFSET(0x12CB3990)
#define AJDAJPHJBME_AFFMCOCDKOG_OFFSET UNITYSDK_OFFSET(0x12CB5750)
#define AJDAJPHJBME_APNJOKCNJHE_OFFSET UNITYSDK_OFFSET(0x12CB5160)
#define AJDAJPHJBME_BILGIAMLBED_OFFSET UNITYSDK_OFFSET(0x12CB3C50)
#define AJDAJPHJBME_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0x12CB3AA0)
#define AJDAJPHJBME_BMCBNGJPNEB_OFFSET UNITYSDK_OFFSET(0x12CB74D0)
#define AJDAJPHJBME_CIACLABBPJD_OFFSET UNITYSDK_OFFSET(0x12CB3130)
#define AJDAJPHJBME_CIPJBBAOLBD_OFFSET UNITYSDK_OFFSET(0x12CB25A0)
#define AJDAJPHJBME_CJNGAMKHHOL_OFFSET UNITYSDK_OFFSET(0x12CB4430)
#define AJDAJPHJBME_CKEMMPEEKBD_OFFSET UNITYSDK_OFFSET(0x12CB3410)
#define AJDAJPHJBME_CTOR_OFFSET UNITYSDK_OFFSET(0x12CB2580)
#define AJDAJPHJBME_DCJMBJHNBAO_OFFSET UNITYSDK_OFFSET(0x12CB4100)
#define AJDAJPHJBME_DFBOIPGLMDP_OFFSET UNITYSDK_OFFSET(0x12CB3A30)
#define AJDAJPHJBME_DGDKOGJLNNI_OFFSET UNITYSDK_OFFSET(0x12CB5310)
#define AJDAJPHJBME_DHHMGJCJAPH_OFFSET UNITYSDK_OFFSET(0x12CB68B0)
#define AJDAJPHJBME_DJLCCINHDMP_OFFSET UNITYSDK_OFFSET(0x12CB4B50)
#define AJDAJPHJBME_DLALHCAJNEK_OFFSET UNITYSDK_OFFSET(0x12CB74C0)
#define AJDAJPHJBME_DNDMMEGLKNI_OFFSET UNITYSDK_OFFSET(0x12CB38C0)
#define AJDAJPHJBME_DNJINHFOHFP_OFFSET UNITYSDK_OFFSET(0x12CB4C40)
#define AJDAJPHJBME_EDKFLMCNMDJ_OFFSET UNITYSDK_OFFSET(0x12CB3DE0)
#define AJDAJPHJBME_EIGAGGAJBCF_OFFSET UNITYSDK_OFFSET(0x12CB5280)
#define AJDAJPHJBME_ENHBJHABDAL_OFFSET UNITYSDK_OFFSET(0x12CB5540)
#define AJDAJPHJBME_EPBGDFJEIBN_OFFSET UNITYSDK_OFFSET(0x12CB4690)
#define AJDAJPHJBME_FEFBKNBPHON_OFFSET UNITYSDK_OFFSET(0x12CB6950)
#define AJDAJPHJBME_FJMACPENDKD_OFFSET UNITYSDK_OFFSET(0x12CB3E20)
#define AJDAJPHJBME_FMLIECJBGEB_OFFSET UNITYSDK_OFFSET(0x12CB4BC0)
#define AJDAJPHJBME_FNDNCANOEOC_OFFSET UNITYSDK_OFFSET(0x12CB5870)
#define AJDAJPHJBME_GET_AXISVALUEXCHANGESPEED_OFFSET UNITYSDK_OFFSET(0x12CB7480)
#define AJDAJPHJBME_GET_CAMERATYPE_OFFSET UNITYSDK_OFFSET(0x12CB72F0)
#define AJDAJPHJBME_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x12CB73B0)
#define AJDAJPHJBME_GET_FREELOOKDRAGMODE_OFFSET UNITYSDK_OFFSET(0x12CB74A0)
#define AJDAJPHJBME_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x12CB7350)
#define AJDAJPHJBME_GET_ISAVAILABLEFORREUSE_OFFSET UNITYSDK_OFFSET(0x12CB7390)
#define AJDAJPHJBME_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0x12CB7330)
#define AJDAJPHJBME_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x12CB7370)
#define AJDAJPHJBME_GET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x12CB73D0)
#define AJDAJPHJBME_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x12CB7310)
#define AJDAJPHJBME_GHKFMCEFKKL_OFFSET UNITYSDK_OFFSET(0x12CB41F0)
#define AJDAJPHJBME_HADCPEFOLJM_OFFSET UNITYSDK_OFFSET(0x12CB73F0)
#define AJDAJPHJBME_HFBAMIIPCBO_OFFSET UNITYSDK_OFFSET(0x12CB4CA0)
#define AJDAJPHJBME_HGHNAHEPDMI_OFFSET UNITYSDK_OFFSET(0x12CB5E00)
#define AJDAJPHJBME_HGIFAPDKLNF_OFFSET UNITYSDK_OFFSET(0x12CB51C0)
#define AJDAJPHJBME_HGOAKEHPEHI_OFFSET UNITYSDK_OFFSET(0x12CB4A90)
#define AJDAJPHJBME_HMCNAEGILGN_OFFSET UNITYSDK_OFFSET(0x12CB4E10)
#define AJDAJPHJBME_ICEIMKDENNG_OFFSET UNITYSDK_OFFSET(0x12CB6990)
#define AJDAJPHJBME_IGBDOIOMOCL_OFFSET UNITYSDK_OFFSET(0x12CB4AF0)
#define AJDAJPHJBME_IKGBKNBKGGN_OFFSET UNITYSDK_OFFSET(0x12CB65D0)
#define AJDAJPHJBME_JEJIPDKLPAG_OFFSET UNITYSDK_OFFSET(0x12CB3190)
#define AJDAJPHJBME_JLFMONHPKIJ_OFFSET UNITYSDK_OFFSET(0x12CB5230)
#define AJDAJPHJBME_KLBODJCIEJJ_OFFSET UNITYSDK_OFFSET(0x12CB5990)
#define AJDAJPHJBME_KNALAHDEFJM_OFFSET UNITYSDK_OFFSET(0x12CB67D0)
#define AJDAJPHJBME_KPDJHHLAOMA_OFFSET UNITYSDK_OFFSET(0x12CB7440)
#define AJDAJPHJBME_LCFECADKDGM_OFFSET UNITYSDK_OFFSET(0x12CB6740)
#define AJDAJPHJBME_LEJMCJKEBHO_OFFSET UNITYSDK_OFFSET(0x12CB39F0)
#define AJDAJPHJBME_LGBPPNJLLKJ_OFFSET UNITYSDK_OFFSET(0x12CB4380)
#define AJDAJPHJBME_LIICGDNBMBN_OFFSET UNITYSDK_OFFSET(0x12CB5F60)
#define AJDAJPHJBME_LJMNKABEHCJ_OFFSET UNITYSDK_OFFSET(0x12CB3DA0)
#define AJDAJPHJBME_LMALIALLFDH_OFFSET UNITYSDK_OFFSET(0x12CB4720)
#define AJDAJPHJBME_LMDMENOEEAN_OFFSET UNITYSDK_OFFSET(0x12CB4960)
#define AJDAJPHJBME_LPDFGIAHNAE_OFFSET UNITYSDK_OFFSET(0x12CB6C10)
#define AJDAJPHJBME_MDGIFNKOLMN_OFFSET UNITYSDK_OFFSET(0x12CB6DE0)
#define AJDAJPHJBME_MGCBOOGIEBK_OFFSET UNITYSDK_OFFSET(0x12CB4310)
#define AJDAJPHJBME_MIPPFKOPPLF_OFFSET UNITYSDK_OFFSET(0x12CB30D0)
#define AJDAJPHJBME_MJKBAPDJPGP_OFFSET UNITYSDK_OFFSET(0x12CB5050)
#define AJDAJPHJBME_MMMCFCDNOBA_OFFSET UNITYSDK_OFFSET(0x12CB50F0)
#define AJDAJPHJBME_MOBJOGHFIOE_OFFSET UNITYSDK_OFFSET(0x12CB3F90)
#define AJDAJPHJBME_NBCELDNGJOL_OFFSET UNITYSDK_OFFSET(0x12CB4D00)
#define AJDAJPHJBME_NCJNKOKKEGF_OFFSET UNITYSDK_OFFSET(0x12CB4D80)
#define AJDAJPHJBME_NDNOAGOOHGM_OFFSET UNITYSDK_OFFSET(0x12CB48A0)
#define AJDAJPHJBME_NDPIGEHKKAI_OFFSET UNITYSDK_OFFSET(0x12CB6D50)
#define AJDAJPHJBME_NIOPOLFJMPE_OFFSET UNITYSDK_OFFSET(0x12CB4530)
#define AJDAJPHJBME_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0x12CB3810)
#define AJDAJPHJBME_NMDMOCCGACM_OFFSET UNITYSDK_OFFSET(0x12CB44B0)
#define AJDAJPHJBME_NMHAIPDIMAL_OFFSET UNITYSDK_OFFSET(0x12CB68F0)
#define AJDAJPHJBME_NNINDDLFAPH_OFFSET UNITYSDK_OFFSET(0x12CB6B90)
#define AJDAJPHJBME_NPIMLIOKIOP_OFFSET UNITYSDK_OFFSET(0x12CB6FC0)
#define AJDAJPHJBME_OBHOIBKGHHG_OFFSET UNITYSDK_OFFSET(0x12CB4270)
#define AJDAJPHJBME_OGKHDLPFJGB_OFFSET UNITYSDK_OFFSET(0x12CB4020)
#define AJDAJPHJBME_ONAFAOKGENB_OFFSET UNITYSDK_OFFSET(0x12CB4620)
#define AJDAJPHJBME_PBBAMBEKLKG_OFFSET UNITYSDK_OFFSET(0x12CB6EF0)
#define AJDAJPHJBME_PILBPNGEPKA_OFFSET UNITYSDK_OFFSET(0x12CB3EB0)
#define AJDAJPHJBME_PNLHOFDENOM_OFFSET UNITYSDK_OFFSET(0x12CB6CA0)
#define AJDAJPHJBME_SET_AXISVALUEXCHANGESPEED_OFFSET UNITYSDK_OFFSET(0x12CB7490)
#define AJDAJPHJBME_SET_CAMERATYPE_OFFSET UNITYSDK_OFFSET(0x12CB7300)
#define AJDAJPHJBME_SET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0x12CB73C0)
#define AJDAJPHJBME_SET_FREELOOKDRAGMODE_OFFSET UNITYSDK_OFFSET(0x12CB74B0)
#define AJDAJPHJBME_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x12CB7360)
#define AJDAJPHJBME_SET_ISAVAILABLEFORREUSE_OFFSET UNITYSDK_OFFSET(0x12CB73A0)
#define AJDAJPHJBME_SET_ISCREATED_OFFSET UNITYSDK_OFFSET(0x12CB7340)
#define AJDAJPHJBME_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x12CB7380)
#define AJDAJPHJBME_SET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x12CB73E0)
#define AJDAJPHJBME_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0x12CB7320)

	class AJDAJPHJBME : public ::System::Object
	{
	public:
		::RPG::Client::RPGCinemachineZoom* KGGPPJIEGDC; // 0x10
		::RPG::Client::CameraBlendCurve* ILOGGEBHPHC; // 0x18
		::Cinemachine::CinemachineFreeLook* EAJFHBDCFFO; // 0x20
		::UnityEngine::GameObject* DOKFAOCAKND; // 0x28
		::UnityEngine::Transform* _FollowTarget_k__BackingField; // 0x30
		::RPG::Client::RPGCinemachineOldFreelook3rdBlend* IEADFDMEFMG; // 0x38
		::UnityEngine::Transform* _LookAtTarget_k__BackingField; // 0x40
		::RPG::Client::RPGCinemachineCorrectionExtension* HAENPEKCION; // 0x48
		::UnityEngine::GameObject* MHMABPNBJOC; // 0x50
		::LBJHOHLLJDE* CINEAOLJBPJ; // 0x58
		::System::UInt32 _RuntimeID_k__BackingField; // 0x60
		::System::Single PGMIOKKLHIE; // 0x64
		::System::Nullable* BLOALMOJGIK; // 0x68
		::System::Byte _padding0[0x4];
		::System::Nullable* NIIAIMKDCDO; // 0x74
		::System::Byte _padding1[0x4];
		::BHPAGJNNOMM_VCameraType _CameraType_k__BackingField; // 0x80
		::System::Single _AxisValueXChangeSpeed_k__BackingField; // 0x84
		::System::Boolean _IsDestroyed_k__BackingField; // 0x88
		::System::Boolean _FreelookDragMode_k__BackingField; // 0x89
		::System::Boolean _IsAvailableForReuse_k__BackingField; // 0x8A
		::System::Boolean _IsCreated_k__BackingField; // 0x8B
		::System::Boolean _IsActive_k__BackingField; // 0x8C
		::System::Boolean BDFBDJCHHAC; // 0x8D
		::System::Boolean CEKJPFJPIDH; // 0x8E
		::System::Byte _padding2[0x1];
		::System::Single ADPMMNEFDPA; // 0x90
		::System::Single IGIPNEKPEHL; // 0x94
		::System::Int32 DIIBHKPGKCB; // 0x98
		::System::Single HBDJCFFDGDD; // 0x9C
		::System::Void _ctor(::BHPAGJNNOMM_VCameraType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BHPAGJNNOMM_VCameraType, ::System::UInt32))((::PBYTE)hIl2Cpp + AJDAJPHJBME_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void CIPJBBAOLBD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AJDAJPHJBME_CIPJBBAOLBD_OFFSET))(this, a1);
		}

		::System::Void JEJIPDKLPAG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_JEJIPDKLPAG_OFFSET))(this);
		}

		::UnityEngine::GameObject* LEJMCJKEBHO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_LEJMCJKEBHO_OFFSET))(this);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJDAJPHJBME_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Void DFBOIPGLMDP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJDAJPHJBME_DFBOIPGLMDP_OFFSET))(this, a1);
		}

		::System::Void AFDBCIKJMKE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_AFDBCIKJMKE_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void BILGIAMLBED(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJDAJPHJBME_BILGIAMLBED_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* LJMNKABEHCJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_LJMNKABEHCJ_OFFSET))(this);
		}

		::UnityEngine::Transform* EDKFLMCNMDJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_EDKFLMCNMDJ_OFFSET))(this);
		}

		::System::Void FJMACPENDKD(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AJDAJPHJBME_FJMACPENDKD_OFFSET))(this, a1);
		}

		::System::Void PILBPNGEPKA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AJDAJPHJBME_PILBPNGEPKA_OFFSET))(this, a1);
		}

		::System::Void MOBJOGHFIOE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AJDAJPHJBME_MOBJOGHFIOE_OFFSET))(this, a1);
		}

		::System::Void OGKHDLPFJGB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AJDAJPHJBME_OGKHDLPFJGB_OFFSET))(this, a1);
		}

		::System::Void DCJMBJHNBAO(::System::Int32 a1, ::RPG::Client::Freelook3rdRigParams* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::RPG::Client::Freelook3rdRigParams*))((::PBYTE)hIl2Cpp + AJDAJPHJBME_DCJMBJHNBAO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Vector2 GHKFMCEFKKL(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AJDAJPHJBME_GHKFMCEFKKL_OFFSET))(this, a1);
		}

		::System::Void OBHOIBKGHHG(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AJDAJPHJBME_OBHOIBKGHHG_OFFSET))(this, a1, a2);
		}

		::System::Void MIPPFKOPPLF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJDAJPHJBME_MIPPFKOPPLF_OFFSET))(this, a1);
		}

		::System::Void CIACLABBPJD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJDAJPHJBME_CIACLABBPJD_OFFSET))(this, a1);
		}

		::System::Void MGCBOOGIEBK(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + AJDAJPHJBME_MGCBOOGIEBK_OFFSET))(this, a1);
		}

		::System::Void LGBPPNJLLKJ(::System::Single a1, ::UnityEngine::Vector2 a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2, ::System::Boolean))((::PBYTE)hIl2Cpp + AJDAJPHJBME_LGBPPNJLLKJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Void CJNGAMKHHOL(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AJDAJPHJBME_CJNGAMKHHOL_OFFSET))(this, a1, a2);
		}

		::System::Void NMDMOCCGACM(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AJDAJPHJBME_NMDMOCCGACM_OFFSET))(this, a1, a2);
		}

		::System::Void DNDMMEGLKNI(::Cinemachine::AxisState_IInputAxisProvider* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::AxisState_IInputAxisProvider*))((::PBYTE)hIl2Cpp + AJDAJPHJBME_DNDMMEGLKNI_OFFSET))(this, a1);
		}

		::System::Void NIOPOLFJMPE(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + AJDAJPHJBME_NIOPOLFJMPE_OFFSET))(this, a1);
		}

		::System::Void ONAFAOKGENB(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + AJDAJPHJBME_ONAFAOKGENB_OFFSET))(this, a1);
		}

		::System::Void EPBGDFJEIBN(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AJDAJPHJBME_EPBGDFJEIBN_OFFSET))(this, a1);
		}

		::System::Void LMALIALLFDH(::AJDAJPHJBME* a1)
		{
			return ((::System::Void(*)(::PVOID, ::AJDAJPHJBME*))((::PBYTE)hIl2Cpp + AJDAJPHJBME_LMALIALLFDH_OFFSET))(this, a1);
		}

		::System::Void NDNOAGOOHGM(::Cinemachine::CinemachineTransposer_BindingMode a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineTransposer_BindingMode))((::PBYTE)hIl2Cpp + AJDAJPHJBME_NDNOAGOOHGM_OFFSET))(this, a1);
		}

		::System::Void CKEMMPEEKBD(::System::Boolean a1, ::RPG::GameCore::FreelookCameraDragMode a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::RPG::GameCore::FreelookCameraDragMode))((::PBYTE)hIl2Cpp + AJDAJPHJBME_CKEMMPEEKBD_OFFSET))(this, a1, a2);
		}

		::System::Void LMDMENOEEAN(::UnityEngine::Vector2 a1, ::System::Single a2, ::RPG::Client::CameraBlendCurve* a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single, ::RPG::Client::CameraBlendCurve*, ::System::Single))((::PBYTE)hIl2Cpp + AJDAJPHJBME_LMDMENOEEAN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void IGBDOIOMOCL(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + AJDAJPHJBME_IGBDOIOMOCL_OFFSET))(this, a1);
		}

		::System::Void DJLCCINHDMP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_DJLCCINHDMP_OFFSET))(this);
		}

		::System::Boolean FMLIECJBGEB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_FMLIECJBGEB_OFFSET))(this);
		}

		::UnityEngine::Vector2 HGOAKEHPEHI()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_HGOAKEHPEHI_OFFSET))(this);
		}

		::System::Boolean DNJINHFOHFP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_DNJINHFOHFP_OFFSET))(this);
		}

		::System::Boolean HFBAMIIPCBO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_HFBAMIIPCBO_OFFSET))(this);
		}

		::System::Void NBCELDNGJOL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJDAJPHJBME_NBCELDNGJOL_OFFSET))(this, a1);
		}

		::System::Void NCJNKOKKEGF(::System::Boolean a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AJDAJPHJBME_NCJNKOKKEGF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HMCNAEGILGN(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + AJDAJPHJBME_HMCNAEGILGN_OFFSET))(this, a1);
		}

		::UnityEngine::Vector2 MJKBAPDJPGP()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_MJKBAPDJPGP_OFFSET))(this);
		}

		::System::Void MMMCFCDNOBA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJDAJPHJBME_MMMCFCDNOBA_OFFSET))(this, a1);
		}

		::System::Single APNJOKCNJHE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_APNJOKCNJHE_OFFSET))(this);
		}

		::System::Void HGIFAPDKLNF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJDAJPHJBME_HGIFAPDKLNF_OFFSET))(this, a1);
		}

		::System::Single JLFMONHPKIJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_JLFMONHPKIJ_OFFSET))(this);
		}

		::System::Void EIGAGGAJBCF(::System::Boolean a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AJDAJPHJBME_EIGAGGAJBCF_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DGDKOGJLNNI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AJDAJPHJBME_DGDKOGJLNNI_OFFSET))(this, a1);
		}

		::System::Void ENHBJHABDAL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AJDAJPHJBME_ENHBJHABDAL_OFFSET))(this, a1);
		}

		::UnityEngine::Vector3 AFFMCOCDKOG()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_AFFMCOCDKOG_OFFSET))(this);
		}

		::UnityEngine::Vector3 FNDNCANOEOC()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_FNDNCANOEOC_OFFSET))(this);
		}

		::UnityEngine::Vector2 KLBODJCIEJJ(::UnityEngine::Quaternion a1)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + AJDAJPHJBME_KLBODJCIEJJ_OFFSET))(this, a1);
		}

		::System::Void HGHNAHEPDMI(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + AJDAJPHJBME_HGHNAHEPDMI_OFFSET))(this, a1, a2);
		}

		::System::Void LIICGDNBMBN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJDAJPHJBME_LIICGDNBMBN_OFFSET))(this, a1);
		}

		::System::Single LCFECADKDGM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_LCFECADKDGM_OFFSET))(this);
		}

		::System::Void KNALAHDEFJM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_KNALAHDEFJM_OFFSET))(this);
		}

		::RPG::Client::RPGCinemachineZoom* DHHMGJCJAPH()
		{
			return ((::RPG::Client::RPGCinemachineZoom*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_DHHMGJCJAPH_OFFSET))(this);
		}

		::System::Void NMHAIPDIMAL(::System::Single a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + AJDAJPHJBME_NMHAIPDIMAL_OFFSET))(this, a1, a2);
		}

		::System::Void FEFBKNBPHON()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_FEFBKNBPHON_OFFSET))(this);
		}

		::System::Void ICEIMKDENNG(::JIDKACGCHMA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::JIDKACGCHMA*))((::PBYTE)hIl2Cpp + AJDAJPHJBME_ICEIMKDENNG_OFFSET))(this, a1);
		}

		::System::Void LPDFGIAHNAE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_LPDFGIAHNAE_OFFSET))(this);
		}

		::System::Void NNINDDLFAPH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_NNINDDLFAPH_OFFSET))(this);
		}

		::System::Void PNLHOFDENOM(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + AJDAJPHJBME_PNLHOFDENOM_OFFSET))(this, a1);
		}

		::System::Void NDPIGEHKKAI(::UnityEngine::Vector3 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + AJDAJPHJBME_NDPIGEHKKAI_OFFSET))(this, a1, a2);
		}

		::System::Void MDGIFNKOLMN(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJDAJPHJBME_MDGIFNKOLMN_OFFSET))(this, a1);
		}

		::System::Void PBBAMBEKLKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_PBBAMBEKLKG_OFFSET))(this);
		}

		::System::Void NPIMLIOKIOP(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + AJDAJPHJBME_NPIMLIOKIOP_OFFSET))(this, a1);
		}

		::BHPAGJNNOMM_VCameraType get_CameraType()
		{
			return ((::BHPAGJNNOMM_VCameraType(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_GET_CAMERATYPE_OFFSET))(this);
		}

		::System::Void set_CameraType(::BHPAGJNNOMM_VCameraType a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHPAGJNNOMM_VCameraType))((::PBYTE)hIl2Cpp + AJDAJPHJBME_SET_CAMERATYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_RuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::Void set_RuntimeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AJDAJPHJBME_SET_RUNTIMEID_OFFSET))(this, a1);
		}

		::System::Boolean get_IsCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_GET_ISCREATED_OFFSET))(this);
		}

		::System::Void set_IsCreated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJDAJPHJBME_SET_ISCREATED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJDAJPHJBME_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void set_IsDestroyed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJDAJPHJBME_SET_ISDESTROYED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAvailableForReuse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_GET_ISAVAILABLEFORREUSE_OFFSET))(this);
		}

		::System::Void set_IsAvailableForReuse(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJDAJPHJBME_SET_ISAVAILABLEFORREUSE_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_FollowTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::System::Void set_FollowTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AJDAJPHJBME_SET_FOLLOWTARGET_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_LookAtTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_GET_LOOKATTARGET_OFFSET))(this);
		}

		::System::Void set_LookAtTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + AJDAJPHJBME_SET_LOOKATTARGET_OFFSET))(this, a1);
		}

		::System::Single HADCPEFOLJM()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_HADCPEFOLJM_OFFSET))(this);
		}

		::System::Boolean KPDJHHLAOMA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_KPDJHHLAOMA_OFFSET))(this);
		}

		::System::Single get_AxisValueXChangeSpeed()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_GET_AXISVALUEXCHANGESPEED_OFFSET))(this);
		}

		::System::Void set_AxisValueXChangeSpeed(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AJDAJPHJBME_SET_AXISVALUEXCHANGESPEED_OFFSET))(this, a1);
		}

		::System::Boolean get_FreelookDragMode()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_GET_FREELOOKDRAGMODE_OFFSET))(this);
		}

		::System::Void set_FreelookDragMode(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AJDAJPHJBME_SET_FREELOOKDRAGMODE_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineFreeLook* DLALHCAJNEK()
		{
			return ((::Cinemachine::CinemachineFreeLook*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_DLALHCAJNEK_OFFSET))(this);
		}

		::LBJHOHLLJDE* BMCBNGJPNEB()
		{
			return ((::LBJHOHLLJDE*(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_BMCBNGJPNEB_OFFSET))(this);
		}

		::System::Void IKGBKNBKGGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJDAJPHJBME_IKGBKNBKGGN_OFFSET))(this);
		}

	};
