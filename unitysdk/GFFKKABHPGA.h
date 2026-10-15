#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameCharacterMoveDirection.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloor.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloorPoint.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloorXZ.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelFloorY.h"
#include "unitysdk/RPG/Client/LittleGame/ETimelineControlGameLevelRotation.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
#include "unitysdk/System/ValueTuple_2.h"
class BEMLFGJGOKN;
class CCCBENCKELF;
class FDPALAEIHPB;
class FICDBGIBEOA;
class GCCABICIFBN;
class HIJCLHOPOHK;
class HPCKCJDCNFM;
class ILILKFMOKEB;
class JPMKMMMGNJN;
namespace RPG::Client::LittleGame { class TimelineControlGameCharacterMovementPath; }
namespace RPG::Client::LittleGame { class TimelineControlGameWorld_LevelGroupAction; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }

#define GFFKKABHPGA_AAOAGPNCNKJ_OFFSET UNITYSDK_OFFSET(0x1CA721B0)
#define GFFKKABHPGA_ABNPJMCKNHO_OFFSET UNITYSDK_OFFSET(0x1CA6BE50)
#define GFFKKABHPGA_ADFIDMNJIDM_OFFSET UNITYSDK_OFFSET(0x1CA3F940)
#define GFFKKABHPGA_AGMMDGPNFKN_OFFSET UNITYSDK_OFFSET(0x1CA719A0)
#define GFFKKABHPGA_AJMNOMAEOAA_OFFSET UNITYSDK_OFFSET(0x1CA69310)
#define GFFKKABHPGA_AJOEBEFPNAI_OFFSET UNITYSDK_OFFSET(0x1CA6ADD0)
#define GFFKKABHPGA_AMLDPBEAHIC_OFFSET UNITYSDK_OFFSET(0x1CA3FA80)
#define GFFKKABHPGA_BABDJFHILFI_OFFSET UNITYSDK_OFFSET(0x1CA6A9E0)
#define GFFKKABHPGA_BCGJOABEKKL_OFFSET UNITYSDK_OFFSET(0x1CA6CFB0)
#define GFFKKABHPGA_BDAFLBEAFKK_OFFSET UNITYSDK_OFFSET(0x1CA6C530)
#define GFFKKABHPGA_BEGNJCEPOFE_OFFSET UNITYSDK_OFFSET(0x1CA68130)
#define GFFKKABHPGA_BGCNLNEJPHN_OFFSET UNITYSDK_OFFSET(0x1CA6D8A0)
#define GFFKKABHPGA_BIJMJADGOEJ_OFFSET UNITYSDK_OFFSET(0x1CA6B590)
#define GFFKKABHPGA_CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA72850)
#define GFFKKABHPGA_CDJDCMEDBBB_OFFSET UNITYSDK_OFFSET(0x1CA6DD60)
#define GFFKKABHPGA_CGPBAFBJDHP_OFFSET UNITYSDK_OFFSET(0x1CA697A0)
#define GFFKKABHPGA_CTOR_OFFSET UNITYSDK_OFFSET(0x1CA67B80)
#define GFFKKABHPGA_DEEBIANMMKE_OFFSET UNITYSDK_OFFSET(0x1CA72220)
#define GFFKKABHPGA_DELEAJLNEJP_OFFSET UNITYSDK_OFFSET(0x1CA6F2A0)
#define GFFKKABHPGA_DHNIFHBBOAE_OFFSET UNITYSDK_OFFSET(0x1CA6A120)
#define GFFKKABHPGA_DIHNEILIDFD_OFFSET UNITYSDK_OFFSET(0x1CA6B7B0)
#define GFFKKABHPGA_DLIONMLEIDC_OFFSET UNITYSDK_OFFSET(0x1CA6B1F0)
#define GFFKKABHPGA_DMFAENIOMKA_OFFSET UNITYSDK_OFFSET(0x1CA6A190)
#define GFFKKABHPGA_DMLLEGCINBN_OFFSET UNITYSDK_OFFSET(0x1CA6AE60)
#define GFFKKABHPGA_DNNLGGILIKJ_OFFSET UNITYSDK_OFFSET(0x1CA6D340)
#define GFFKKABHPGA_ENLOMGHMLKH_1_OFFSET UNITYSDK_OFFSET(0x1CA69190)
#define GFFKKABHPGA_ENLOMGHMLKH_OFFSET UNITYSDK_OFFSET(0x1CA71140)
#define GFFKKABHPGA_FEACPDDCHGJ_OFFSET UNITYSDK_OFFSET(0x1CA6CE30)
#define GFFKKABHPGA_FKKMJJHCFPN_OFFSET UNITYSDK_OFFSET(0x1CA3FC50)
#define GFFKKABHPGA_FLDAELLNLLN_OFFSET UNITYSDK_OFFSET(0x1CA69640)
#define GFFKKABHPGA_FLLACMECMAA_OFFSET UNITYSDK_OFFSET(0x1CA6EF40)
#define GFFKKABHPGA_GEFJKFOJIJL_OFFSET UNITYSDK_OFFSET(0x1CA684B0)
#define GFFKKABHPGA_GEJCJLAMEKB_OFFSET UNITYSDK_OFFSET(0x1CA6A360)
#define GFFKKABHPGA_GHHKJIAGLBO_OFFSET UNITYSDK_OFFSET(0x1CA6EE50)
#define GFFKKABHPGA_GHHPIDKIONM_OFFSET UNITYSDK_OFFSET(0x1CA6CCC0)
#define GFFKKABHPGA_HDCLLMMFAFM_OFFSET UNITYSDK_OFFSET(0x1CA727C0)
#define GFFKKABHPGA_HDMNCFILPPC_OFFSET UNITYSDK_OFFSET(0x1CA6C7A0)
#define GFFKKABHPGA_HFAECIBLPLL_OFFSET UNITYSDK_OFFSET(0x1CA68B40)
#define GFFKKABHPGA_HJIPKDAHJGA_OFFSET UNITYSDK_OFFSET(0x1CA72510)
#define GFFKKABHPGA_HNOHAGMFGNN_OFFSET UNITYSDK_OFFSET(0x1CA6BBF0)
#define GFFKKABHPGA_IDGEHDKEOIP_OFFSET UNITYSDK_OFFSET(0x1CA69550)
#define GFFKKABHPGA_IEDMAGNBCOJ_OFFSET UNITYSDK_OFFSET(0x1CA6E610)
#define GFFKKABHPGA_ILOBDOGBGAD_OFFSET UNITYSDK_OFFSET(0x1CA72730)
#define GFFKKABHPGA_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1CA67B90)
#define GFFKKABHPGA_IOFADDAEOPN_OFFSET UNITYSDK_OFFSET(0x1CA3FCF0)
#define GFFKKABHPGA_JIOBCLBDLMA_OFFSET UNITYSDK_OFFSET(0x1CA67DD0)
#define GFFKKABHPGA_JMGKAJMPDKD_OFFSET UNITYSDK_OFFSET(0x1CA6D770)
#define GFFKKABHPGA_JONMKHEICPC_OFFSET UNITYSDK_OFFSET(0x1CA6CDD0)
#define GFFKKABHPGA_KELPOCKABEF_OFFSET UNITYSDK_OFFSET(0x1CA6CAA0)
#define GFFKKABHPGA_KFDFNOCOOJC_OFFSET UNITYSDK_OFFSET(0x1CA6D330)
#define GFFKKABHPGA_KKNAEOHODOH_OFFSET UNITYSDK_OFFSET(0x1CA6D200)
#define GFFKKABHPGA_KPBPEJEJIMD_OFFSET UNITYSDK_OFFSET(0x1CA69040)
#define GFFKKABHPGA_LHFBBCDLMJH_OFFSET UNITYSDK_OFFSET(0x1CA6D510)
#define GFFKKABHPGA_LMGLMOKFFOA_OFFSET UNITYSDK_OFFSET(0x1CA6DDB0)
#define GFFKKABHPGA_LPKJJMABOEF_OFFSET UNITYSDK_OFFSET(0x1CA6CEF0)
#define GFFKKABHPGA_MBMPEGMCOGP_OFFSET UNITYSDK_OFFSET(0x1CA71190)
#define GFFKKABHPGA_NADPOGBAHNM_OFFSET UNITYSDK_OFFSET(0x1CA6D030)
#define GFFKKABHPGA_NDMEFPKLDNJ_OFFSET UNITYSDK_OFFSET(0x1CA68E80)
#define GFFKKABHPGA_NFEOHOAJAMI_OFFSET UNITYSDK_OFFSET(0x1CA72630)
#define GFFKKABHPGA_NJDMKCDIBFD_OFFSET UNITYSDK_OFFSET(0x1CA699C0)
#define GFFKKABHPGA_NLBBCDBKFIF_OFFSET UNITYSDK_OFFSET(0x1CA726A0)
#define GFFKKABHPGA_NLFJMHLLMMP_OFFSET UNITYSDK_OFFSET(0x1CA6C1D0)
#define GFFKKABHPGA_NMLJEOJIHJA_OFFSET UNITYSDK_OFFSET(0x1CA6F380)
#define GFFKKABHPGA_ODBBOOOALAI_OFFSET UNITYSDK_OFFSET(0x1CA6F020)
#define GFFKKABHPGA_OFHEMBKMOOL_OFFSET UNITYSDK_OFFSET(0x1CA721C0)
#define GFFKKABHPGA_PEMJNCFJKNA_OFFSET UNITYSDK_OFFSET(0x1CA6A0D0)
#define GFFKKABHPGA_PFNFNMJBAMK_OFFSET UNITYSDK_OFFSET(0x1CA6F460)
#define GFFKKABHPGA_PHLODKDNONO_OFFSET UNITYSDK_OFFSET(0x1CA3FD70)
#define GFFKKABHPGA_PIBFOCOAJPA_OFFSET UNITYSDK_OFFSET(0x1CA6B970)
#define GFFKKABHPGA_POPMMDAMGGK_OFFSET UNITYSDK_OFFSET(0x1CA6DA60)
#define GFFKKABHPGA_TEARDOWN_OFFSET UNITYSDK_OFFSET(0x1CA688E0)

