#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
class APCCFELCPKH_MJFEMPECGGL;
class APCCFELCPKH_PBNOOPCGMKN;
class FLAEJKFGILD;
class KGDADKNPPOL;
class KLEFGGIHGMI;
class PreviewTrackCamera;
class TrainPartyCameraBlend;
namespace Cinemachine { class CinemachineBrain; }
namespace Cinemachine { class CinemachineVirtualCameraBase; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class Stage; }
namespace RPG::Client::OpenWorld { class StreamingItemData; }
namespace RPG::Client::TrainParty { class TrainPartyBuildDIYItem; }
namespace RPG::GameCore { class TrainPartyAreaConfigRow; }
namespace RPG::GameCore { class TrainPartyBuildBlock; }
namespace RPG::GameCore { class TrainPartyBuildItemConfig; }
namespace RPG::GameCore { class TrainPartyBuildItemDynamicBindValue; }
namespace RPG::GameCore { class TrainPartyBuildStaticItem; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define APCCFELCPKH_AAKNGGHCMML_OFFSET UNITYSDK_OFFSET(0x158C2C60)
#define APCCFELCPKH_AGKACFCJMCK_OFFSET UNITYSDK_OFFSET(0x158C48F0)
#define APCCFELCPKH_AIOCHMDBFEG_OFFSET UNITYSDK_OFFSET(0x158CB450)
#define APCCFELCPKH_BEEAMOBJFBF_OFFSET UNITYSDK_OFFSET(0x158C6FD0)
#define APCCFELCPKH_BICMIHIFKNH_OFFSET UNITYSDK_OFFSET(0x158C23E0)
#define APCCFELCPKH_BJEBPOAOAME_OFFSET UNITYSDK_OFFSET(0x158CB270)
#define APCCFELCPKH_BOBNJFKAJDC_OFFSET UNITYSDK_OFFSET(0x158C9DF0)
#define APCCFELCPKH_CBIOMOBPMDK_OFFSET UNITYSDK_OFFSET(0x158CAC10)
#define APCCFELCPKH_CCDMGCPFHJE_OFFSET UNITYSDK_OFFSET(0x158C35C0)
#define APCCFELCPKH_CCTOR_OFFSET UNITYSDK_OFFSET(0x15B942E0)
#define APCCFELCPKH_CDEIMLGEMFG_OFFSET UNITYSDK_OFFSET(0x158CB130)
#define APCCFELCPKH_CPEDJFMCAFA_OFFSET UNITYSDK_OFFSET(0x15B94110)
#define APCCFELCPKH_CTOR_OFFSET UNITYSDK_OFFSET(0x158C14E0)
#define APCCFELCPKH_DEECPLMGHNO_OFFSET UNITYSDK_OFFSET(0x158CAF30)
#define APCCFELCPKH_DIJDNJPMIFF_OFFSET UNITYSDK_OFFSET(0x158C9F40)
#define APCCFELCPKH_DISPOSE_OFFSET UNITYSDK_OFFSET(0x158C3EB0)
#define APCCFELCPKH_DJMGIFPLBHN_1_OFFSET UNITYSDK_OFFSET(0x158CA460)
#define APCCFELCPKH_DJMGIFPLBHN_2_OFFSET UNITYSDK_OFFSET(0x158CA2B0)
#define APCCFELCPKH_DJMGIFPLBHN_3_OFFSET UNITYSDK_OFFSET(0x158CA100)
#define APCCFELCPKH_DJMGIFPLBHN_OFFSET UNITYSDK_OFFSET(0x158C9FC0)
#define APCCFELCPKH_DKCIKFPJMKG_OFFSET UNITYSDK_OFFSET(0x158CA6E0)
#define APCCFELCPKH_DOIKDMJPBOA_OFFSET UNITYSDK_OFFSET(0x158C5CA0)
#define APCCFELCPKH_DPICNGBHFAC_OFFSET UNITYSDK_OFFSET(0x158CAEA0)
#define APCCFELCPKH_EDLIAAGIDGI_OFFSET UNITYSDK_OFFSET(0x158C9510)
#define APCCFELCPKH_EJKFMEHKMIE_OFFSET UNITYSDK_OFFSET(0x158C7DF0)
#define APCCFELCPKH_EJKNBCIPFLM_OFFSET UNITYSDK_OFFSET(0x158C8A70)
#define APCCFELCPKH_ELMDKNFHHMH_OFFSET UNITYSDK_OFFSET(0x158C5860)
#define APCCFELCPKH_EPCCHODCFNI_OFFSET UNITYSDK_OFFSET(0x158CA580)
#define APCCFELCPKH_FHBHCAKCPFN_OFFSET UNITYSDK_OFFSET(0x158C72F0)
#define APCCFELCPKH_FJIBGFOOGOM_OFFSET UNITYSDK_OFFSET(0x158C63E0)
#define APCCFELCPKH_FKCMLECOICD_OFFSET UNITYSDK_OFFSET(0x158C8FA0)
#define APCCFELCPKH_FOLFHBDOEFH_OFFSET UNITYSDK_OFFSET(0x158C4CE0)
#define APCCFELCPKH_GICIANEKKIK_OFFSET UNITYSDK_OFFSET(0x158C3A40)
#define APCCFELCPKH_HBGKJDPACMC_OFFSET UNITYSDK_OFFSET(0x158C2160)
#define APCCFELCPKH_HCPODBHAHKC_OFFSET UNITYSDK_OFFSET(0x158C3CD0)
#define APCCFELCPKH_HIMGDAHJAKC_OFFSET UNITYSDK_OFFSET(0x158C51B0)
#define APCCFELCPKH_HKCDBCGNMIC_OFFSET UNITYSDK_OFFSET(0x158CAB60)
#define APCCFELCPKH_HNKFKJNLOOC_OFFSET UNITYSDK_OFFSET(0x158C1DD0)
#define APCCFELCPKH_HOEKDHBPGAI_OFFSET UNITYSDK_OFFSET(0x158C7B10)
#define APCCFELCPKH_IAOCGGPALCC_OFFSET UNITYSDK_OFFSET(0x158C77F0)
#define APCCFELCPKH_JABJKJLBBKF_OFFSET UNITYSDK_OFFSET(0x158C2710)
#define APCCFELCPKH_JKAPCDEMEFL_OFFSET UNITYSDK_OFFSET(0x158C7470)
#define APCCFELCPKH_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x158C5110)
#define APCCFELCPKH_JNENMOJMKAF_OFFSET UNITYSDK_OFFSET(0x158C4D90)
#define APCCFELCPKH_JOOFBIJAKJC_OFFSET UNITYSDK_OFFSET(0x158C8BA0)
#define APCCFELCPKH_JPIEPJGNDLC_OFFSET UNITYSDK_OFFSET(0x158C56F0)
#define APCCFELCPKH_KBLDIGCGAHM_OFFSET UNITYSDK_OFFSET(0x158C8140)
#define APCCFELCPKH_KGMJNJBLGKB_OFFSET UNITYSDK_OFFSET(0x15B941F0)
#define APCCFELCPKH_KMFAMJLEALL_OFFSET UNITYSDK_OFFSET(0x158C7990)
#define APCCFELCPKH_KPNIDNMHPCN_OFFSET UNITYSDK_OFFSET(0x158C4690)
#define APCCFELCPKH_LAJMNECBAGI_OFFSET UNITYSDK_OFFSET(0x158C60A0)
#define APCCFELCPKH_LBPGALEHNMJ_OFFSET UNITYSDK_OFFSET(0x158C7F40)
#define APCCFELCPKH_LCEPBBFHFHD_OFFSET UNITYSDK_OFFSET(0x158C5EC0)
#define APCCFELCPKH_LGHCHBCJDLD_OFFSET UNITYSDK_OFFSET(0x158C8650)
#define APCCFELCPKH_MEIABPANBCB_OFFSET UNITYSDK_OFFSET(0x158C9390)
#define APCCFELCPKH_MIPONDCOPAC_OFFSET UNITYSDK_OFFSET(0x158C4B00)
#define APCCFELCPKH_NCCJFOLKGKF_OFFSET UNITYSDK_OFFSET(0x158C46F0)
#define APCCFELCPKH_OFDIBGBHPFE_OFFSET UNITYSDK_OFFSET(0x158CA960)
#define APCCFELCPKH_OJJLDFKNBMF_OFFSET UNITYSDK_OFFSET(0x158C9BC0)
#define APCCFELCPKH_PDOOLECJLHI_OFFSET UNITYSDK_OFFSET(0x158C7080)
#define APCCFELCPKH_PJDMFCOOCMO_OFFSET UNITYSDK_OFFSET(0x158C6980)
#define APCCFELCPKH_PJHAKDFFOJH_OFFSET UNITYSDK_OFFSET(0x158CB5D0)
#define APCCFELCPKH_PKOODAFOPCL_OFFSET UNITYSDK_OFFSET(0x158C5A20)
#define APCCFELCPKH_PPEAFLLAEKB_OFFSET UNITYSDK_OFFSET(0x158C2430)
#define APCCFELCPKH__ENTERBUILDCAMERA_B__4_0_OFFSET UNITYSDK_OFFSET(0x15B94300)

inline static constexpr unsigned int APCCFELCPKH_TypeDefinitionIndex = 60234;

