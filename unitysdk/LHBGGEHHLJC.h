#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BHPAGJNNOMM_VCameraType.h"
#include "unitysdk/Cinemachine/CinemachineVirtualCameraBase_BlendHint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace Cinemachine { class CinemachineDollyCart; }
namespace Cinemachine { class CinemachinePathBase; }
namespace Cinemachine { class CinemachineSmoothPath; }
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace Cinemachine { class NoiseSettings; }
namespace RPG::Client { class CameraDataAndFlags; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define LHBGGEHHLJC_ACJLFCDLCFG_OFFSET UNITYSDK_OFFSET(0xB6A7450)
#define LHBGGEHHLJC_AHLGICBFJPF_OFFSET UNITYSDK_OFFSET(0xB6A6EB0)
#define LHBGGEHHLJC_BJMNKLGEMPM_OFFSET UNITYSDK_OFFSET(0xB6A70F0)
#define LHBGGEHHLJC_CDNHJMHIGGK_OFFSET UNITYSDK_OFFSET(0xB6A5430)
#define LHBGGEHHLJC_CFICIBLABBB_OFFSET UNITYSDK_OFFSET(0xB6A69E0)
#define LHBGGEHHLJC_CIGACHAOIMO_OFFSET UNITYSDK_OFFSET(0xB6A5C90)
#define LHBGGEHHLJC_CIPJBBAOLBD_OFFSET UNITYSDK_OFFSET(0xB6A4F40)
#define LHBGGEHHLJC_CTOR_OFFSET UNITYSDK_OFFSET(0xB6A4F00)
#define LHBGGEHHLJC_DFBOIPGLMDP_OFFSET UNITYSDK_OFFSET(0xB6A7160)
#define LHBGGEHHLJC_DGDKOGJLNNI_OFFSET UNITYSDK_OFFSET(0xB6A6870)
#define LHBGGEHHLJC_EDKFLMCNMDJ_OFFSET UNITYSDK_OFFSET(0xB6A6F60)
#define LHBGGEHHLJC_EJAFDKAHMAG_OFFSET UNITYSDK_OFFSET(0xB6A71D0)
#define LHBGGEHHLJC_EKNDAGMPNGD_OFFSET UNITYSDK_OFFSET(0xB6A7850)
#define LHBGGEHHLJC_EMDIKPDCMCP_OFFSET UNITYSDK_OFFSET(0xB6A54D0)
#define LHBGGEHHLJC_ENHBJHABDAL_OFFSET UNITYSDK_OFFSET(0xB6A6950)
#define LHBGGEHHLJC_FHCPIEJAIKE_OFFSET UNITYSDK_OFFSET(0xB6A5AD0)
#define LHBGGEHHLJC_FJMACPENDKD_OFFSET UNITYSDK_OFFSET(0xB6A5D80)
#define LHBGGEHHLJC_FJNOJJKMMMH_OFFSET UNITYSDK_OFFSET(0xB6A6D00)
#define LHBGGEHHLJC_FOKHFPIEJAH_OFFSET UNITYSDK_OFFSET(0xB6A57E0)
#define LHBGGEHHLJC_GET_CAMERATYPE_OFFSET UNITYSDK_OFFSET(0xB6A77D0)
#define LHBGGEHHLJC_GET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xB6A7810)
#define LHBGGEHHLJC_GET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xB6A7660)
#define LHBGGEHHLJC_GET_ISAVAILABLEFORREUSE_OFFSET UNITYSDK_OFFSET(0xB6A76A0)
#define LHBGGEHHLJC_GET_ISCREATED_OFFSET UNITYSDK_OFFSET(0xB6A7640)
#define LHBGGEHHLJC_GET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xB6A7680)
#define LHBGGEHHLJC_GET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xB6A7830)
#define LHBGGEHHLJC_GET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6A77F0)
#define LHBGGEHHLJC_GFFLEHFJNHL_OFFSET UNITYSDK_OFFSET(0xB6A7600)
#define LHBGGEHHLJC_HEBNJHMNCOE_OFFSET UNITYSDK_OFFSET(0xB6A7350)
#define LHBGGEHHLJC_HGIFAPDKLNF_OFFSET UNITYSDK_OFFSET(0xB6A60D0)
#define LHBGGEHHLJC_IGGGLNGEHKA_OFFSET UNITYSDK_OFFSET(0xB6A7400)
#define LHBGGEHHLJC_ILHLFGKEDBF_OFFSET UNITYSDK_OFFSET(0xB6A6690)
#define LHBGGEHHLJC_IOHMICMIOJH_OFFSET UNITYSDK_OFFSET(0xB6A6B00)
#define LHBGGEHHLJC_JKAKKMPMCPD_OFFSET UNITYSDK_OFFSET(0xB6A5A40)
#define LHBGGEHHLJC_JLFMONHPKIJ_OFFSET UNITYSDK_OFFSET(0xB6A66F0)
#define LHBGGEHHLJC_LEJMCJKEBHO_OFFSET UNITYSDK_OFFSET(0xB6A5490)
#define LHBGGEHHLJC_LHLMEINHBFN_OFFSET UNITYSDK_OFFSET(0xB6A7860)
#define LHBGGEHHLJC_LJMNKABEHCJ_OFFSET UNITYSDK_OFFSET(0xB6A6F20)
#define LHBGGEHHLJC_LNMAHEBCALO_OFFSET UNITYSDK_OFFSET(0xB6A6740)
#define LHBGGEHHLJC_MICIEBIIMON_OFFSET UNITYSDK_OFFSET(0xB6A7390)
#define LHBGGEHHLJC_MMOOPODNBGD_OFFSET UNITYSDK_OFFSET(0xB6A5B40)
#define LHBGGEHHLJC_MOBJOGHFIOE_OFFSET UNITYSDK_OFFSET(0xB6A5EF0)
#define LHBGGEHHLJC_NBLEDBPMLMA_OFFSET UNITYSDK_OFFSET(0xB6A59C0)
#define LHBGGEHHLJC_NJOBMENFBFJ_OFFSET UNITYSDK_OFFSET(0xB6A6AA0)
#define LHBGGEHHLJC_OBEAPIJGPHH_OFFSET UNITYSDK_OFFSET(0xB6A6060)
#define LHBGGEHHLJC_OGKHDLPFJGB_OFFSET UNITYSDK_OFFSET(0xB6A5F80)
#define LHBGGEHHLJC_OMPPKGJPKOJ_OFFSET UNITYSDK_OFFSET(0xB6A67D0)
#define LHBGGEHHLJC_PIKLJNPLJGK_OFFSET UNITYSDK_OFFSET(0xB6A6FA0)
#define LHBGGEHHLJC_PILBPNGEPKA_OFFSET UNITYSDK_OFFSET(0xB6A5E10)
#define LHBGGEHHLJC_SET_CAMERATYPE_OFFSET UNITYSDK_OFFSET(0xB6A77E0)
#define LHBGGEHHLJC_SET_FOLLOWTARGET_OFFSET UNITYSDK_OFFSET(0xB6A7820)
#define LHBGGEHHLJC_SET_ISACTIVE_OFFSET UNITYSDK_OFFSET(0xB6A7670)
#define LHBGGEHHLJC_SET_ISCREATED_OFFSET UNITYSDK_OFFSET(0xB6A7650)
#define LHBGGEHHLJC_SET_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0xB6A7690)
#define LHBGGEHHLJC_SET_LOOKATTARGET_OFFSET UNITYSDK_OFFSET(0xB6A7840)
#define LHBGGEHHLJC_SET_RUNTIMEID_OFFSET UNITYSDK_OFFSET(0xB6A7800)

inline static constexpr unsigned int LHBGGEHHLJC_TypeDefinitionIndex = 69751;