inline static constexpr unsigned int GFFKKABHPGA_TypeDefinitionIndex = 42528;

	class GFFKKABHPGA : public ::System::Object
	{
	public:
		::HIJCLHOPOHK* IACHHFMCKMC; // 0x10
		::HPCKCJDCNFM* ACJGKBDLCMF; // 0x18
		::FDPALAEIHPB* FKINCGODJEP; // 0x20
		::CCCBENCKELF* JEOADHBDKMO; // 0x28
		::ILILKFMOKEB* PJJIDEMDPAP; // 0x30
		static ::Il2CppArray<::RPG::Client::LittleGame::ETimelineControlGameLevelFloorXZ>** StaticGet_OJMOMPBONDG()
		{
			return (::Il2CppArray<::RPG::Client::LittleGame::ETimelineControlGameLevelFloorXZ>**)UnitySDK::FromName("", "GFFKKABHPGA")->GetStaticField(0x3E350);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_BBMMCIBHELA()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "GFFKKABHPGA")->GetStaticField(0x3E358);
		}

		static ::Il2CppArray<::System::Func_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>*>** StaticGet_NJLGPMHHABK()
		{
			return (::Il2CppArray<::System::Func_2<::UnityEngine::Vector3Int, ::UnityEngine::Vector3Int>*>**)UnitySDK::FromName("", "GFFKKABHPGA")->GetStaticField(0x3E360);
		}

		static ::Il2CppArray<::UnityEngine::Vector3>** StaticGet_CJCFDOFJNOL()
		{
			return (::Il2CppArray<::UnityEngine::Vector3>**)UnitySDK::FromName("", "GFFKKABHPGA")->GetStaticField(0x3E368);
		}

		static ::Il2CppArray<::UnityEngine::Vector3Int>** StaticGet_LAFFCADPCGL()
		{
			return (::Il2CppArray<::UnityEngine::Vector3Int>**)UnitySDK::FromName("", "GFFKKABHPGA")->GetStaticField(0x3E370);
		}

		static ::Il2CppArray<::UnityEngine::Vector3Int>** StaticGet_DBJAIDFOIGF()
		{
			return (::Il2CppArray<::UnityEngine::Vector3Int>**)UnitySDK::FromName("", "GFFKKABHPGA")->GetStaticField(0x3E378);
		}

		// static const ::System::Object COIKKIJBJLP; // 0x0
		::System::Void _ctor(::FDPALAEIHPB* a1, ::JPMKMMMGNJN* a2)
		{
			return ((::System::Void(*)(::PVOID, ::FDPALAEIHPB*, ::JPMKMMMGNJN*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_CTOR_OFFSET))(this, a1, a2);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + GFFKKABHPGA_CCTOR_OFFSET))();
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA_INITIALIZE_OFFSET))(this);
		}

		::System::Void TearDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA_TEARDOWN_OFFSET))(this);
		}

		::System::Void HFAECIBLPLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA_HFAECIBLPLL_OFFSET))(this);
		}

		::System::Single FKKMJJHCFPN()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA_FKKMJJHCFPN_OFFSET))(this);
		}

		::System::Void IOFADDAEOPN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GFFKKABHPGA_IOFADDAEOPN_OFFSET))(this, a1);
		}

		::System::Void PHLODKDNONO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GFFKKABHPGA_PHLODKDNONO_OFFSET))(this, a1);
		}

		::System::Boolean AMLDPBEAHIC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA_AMLDPBEAHIC_OFFSET))(this);
		}

		::System::Boolean ADFIDMNJIDM()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA_ADFIDMNJIDM_OFFSET))(this);
		}

		::System::Void JIOBCLBDLMA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA_JIOBCLBDLMA_OFFSET))(this);
		}

		::System::Void BEGNJCEPOFE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFFKKABHPGA_BEGNJCEPOFE_OFFSET))(this);
		}

		::System::Void GEFJKFOJIJL(::FICDBGIBEOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FICDBGIBEOA*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_GEFJKFOJIJL_OFFSET))(this, a1);
		}

		::System::Void NJDMKCDIBFD(::FICDBGIBEOA* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::FICDBGIBEOA*, ::System::Single))((::PBYTE)hIl2Cpp + GFFKKABHPGA_NJDMKCDIBFD_OFFSET))(this, a1, a2);
		}

		::System::Void CGPBAFBJDHP(::FICDBGIBEOA* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::FICDBGIBEOA*, ::System::Single))((::PBYTE)hIl2Cpp + GFFKKABHPGA_CGPBAFBJDHP_OFFSET))(this, a1, a2);
		}

		::System::Void DMLLEGCINBN(::HPCKCJDCNFM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::HPCKCJDCNFM*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_DMLLEGCINBN_OFFSET))(this, a1);
		}

		::System::Boolean BIJMJADGOEJ(::FICDBGIBEOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FICDBGIBEOA*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_BIJMJADGOEJ_OFFSET))(this, a1);
		}

		::System::Boolean DIHNEILIDFD(::FICDBGIBEOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FICDBGIBEOA*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_DIHNEILIDFD_OFFSET))(this, a1);
		}

		::System::Boolean PIBFOCOAJPA(::FICDBGIBEOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FICDBGIBEOA*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_PIBFOCOAJPA_OFFSET))(this, a1);
		}

		::System::Boolean HNOHAGMFGNN(::FICDBGIBEOA* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::FICDBGIBEOA*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_HNOHAGMFGNN_OFFSET))(this, a1);
		}

		::System::Boolean HDMNCFILPPC(::System::String* a1, ::System::String* a2, ::HPCKCJDCNFM* a3, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction* a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::HPCKCJDCNFM*, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_HDMNCFILPPC_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void KELPOCKABEF(::HPCKCJDCNFM* a1, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction* a2)
		{
			return ((::System::Void(*)(::PVOID, ::HPCKCJDCNFM*, ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_KELPOCKABEF_OFFSET))(this, a1, a2);
		}

		::System::Boolean BABDJFHILFI(::HPCKCJDCNFM* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPCKCJDCNFM*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_BABDJFHILFI_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::HPCKCJDCNFM*>* FEACPDDCHGJ(::HPCKCJDCNFM* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HPCKCJDCNFM*>*(*)(::PVOID, ::HPCKCJDCNFM*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_FEACPDDCHGJ_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IEnumerable_1<::HPCKCJDCNFM*>* LPKJJMABOEF(::HPCKCJDCNFM* a1)
		{
			return ((::System::Collections::Generic::IEnumerable_1<::HPCKCJDCNFM*>*(*)(::PVOID, ::HPCKCJDCNFM*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_LPKJJMABOEF_OFFSET))(this, a1);
		}

		::System::Void DLIONMLEIDC(::FICDBGIBEOA* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::FICDBGIBEOA*, ::System::Single))((::PBYTE)hIl2Cpp + GFFKKABHPGA_DLIONMLEIDC_OFFSET))(this, a1, a2);
		}

		::HPCKCJDCNFM* GEJCJLAMEKB(::HPCKCJDCNFM* a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::UnityEngine::Vector3 a6)
		{
			return ((::HPCKCJDCNFM*(*)(::PVOID, ::HPCKCJDCNFM*, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GFFKKABHPGA_GEJCJLAMEKB_OFFSET))(this, a1, a2, a3, a4, a5, a6);
		}

		::System::Void ABNPJMCKNHO(::FICDBGIBEOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FICDBGIBEOA*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_ABNPJMCKNHO_OFFSET))(this, a1);
		}

		::System::Void NLFJMHLLMMP(::FICDBGIBEOA* a1)
		{
			return ((::System::Void(*)(::PVOID, ::FICDBGIBEOA*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_NLFJMHLLMMP_OFFSET))(this, a1);
		}

		::System::Void BGCNLNEJPHN(::FICDBGIBEOA* a1, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a2, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a3)
		{
			return ((::System::Void(*)(::PVOID, ::FICDBGIBEOA*, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + GFFKKABHPGA_BGCNLNEJPHN_OFFSET))(this, a1, a2, a3);
		}

		::System::Void POPMMDAMGGK(::FICDBGIBEOA* a1, ::HPCKCJDCNFM* a2, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a3, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a4, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a5)
		{
			return ((::System::Void(*)(::PVOID, ::FICDBGIBEOA*, ::HPCKCJDCNFM*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + GFFKKABHPGA_POPMMDAMGGK_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Boolean AJOEBEFPNAI(::HPCKCJDCNFM* a1, ::HPCKCJDCNFM* a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPCKCJDCNFM*, ::HPCKCJDCNFM*, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection))((::PBYTE)hIl2Cpp + GFFKKABHPGA_AJOEBEFPNAI_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean LMGLMOKFFOA(::HPCKCJDCNFM* a1, ::HPCKCJDCNFM* a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPCKCJDCNFM*, ::HPCKCJDCNFM*, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection))((::PBYTE)hIl2Cpp + GFFKKABHPGA_LMGLMOKFFOA_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean IEDMAGNBCOJ(::HPCKCJDCNFM* a1, ::HPCKCJDCNFM* a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPCKCJDCNFM*, ::HPCKCJDCNFM*, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection))((::PBYTE)hIl2Cpp + GFFKKABHPGA_IEDMAGNBCOJ_OFFSET))(this, a1, a2, a3);
		}

		::HPCKCJDCNFM* JMGKAJMPDKD(::HPCKCJDCNFM* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a4)
		{
			return ((::HPCKCJDCNFM*(*)(::PVOID, ::HPCKCJDCNFM*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + GFFKKABHPGA_JMGKAJMPDKD_OFFSET))(this, a1, a2, a3, a4);
		}

		::HPCKCJDCNFM* MBMPEGMCOGP(::HPCKCJDCNFM* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a4)
		{
			return ((::HPCKCJDCNFM*(*)(::PVOID, ::HPCKCJDCNFM*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + GFFKKABHPGA_MBMPEGMCOGP_OFFSET))(this, a1, a2, a3, a4);
		}

		::HPCKCJDCNFM* AGMMDGPNFKN(::HPCKCJDCNFM* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a2, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a4)
		{
			return ((::HPCKCJDCNFM*(*)(::PVOID, ::HPCKCJDCNFM*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + GFFKKABHPGA_AGMMDGPNFKN_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean ODBBOOOALAI(::HPCKCJDCNFM* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a2, ::HPCKCJDCNFM* a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPCKCJDCNFM*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::HPCKCJDCNFM*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + GFFKKABHPGA_ODBBOOOALAI_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean PFNFNMJBAMK(::HPCKCJDCNFM* a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a2, ::HPCKCJDCNFM* a3, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a4)
		{
			return ((::System::Boolean(*)(::PVOID, ::HPCKCJDCNFM*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::HPCKCJDCNFM*, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + GFFKKABHPGA_PFNFNMJBAMK_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single NDMEFPKLDNJ(::FICDBGIBEOA* a1)
		{
			return ((::System::Single(*)(::PVOID, ::FICDBGIBEOA*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_NDMEFPKLDNJ_OFFSET))(this, a1);
		}

		static ::System::Single AAOAGPNCNKJ()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + GFFKKABHPGA_AAOAGPNCNKJ_OFFSET))();
		}

		static ::System::Single KFDFNOCOOJC()
		{
			return ((::System::Single(*)())((::PBYTE)hIl2Cpp + GFFKKABHPGA_KFDFNOCOOJC_OFFSET))();
		}

		static ::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction* GHHPIDKIONM(::BEMLFGJGOKN* a1, ::System::String* a2)
		{
			return ((::RPG::Client::LittleGame::TimelineControlGameWorld_LevelGroupAction*(*)(::BEMLFGJGOKN*, ::System::String*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_GHHPIDKIONM_OFFSET))(a1, a2);
		}

		static ::System::Single FLDAELLNLLN(::FICDBGIBEOA* a1)
		{
			return ((::System::Single(*)(::FICDBGIBEOA*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_FLDAELLNLLN_OFFSET))(a1);
		}

		static ::System::Boolean PEMJNCFJKNA(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* a1)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_PEMJNCFJKNA_OFFSET))(a1);
		}

		static ::System::Single DHNIFHBBOAE(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* a1)
		{
			return ((::System::Single(*)(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_DHNIFHBBOAE_OFFSET))(a1);
		}

		static ::System::Single BCGJOABEKKL(::System::Single a1)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + GFFKKABHPGA_BCGJOABEKKL_OFFSET))(a1);
		}

		static ::System::Single DNNLGGILIKJ(::GCCABICIFBN* a1, ::UnityEngine::Vector3 a2)
		{
			return ((::System::Single(*)(::GCCABICIFBN*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + GFFKKABHPGA_DNNLGGILIKJ_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 BDAFLBEAFKK(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_BDAFLBEAFKK_OFFSET))(a1);
		}

		static ::System::Single KKNAEOHODOH(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* a1, ::System::Single a2)
		{
			return ((::System::Single(*)(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*, ::System::Single))((::PBYTE)hIl2Cpp + GFFKKABHPGA_KKNAEOHODOH_OFFSET))(a1, a2);
		}

		static ::System::Void LHFBBCDLMJH(::HPCKCJDCNFM* a1, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a2, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a3)
		{
			return ((::System::Void(*)(::HPCKCJDCNFM*, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + GFFKKABHPGA_LHFBBCDLMJH_OFFSET))(a1, a2, a3);
		}

		static ::System::Void DEEBIANMMKE(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* a1)
		{
			return ((::System::Void(*)(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_DEEBIANMMKE_OFFSET))(a1);
		}

		static ::System::Boolean DMFAENIOMKA(::UnityEngine::Vector3Int a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3Int, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + GFFKKABHPGA_DMFAENIOMKA_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Boolean FLLACMECMAA(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + GFFKKABHPGA_FLLACMECMAA_OFFSET))(a1, a2);
		}

		static ::System::Boolean DELEAJLNEJP(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + GFFKKABHPGA_DELEAJLNEJP_OFFSET))(a1, a2);
		}

		static ::System::Boolean NMLJEOJIHJA(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + GFFKKABHPGA_NMLJEOJIHJA_OFFSET))(a1, a2);
		}

		static ::System::Boolean CDJDCMEDBBB(::RPG::Client::LittleGame::ETimelineControlGameLevelFloor a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a2)
		{
			return ((::System::Boolean(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloor, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + GFFKKABHPGA_CDJDCMEDBBB_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint ENLOMGHMLKH(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorY a1, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a2)
		{
			return ((::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorY, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection))((::PBYTE)hIl2Cpp + GFFKKABHPGA_ENLOMGHMLKH_OFFSET))(a1, a2);
		}

		static ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint ENLOMGHMLKH_1(::RPG::Client::LittleGame::ETimelineControlGameLevelFloor a1, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a2)
		{
			return ((::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloor, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection))((::PBYTE)hIl2Cpp + GFFKKABHPGA_ENLOMGHMLKH_1_OFFSET))(a1, a2);
		}

		static ::System::ValueTuple_2<::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection> AJMNOMAEOAA(::RPG::Client::LittleGame::ETimelineControlGameLevelFloor a1, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a2, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a3)
		{
			return ((::System::ValueTuple_2<::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection>(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloor, ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + GFFKKABHPGA_AJMNOMAEOAA_OFFSET))(a1, a2, a3);
		}

		static ::UnityEngine::Vector3 KPBPEJEJIMD(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelFloorPoint))((::PBYTE)hIl2Cpp + GFFKKABHPGA_KPBPEJEJIMD_OFFSET))(a1);
		}

		static ::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection OFHEMBKMOOL(::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a1, ::System::Int32 a2)
		{
			return ((::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection(*)(::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection, ::System::Int32))((::PBYTE)hIl2Cpp + GFFKKABHPGA_OFHEMBKMOOL_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3 NADPOGBAHNM(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath* a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::LittleGame::TimelineControlGameCharacterMovementPath*))((::PBYTE)hIl2Cpp + GFFKKABHPGA_NADPOGBAHNM_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3 IDGEHDKEOIP(::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a1)
		{
			return ((::UnityEngine::Vector3(*)(::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection))((::PBYTE)hIl2Cpp + GFFKKABHPGA_IDGEHDKEOIP_OFFSET))(a1);
		}

		static ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation JONMKHEICPC(::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2)
		{
			return ((::RPG::Client::LittleGame::ETimelineControlGameLevelRotation(*)(::RPG::Client::LittleGame::ETimelineControlGameLevelRotation, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation))((::PBYTE)hIl2Cpp + GFFKKABHPGA_JONMKHEICPC_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3Int GHHKJIAGLBO(::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection a1)
		{
			return ((::UnityEngine::Vector3Int(*)(::RPG::Client::LittleGame::ETimelineControlGameCharacterMoveDirection))((::PBYTE)hIl2Cpp + GFFKKABHPGA_GHHKJIAGLBO_OFFSET))(a1);
		}

		static ::System::Void HJIPKDAHJGA(::UnityEngine::Vector3Int a1, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation a2)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3Int, ::RPG::Client::LittleGame::ETimelineControlGameLevelRotation))((::PBYTE)hIl2Cpp + GFFKKABHPGA_HJIPKDAHJGA_OFFSET))(a1, a2);
		}

		static ::UnityEngine::Vector3Int NFEOHOAJAMI(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + GFFKKABHPGA_NFEOHOAJAMI_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3Int NLBBCDBKFIF(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + GFFKKABHPGA_NLBBCDBKFIF_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3Int ILOBDOGBGAD(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + GFFKKABHPGA_ILOBDOGBGAD_OFFSET))(a1);
		}

		static ::UnityEngine::Vector3Int HDCLLMMFAFM(::UnityEngine::Vector3Int a1)
		{
			return ((::UnityEngine::Vector3Int(*)(::UnityEngine::Vector3Int))((::PBYTE)hIl2Cpp + GFFKKABHPGA_HDCLLMMFAFM_OFFSET))(a1);
		}

	};