	class APCCFELCPKH : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::Transform*>* FBIACKAEMAH; // 0x10
		::UnityEngine::GameObject* LBCOCNFEDHO; // 0x18
		::Cinemachine::CinemachineVirtualCameraBase* KCIFKMOMPOL; // 0x20
		::RPG::Client::Stage* PDAIGLPEMEE; // 0x28
		::System::Action_2<::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*>* JGKMLBGAJNE; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* AMKECEFGLLP; // 0x38
		::RPG::Client::NotifyHandler* OCGJNBEOALF; // 0x40
		::UnityEngine::Transform* DFIIFCOCDND; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* LHGDDJGKBJK; // 0x50
		::PreviewTrackCamera* DJDLPEJNIHP; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::RPG::GameCore::TrainPartyBuildItemConfig*>* DNJLAHPLLFB; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* MKEEEANELCE; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* MFGEADHPLHO; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* DDDCHACNHBP; // 0x78
		::System::Boolean JEIBLOLOJCB; // 0x80
		::System::Boolean NGFFKPIEMII; // 0x81
		::System::Boolean AAHECNLNBEJ; // 0x82
		::System::Boolean GELEACGBGCM; // 0x83
		::System::UInt32 MIEPNNEABLM; // 0x84
		::System::UInt32 BJLMBJFPALF; // 0x88
		::System::UInt32 GOHDPEEFCBL; // 0x8C
		static ::System::Single* StaticGet_NNAADFMCDGO()
		{
			return (::System::Single*)UnitySDK::FromName("", "APCCFELCPKH")->GetStaticField(0x147A0);
		}