	class LHBGGEHHLJC : public ::System::Object
	{
	public:
		::Cinemachine::CinemachineVirtualCameraBase* DBKEDAJIKPK; // 0x10
		::Cinemachine::CinemachineSmoothPath* CMKPALNNMEH; // 0x18
		::Cinemachine::NoiseSettings* CMBMHNAOKOA; // 0x20
		::Cinemachine::CinemachineDollyCart* ALJONEKBOPN; // 0x28
		::UnityEngine::Transform* _FollowTarget_k__BackingField; // 0x30
		::UnityEngine::Transform* _LookAtTarget_k__BackingField; // 0x38
		::UnityEngine::Transform* HNABPIMEPKM; // 0x40
		::UnityEngine::GameObject* DOKFAOCAKND; // 0x48
		::UnityEngine::GameObject* MHMABPNBJOC; // 0x50
		::Cinemachine::CinemachineVirtualCamera* EAJFHBDCFFO; // 0x58
		::System::Int32 DIIBHKPGKCB; // 0x60
		::System::Single IMKBCFBCBHD; // 0x64
		::System::UInt32 _RuntimeID_k__BackingField; // 0x68
		::System::UInt32 IMAFFKLMFLD; // 0x6C
		::System::Single DGPBNFBMJJI; // 0x70
		::System::Boolean _IsCreated_k__BackingField; // 0x74
		::System::Byte _padding0[0x3];
		::BHPAGJNNOMM_VCameraType _CameraType_k__BackingField; // 0x78
		::System::Single OFANBKLCDPC; // 0x7C
		::System::Boolean _IsActive_k__BackingField; // 0x80
		::System::Boolean _IsDestroyed_k__BackingField; // 0x81
		::System::Boolean BCHDMAMENDP; // 0x82
		::System::Boolean PBIAKKPFAAL; // 0x83
		::System::Single HHADDGJOGPE; // 0x84
		::System::Void _ctor(::BHPAGJNNOMM_VCameraType a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::BHPAGJNNOMM_VCameraType, ::System::UInt32))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void CIPJBBAOLBD(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_CIPJBBAOLBD_OFFSET))(this, a1);
		}

		::System::Void CDNHJMHIGGK(::Cinemachine::CinemachineVirtualCameraBase* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase*, ::System::String*))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_CDNHJMHIGGK_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* LEJMCJKEBHO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_LEJMCJKEBHO_OFFSET))(this);
		}

		::System::Void EMDIKPDCMCP(::RPG::Client::CameraDataAndFlags* a1, ::UnityEngine::Vector3 a2, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::CameraDataAndFlags*, ::UnityEngine::Vector3, ::System::Collections::Generic::List_1<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_EMDIKPDCMCP_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FOKHFPIEJAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_FOKHFPIEJAH_OFFSET))(this);
		}

		::System::Boolean NBLEDBPMLMA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_NBLEDBPMLMA_OFFSET))(this);
		}

		::System::Void JKAKKMPMCPD(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_JKAKKMPMCPD_OFFSET))(this, a1);
		}

		::System::Single FHCPIEJAIKE()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_FHCPIEJAIKE_OFFSET))(this);
		}

		::System::Void MMOOPODNBGD(::System::Boolean a1, ::Cinemachine::NoiseSettings* a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::Cinemachine::NoiseSettings*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_MMOOPODNBGD_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void CIGACHAOIMO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_CIGACHAOIMO_OFFSET))(this, a1);
		}

		::System::Void FJMACPENDKD(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_FJMACPENDKD_OFFSET))(this, a1);
		}

		::System::Void PILBPNGEPKA(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_PILBPNGEPKA_OFFSET))(this, a1);
		}

		::System::Void MOBJOGHFIOE(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_MOBJOGHFIOE_OFFSET))(this, a1);
		}

		::System::Void OGKHDLPFJGB(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_OGKHDLPFJGB_OFFSET))(this, a1);
		}

		::System::Void OBEAPIJGPHH(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_OBEAPIJGPHH_OFFSET))(this, a1);
		}

		::System::Void HGIFAPDKLNF(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_HGIFAPDKLNF_OFFSET))(this, a1);
		}

		::System::Single ILHLFGKEDBF()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_ILHLFGKEDBF_OFFSET))(this);
		}

		::System::Single JLFMONHPKIJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_JLFMONHPKIJ_OFFSET))(this);
		}

		::System::Void LNMAHEBCALO(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_LNMAHEBCALO_OFFSET))(this, a1);
		}

		::System::Void OMPPKGJPKOJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_OMPPKGJPKOJ_OFFSET))(this, a1);
		}

		::System::Void DGDKOGJLNNI(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_DGDKOGJLNNI_OFFSET))(this, a1);
		}

		::System::Void ENHBJHABDAL(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_ENHBJHABDAL_OFFSET))(this, a1);
		}

		::System::Void CFICIBLABBB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_CFICIBLABBB_OFFSET))(this, a1);
		}

		::System::Void NJOBMENFBFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_NJOBMENFBFJ_OFFSET))(this, a1);
		}

		::System::Void AHLGICBFJPF(::Cinemachine::CinemachineVirtualCameraBase_BlendHint a1)
		{
			return ((::System::Void(*)(::PVOID, ::Cinemachine::CinemachineVirtualCameraBase_BlendHint))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_AHLGICBFJPF_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* LJMNKABEHCJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_LJMNKABEHCJ_OFFSET))(this);
		}

		::UnityEngine::Transform* EDKFLMCNMDJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_EDKFLMCNMDJ_OFFSET))(this);
		}

		::UnityEngine::Vector3 PIKLJNPLJGK()
		{
			return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_PIKLJNPLJGK_OFFSET))(this);
		}

		::System::Void BJMNKLGEMPM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_BJMNKLGEMPM_OFFSET))(this);
		}

		::System::Void DFBOIPGLMDP(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_DFBOIPGLMDP_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineDollyCart* EJAFDKAHMAG(::Cinemachine::CinemachinePathBase* a1)
		{
			return ((::Cinemachine::CinemachineDollyCart*(*)(::PVOID, ::Cinemachine::CinemachinePathBase*))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_EJAFDKAHMAG_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* HEBNJHMNCOE()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_HEBNJHMNCOE_OFFSET))(this);
		}

		::System::Void MICIEBIIMON(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_MICIEBIIMON_OFFSET))(this, a1);
		}

		::System::Void IGGGLNGEHKA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_IGGGLNGEHKA_OFFSET))(this);
		}

		::System::Void ACJLFCDLCFG(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_ACJLFCDLCFG_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CinemachineDollyCart* GFFLEHFJNHL()
		{
			return ((::Cinemachine::CinemachineDollyCart*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_GFFLEHFJNHL_OFFSET))(this);
		}

		::System::Boolean get_IsCreated()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_GET_ISCREATED_OFFSET))(this);
		}

		::System::Void set_IsCreated(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_SET_ISCREATED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_GET_ISACTIVE_OFFSET))(this);
		}

		::System::Void set_IsActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_SET_ISACTIVE_OFFSET))(this, a1);
		}

		::System::Boolean get_IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_GET_ISDESTROYED_OFFSET))(this);
		}

		::System::Void set_IsDestroyed(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_SET_ISDESTROYED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsAvailableForReuse()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_GET_ISAVAILABLEFORREUSE_OFFSET))(this);
		}

		::BHPAGJNNOMM_VCameraType get_CameraType()
		{
			return ((::BHPAGJNNOMM_VCameraType(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_GET_CAMERATYPE_OFFSET))(this);
		}

		::System::Void set_CameraType(::BHPAGJNNOMM_VCameraType a1)
		{
			return ((::System::Void(*)(::PVOID, ::BHPAGJNNOMM_VCameraType))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_SET_CAMERATYPE_OFFSET))(this, a1);
		}

		::System::UInt32 get_RuntimeID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_GET_RUNTIMEID_OFFSET))(this);
		}

		::System::Void set_RuntimeID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_SET_RUNTIMEID_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_FollowTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_GET_FOLLOWTARGET_OFFSET))(this);
		}

		::System::Void set_FollowTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_SET_FOLLOWTARGET_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* get_LookAtTarget()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_GET_LOOKATTARGET_OFFSET))(this);
		}

		::System::Void set_LookAtTarget(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_SET_LOOKATTARGET_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineVirtualCamera* EKNDAGMPNGD()
		{
			return ((::Cinemachine::CinemachineVirtualCamera*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_EKNDAGMPNGD_OFFSET))(this);
		}

		::UnityEngine::GameObject* LHLMEINHBFN()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_LHLMEINHBFN_OFFSET))(this);
		}

		::System::Void IOHMICMIOJH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_IOHMICMIOJH_OFFSET))(this);
		}

		::System::Void FJNOJJKMMMH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LHBGGEHHLJC_FJNOJJKMMMH_OFFSET))(this);
		}

	};