		static ::System::Single* StaticGet_LDNHEHCDGJO()
		{
			return (::System::Single*)UnitySDK::FromName("", "APCCFELCPKH")->GetStaticField(0x147A4);
		}

		static ::System::Single* StaticGet_IPJIEPKCNNI()
		{
			return (::System::Single*)UnitySDK::FromName("", "APCCFELCPKH")->GetStaticField(0x147A8);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + APCCFELCPKH_CCTOR_OFFSET))();
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_DISPOSE_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + APCCFELCPKH_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Boolean JPIEPJGNDLC(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APCCFELCPKH_JPIEPJGNDLC_OFFSET))(this, a1);
		}

		::System::Void PKOODAFOPCL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_PKOODAFOPCL_OFFSET))(this);
		}

		::System::Void LAJMNECBAGI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_LAJMNECBAGI_OFFSET))(this);
		}

		::System::Void KPNIDNMHPCN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_KPNIDNMHPCN_OFFSET))(this);
		}

		::System::Void PJDMFCOOCMO(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + APCCFELCPKH_PJDMFCOOCMO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void IAOCGGPALCC(::System::UInt32 a1, ::System::Action* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Action*))((::PBYTE)hIl2Cpp + APCCFELCPKH_IAOCGGPALCC_OFFSET))(this, a1, a2);
		}

		::System::Void HOEKDHBPGAI(::System::UInt32 a1, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + APCCFELCPKH_HOEKDHBPGAI_OFFSET))(this, a1, a2);
		}

		::System::Void NCCJFOLKGKF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_NCCJFOLKGKF_OFFSET))(this);
		}

		::System::Void LBPGALEHNMJ(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APCCFELCPKH_LBPGALEHNMJ_OFFSET))(this, a1);
		}

		::System::Void LGHCHBCJDLD(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + APCCFELCPKH_LGHCHBCJDLD_OFFSET))(this, a1);
		}

		::System::Void AGKACFCJMCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_AGKACFCJMCK_OFFSET))(this);
		}

		::System::Void EJKNBCIPFLM(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APCCFELCPKH_EJKNBCIPFLM_OFFSET))(this, a1);
		}

		::System::UInt32 FKCMLECOICD(::UnityEngine::GameObject* a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + APCCFELCPKH_FKCMLECOICD_OFFSET))(this, a1);
		}

		::UnityEngine::Quaternion MEIABPANBCB(::System::UInt32 a1)
		{
			return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APCCFELCPKH_MEIABPANBCB_OFFSET))(this, a1);
		}

		::System::Void HNKFKJNLOOC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_HNKFKJNLOOC_OFFSET))(this);
		}

		::System::Void EDLIAAGIDGI(::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* a1, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* a2, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*, ::System::Collections::Generic::HashSet_1<::KGDADKNPPOL*>*))((::PBYTE)hIl2Cpp + APCCFELCPKH_EDLIAAGIDGI_OFFSET))(this, a1, a2, a3);
		}

		::System::Void HCPODBHAHKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_HCPODBHAHKC_OFFSET))(this);
		}

		::System::Void MIPONDCOPAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_MIPONDCOPAC_OFFSET))(this);
		}

		::System::Void FOLFHBDOEFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_FOLFHBDOEFH_OFFSET))(this);
		}

		::System::Void HIMGDAHJAKC(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APCCFELCPKH_HIMGDAHJAKC_OFFSET))(this, a1);
		}

		::System::Void OJJLDFKNBMF(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + APCCFELCPKH_OJJLDFKNBMF_OFFSET))(this, a1);
		}

		::System::Void JKAPCDEMEFL(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APCCFELCPKH_JKAPCDEMEFL_OFFSET))(this, a1);
		}

		::System::Void HBGKJDPACMC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_HBGKJDPACMC_OFFSET))(this);
		}

		::System::Void LCEPBBFHFHD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_LCEPBBFHFHD_OFFSET))(this);
		}

		::Cinemachine::CinemachineBrain* BOBNJFKAJDC()
		{
			return ((::Cinemachine::CinemachineBrain*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_BOBNJFKAJDC_OFFSET))(this);
		}

		::UnityEngine::Camera* DIJDNJPMIFF()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_DIJDNJPMIFF_OFFSET))(this);
		}

		::TrainPartyCameraBlend* FHBHCAKCPFN()
		{
			return ((::TrainPartyCameraBlend*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_FHBHCAKCPFN_OFFSET))(this);
		}

		::System::Void PDOOLECJLHI(::FLAEJKFGILD* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FLAEJKFGILD*))((::PBYTE)hIl2Cpp + APCCFELCPKH_PDOOLECJLHI_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineVirtualCameraBase* BEEAMOBJFBF(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + APCCFELCPKH_BEEAMOBJFBF_OFFSET))(this, a1, a2, a3);
		}

		::PreviewTrackCamera* KMFAMJLEALL(::System::UInt32 a1)
		{
			return ((::PreviewTrackCamera*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APCCFELCPKH_KMFAMJLEALL_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineVirtualCameraBase* DJMGIFPLBHN()
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_DJMGIFPLBHN_OFFSET))(this);
		}

		::Cinemachine::CinemachineVirtualCameraBase* DJMGIFPLBHN_1(::System::UInt32 a1)
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + APCCFELCPKH_DJMGIFPLBHN_1_OFFSET))(this, a1);
		}

		::Cinemachine::CinemachineVirtualCameraBase* DJMGIFPLBHN_2(::System::UInt32 a1, ::System::UInt32 a2)
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + APCCFELCPKH_DJMGIFPLBHN_2_OFFSET))(this, a1, a2);
		}

		::Cinemachine::CinemachineVirtualCameraBase* DJMGIFPLBHN_3(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
		{
			return ((::Cinemachine::CinemachineVirtualCameraBase*(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + APCCFELCPKH_DJMGIFPLBHN_3_OFFSET))(this, a1, a2, a3);
		}

		::System::Void BICMIHIFKNH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_BICMIHIFKNH_OFFSET))(this);
		}

		::System::Void EPCCHODCFNI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_EPCCHODCFNI_OFFSET))(this);
		}

		::System::Void PPEAFLLAEKB(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + APCCFELCPKH_PPEAFLLAEKB_OFFSET))(this, a1);
		}

		::System::Void JABJKJLBBKF(::RPG::GameCore::TrainPartyBuildBlock* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyBuildBlock*))((::PBYTE)hIl2Cpp + APCCFELCPKH_JABJKJLBBKF_OFFSET))(this, a1);
		}

		::System::Void HKCDBCGNMIC(::UnityEngine::GameObject* a1, ::RPG::Client::OpenWorld::StreamingItemData* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::RPG::Client::OpenWorld::StreamingItemData*))((::PBYTE)hIl2Cpp + APCCFELCPKH_HKCDBCGNMIC_OFFSET))(this, a1, a2);
		}

		::System::Boolean ELMDKNFHHMH(::RPG::GameCore::TrainPartyBuildStaticItem* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainPartyBuildStaticItem*))((::PBYTE)hIl2Cpp + APCCFELCPKH_ELMDKNFHHMH_OFFSET))(this, a1);
		}

		::System::Boolean CBIOMOBPMDK(::RPG::GameCore::TrainPartyBuildItemDynamicBindValue* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::TrainPartyBuildItemDynamicBindValue*))((::PBYTE)hIl2Cpp + APCCFELCPKH_CBIOMOBPMDK_OFFSET))(this, a1);
		}

		static ::System::Boolean DPICNGBHFAC(::System::Int16 a1, ::System::Int16 a2, ::RPG::GameCore::CompareType a3)
		{
			return ((::System::Boolean(*)(::System::Int16, ::System::Int16, ::RPG::GameCore::CompareType))((::PBYTE)hIl2Cpp + APCCFELCPKH_DPICNGBHFAC_OFFSET))(a1, a2, a3);
		}

		::System::Void CCDMGCPFHJE(::System::UInt32 a1, ::APCCFELCPKH_PBNOOPCGMKN* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::APCCFELCPKH_PBNOOPCGMKN*, ::System::Boolean))((::PBYTE)hIl2Cpp + APCCFELCPKH_CCDMGCPFHJE_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GICIANEKKIK(::System::UInt32 a1, ::APCCFELCPKH_MJFEMPECGGL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::APCCFELCPKH_MJFEMPECGGL*))((::PBYTE)hIl2Cpp + APCCFELCPKH_GICIANEKKIK_OFFSET))(this, a1, a2);
		}

		::System::Void EJKFMEHKMIE(::System::UInt32 a1, ::APCCFELCPKH_MJFEMPECGGL* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::APCCFELCPKH_MJFEMPECGGL*))((::PBYTE)hIl2Cpp + APCCFELCPKH_EJKFMEHKMIE_OFFSET))(this, a1, a2);
		}

		::System::Void JNENMOJMKAF(::APCCFELCPKH_MJFEMPECGGL* a1)
		{
			return ((::System::Void(*)(::PVOID, ::APCCFELCPKH_MJFEMPECGGL*))((::PBYTE)hIl2Cpp + APCCFELCPKH_JNENMOJMKAF_OFFSET))(this, a1);
		}

		::System::Void KBLDIGCGAHM(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1, ::APCCFELCPKH_MJFEMPECGGL* a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*, ::APCCFELCPKH_MJFEMPECGGL*, ::System::Boolean))((::PBYTE)hIl2Cpp + APCCFELCPKH_KBLDIGCGAHM_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AAKNGGHCMML(::System::UInt32 a1, ::APCCFELCPKH_PBNOOPCGMKN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::APCCFELCPKH_PBNOOPCGMKN*))((::PBYTE)hIl2Cpp + APCCFELCPKH_AAKNGGHCMML_OFFSET))(this, a1, a2);
		}

		::KLEFGGIHGMI* OFDIBGBHPFE(::System::String* a1)
		{
			return ((::KLEFGGIHGMI*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + APCCFELCPKH_OFDIBGBHPFE_OFFSET))(this, a1);
		}

		::KLEFGGIHGMI* DEECPLMGHNO(::System::String* a1)
		{
			return ((::KLEFGGIHGMI*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + APCCFELCPKH_DEECPLMGHNO_OFFSET))(this, a1);
		}

		::System::Void CDEIMLGEMFG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APCCFELCPKH_CDEIMLGEMFG_OFFSET))(this, a1);
		}

		::System::Void BJEBPOAOAME(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APCCFELCPKH_BJEBPOAOAME_OFFSET))(this, a1);
		}

		::System::Void AIOCHMDBFEG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APCCFELCPKH_AIOCHMDBFEG_OFFSET))(this, a1);
		}

		::System::Void DKCIKFPJMKG(::RPG::GameCore::TrainPartyAreaConfigRow* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TrainPartyAreaConfigRow*))((::PBYTE)hIl2Cpp + APCCFELCPKH_DKCIKFPJMKG_OFFSET))(this, a1);
		}

		::System::Void JOOFBIJAKJC(::System::UInt32 a1, ::APCCFELCPKH_PBNOOPCGMKN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::APCCFELCPKH_PBNOOPCGMKN*))((::PBYTE)hIl2Cpp + APCCFELCPKH_JOOFBIJAKJC_OFFSET))(this, a1, a2);
		}

		::System::Void FJIBGFOOGOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + APCCFELCPKH_FJIBGFOOGOM_OFFSET))(this);
		}

		::System::Void DOIKDMJPBOA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + APCCFELCPKH_DOIKDMJPBOA_OFFSET))(this, a1);
		}

		::System::Void PJHAKDFFOJH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APCCFELCPKH_PJHAKDFFOJH_OFFSET))(this, a1);
		}

		static ::System::UInt32 CPEDJFMCAFA(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
		{
			return ((::System::UInt32(*)(::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + APCCFELCPKH_CPEDJFMCAFA_OFFSET))(a1);
		}

		::System::String* KGMJNJBLGKB(::RPG::Client::TrainParty::TrainPartyBuildDIYItem* a1)
		{
			return ((::System::String*(*)(::PVOID, ::RPG::Client::TrainParty::TrainPartyBuildDIYItem*))((::PBYTE)hIl2Cpp + APCCFELCPKH_KGMJNJBLGKB_OFFSET))(this, a1);
		}

		::System::Void _EnterBuildCamera_b__4_0(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + APCCFELCPKH__ENTERBUILDCAMERA_B__4_0_OFFSET))(this, a1);
		}

	};
