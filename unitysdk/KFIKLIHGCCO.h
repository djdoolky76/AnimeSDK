#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/KFIKLIHGCCO_AxisAlignedDirection.h"
#include "unitysdk/KFIKLIHGCCO_DebugStage.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
#include "unitysdk/KFIKLIHGCCO_DKKAJLLOPJE.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector3Int.h"
class KFIKLIHGCCO_CIBLKPAIHOP;
class KFIKLIHGCCO_FOLJPLIKKEN;
class KFIKLIHGCCO_GOOMAMBICNK;
namespace RPG::Embree { class EmbreeRaycastAPI; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define KFIKLIHGCCO_AKINGEAIMFH_OFFSET UNITYSDK_OFFSET(0x176EFD60)
#define KFIKLIHGCCO_BKLNBHLOKMK_OFFSET UNITYSDK_OFFSET(0x176F2B90)
#define KFIKLIHGCCO_BPDEMCEDECB_OFFSET UNITYSDK_OFFSET(0x176E49C0)
#define KFIKLIHGCCO_CAFAPMCOEFH_OFFSET UNITYSDK_OFFSET(0x176E3F10)
#define KFIKLIHGCCO_CEDMBKEFKIJ_OFFSET UNITYSDK_OFFSET(0x176E9200)
#define KFIKLIHGCCO_CFCBKAPDAAG_OFFSET UNITYSDK_OFFSET(0x176E2FD0)
#define KFIKLIHGCCO_CFLLODJLOOD_OFFSET UNITYSDK_OFFSET(0x176EDE50)
#define KFIKLIHGCCO_CTOR_OFFSET UNITYSDK_OFFSET(0x176F64B0)
#define KFIKLIHGCCO_DDLFIBAFJMI_OFFSET UNITYSDK_OFFSET(0x176EC2A0)
#define KFIKLIHGCCO_DIFBJPCDPII_OFFSET UNITYSDK_OFFSET(0x176E3090)
#define KFIKLIHGCCO_DIOGMGIHDII_OFFSET UNITYSDK_OFFSET(0x176F3580)
#define KFIKLIHGCCO_DMAHJPOAJOL_OFFSET UNITYSDK_OFFSET(0x176F2EC0)
#define KFIKLIHGCCO_EEIKJMLCMMC_OFFSET UNITYSDK_OFFSET(0x176F02C0)
#define KFIKLIHGCCO_ELBHDMAOPAO_OFFSET UNITYSDK_OFFSET(0x176E2F60)
#define KFIKLIHGCCO_FHPAOJGFHHE_OFFSET UNITYSDK_OFFSET(0x176F0D70)
#define KFIKLIHGCCO_FNACALDOOIF_OFFSET UNITYSDK_OFFSET(0x176F6460)
#define KFIKLIHGCCO_FODEHNPOAMK_OFFSET UNITYSDK_OFFSET(0x176EE3D0)
#define KFIKLIHGCCO_GDFFKHPCFBJ_OFFSET UNITYSDK_OFFSET(0x176ECE40)
#define KFIKLIHGCCO_GKIDCHOKNAA_OFFSET UNITYSDK_OFFSET(0x176E9980)
#define KFIKLIHGCCO_HAMNKEFFDAI_OFFSET UNITYSDK_OFFSET(0x176F2000)
#define KFIKLIHGCCO_HEKKBGIIOHF_OFFSET UNITYSDK_OFFSET(0x176F0E90)
#define KFIKLIHGCCO_HEMHBCODCOG_OFFSET UNITYSDK_OFFSET(0x176F0380)
#define KFIKLIHGCCO_HHFBKKJICGB_OFFSET UNITYSDK_OFFSET(0x176E6E70)
#define KFIKLIHGCCO_HMGCCJGBMMC_OFFSET UNITYSDK_OFFSET(0x176E4630)
#define KFIKLIHGCCO_HNFBCIICMAG_OFFSET UNITYSDK_OFFSET(0x176EE8B0)
#define KFIKLIHGCCO_HOOBGMIHECJ_OFFSET UNITYSDK_OFFSET(0x176E9B00)
#define KFIKLIHGCCO_IKGPDEFLNNO_OFFSET UNITYSDK_OFFSET(0x176E8AE0)
#define KFIKLIHGCCO_IOFEOAKEHNC_OFFSET UNITYSDK_OFFSET(0x176E3080)
#define KFIKLIHGCCO_JHJPANJDBEH_OFFSET UNITYSDK_OFFSET(0x176F3E20)
#define KFIKLIHGCCO_JLDCAHBINPD_OFFSET UNITYSDK_OFFSET(0x176F3A30)
#define KFIKLIHGCCO_KCOEHIBKAOA_OFFSET UNITYSDK_OFFSET(0x176E7F50)
#define KFIKLIHGCCO_KGJLCKGHEHF_OFFSET UNITYSDK_OFFSET(0x176E8080)
#define KFIKLIHGCCO_KHGAOGLKBLO_OFFSET UNITYSDK_OFFSET(0x176F5690)
#define KFIKLIHGCCO_KJHFPBIJLML_OFFSET UNITYSDK_OFFSET(0x176EAB10)
#define KFIKLIHGCCO_KNJHEAJFJEK_OFFSET UNITYSDK_OFFSET(0x176ED360)
#define KFIKLIHGCCO_LLHCANGKPFA_OFFSET UNITYSDK_OFFSET(0x176E3040)
#define KFIKLIHGCCO_MGEFHBLJNOF_OFFSET UNITYSDK_OFFSET(0x176F2900)
#define KFIKLIHGCCO_MJHIFABJDHJ_OFFSET UNITYSDK_OFFSET(0x176E2F50)
#define KFIKLIHGCCO_MMBEDBDFIIH_OFFSET UNITYSDK_OFFSET(0x176EF420)
#define KFIKLIHGCCO_MMBHHGKAAPN_OFFSET UNITYSDK_OFFSET(0x176F1150)
#define KFIKLIHGCCO_MONKEIJOHKJ_OFFSET UNITYSDK_OFFSET(0x176E3B70)
#define KFIKLIHGCCO_NDIGJICMPLA_OFFSET UNITYSDK_OFFSET(0x176ECA40)
#define KFIKLIHGCCO_OBILKONBGCJ_OFFSET UNITYSDK_OFFSET(0x176F01D0)
#define KFIKLIHGCCO_OEICCMADEIK_OFFSET UNITYSDK_OFFSET(0x176E83A0)
#define KFIKLIHGCCO_OFBNHJODDCH_OFFSET UNITYSDK_OFFSET(0x176EF540)
#define KFIKLIHGCCO_OINBDMGFFJL_OFFSET UNITYSDK_OFFSET(0x176E2F70)
#define KFIKLIHGCCO_OJLIHCNBDLG_OFFSET UNITYSDK_OFFSET(0x176EEF20)
#define KFIKLIHGCCO_OMOHLDCEPBC_OFFSET UNITYSDK_OFFSET(0x176F4D00)
#define KFIKLIHGCCO_PCLNFODDBLL_OFFSET UNITYSDK_OFFSET(0x176F4220)

inline static constexpr unsigned int KFIKLIHGCCO_TypeDefinitionIndex = 52849;

	class KFIKLIHGCCO : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* IHIAGEAKOEN; // 0x10
		::RPG::Embree::EmbreeRaycastAPI* GOBDEJDLLKH; // 0x18
		::KFIKLIHGCCO_FOLJPLIKKEN* KEDGLIBHINE; // 0x20
		::UnityEngine::GameObject* NGOPGBACPFM; // 0x28
		::UnityEngine::Transform* DLFBEADOODM; // 0x30
		::UnityEngine::Vector2Int HMACINNNILB; // 0x38
		::KFIKLIHGCCO_DebugStage EHMLJJGDBAD; // 0x40
		::KFIKLIHGCCO_AxisAlignedDirection OBCGPMFBBBH; // 0x44
		::System::Int32 INJANEBHMHB; // 0x48
		::System::Int32 AKNHBFMHMEH; // 0x4C
		::System::Boolean JHLELLGCFMG; // 0x50
		::System::Boolean JBFGPIOFNJA; // 0x51
		::System::Boolean CIKGEFFOFGD; // 0x52
		::System::Boolean BOAPCHKENBO; // 0x53
		::System::Boolean OFHCHILHJOP; // 0x54
		::System::Boolean NLPEAOGIPBH; // 0x55
		::System::Boolean HGFEKPIAKMN; // 0x56
		::System::Boolean IOKEODAIMFA; // 0x57
		::System::Single PEFKPMDAMGM; // 0x58
		::System::Single EOCAIMKBCBN; // 0x5C
		::System::Single JOIKCKKMECC; // 0x60
		::System::Int32 OBIIGCEBNAL; // 0x64
		::System::Single LBJMJJFLKKM; // 0x68
		::System::Int32 MANOAEJOALP; // 0x6C
		::System::Boolean NGJCGFHGBMF; // 0x70
		::System::Boolean LFFDLDPOOHK; // 0x71
		::System::Boolean BCLHNLJPCCM; // 0x72
		::System::Boolean IJLDJJFDGLD; // 0x73
		::System::Single JOJAHEFGGID; // 0x74
		::System::Single PLBMCGHJKKA; // 0x78
		::System::Int32 JOJNGBIDFBK; // 0x7C
		::UnityEngine::Bounds KNGDKBBFGEF; // 0x80
		::KFIKLIHGCCO_AxisAlignedDirection FKFPBCKIJAA; // 0x98
		// static const ::System::Object IELINPCOOIN; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* MJHIFABJDHJ()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_MJHIFABJDHJ_OFFSET))(this);
		}

		::UnityEngine::GameObject* ELBHDMAOPAO()
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_ELBHDMAOPAO_OFFSET))(this);
		}

		::System::Void OINBDMGFFJL(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_OINBDMGFFJL_OFFSET))(this, a1);
		}

		::KFIKLIHGCCO_CIBLKPAIHOP* CFCBKAPDAAG(::System::Int32 a1)
		{
			return ((::KFIKLIHGCCO_CIBLKPAIHOP*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_CFCBKAPDAAG_OFFSET))(this, a1);
		}

		::Il2CppArray<::System::Object*>* LLHCANGKPFA()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_LLHCANGKPFA_OFFSET))(this);
		}

		::System::Boolean IOFEOAKEHNC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_IOFEOAKEHNC_OFFSET))(this);
		}

		::System::Void DIFBJPCDPII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_DIFBJPCDPII_OFFSET))(this);
		}

		::System::Void KGJLCKGHEHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_KGJLCKGHEHF_OFFSET))(this);
		}

		::System::Void OEICCMADEIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_OEICCMADEIK_OFFSET))(this);
		}

		::System::Void CEDMBKEFKIJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_CEDMBKEFKIJ_OFFSET))(this);
		}

		::System::Void HOOBGMIHECJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_HOOBGMIHECJ_OFFSET))(this);
		}

		::System::Void KJHFPBIJLML()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_KJHFPBIJLML_OFFSET))(this);
		}

		::System::Void NDIGJICMPLA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_NDIGJICMPLA_OFFSET))(this);
		}

		::System::Void KNJHEAJFJEK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_KNJHEAJFJEK_OFFSET))(this);
		}

		::System::Void CAFAPMCOEFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_CAFAPMCOEFH_OFFSET))(this);
		}

		::System::Void BPDEMCEDECB(::System::Int32 a1, ::Il2CppArray<::UnityEngine::Vector3>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_BPDEMCEDECB_OFFSET))(this, a1, a2);
		}

		::System::Void HNFBCIICMAG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::KFIKLIHGCCO_DKKAJLLOPJE a4, ::System::Collections::Generic::List_1<::System::Object*>* a5, ::Il2CppArray<::System::Int32>* a6, ::System::Boolean a7, ::System::Int32 a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::KFIKLIHGCCO_DKKAJLLOPJE, ::System::Collections::Generic::List_1<::System::Object*>*, ::Il2CppArray<::System::Int32>*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_HNFBCIICMAG_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Single OJLIHCNBDLG(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::Vector3>* a3, ::System::Boolean a4, ::System::Int32 a5)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_OJLIHCNBDLG_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::Void OFBNHJODDCH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::KFIKLIHGCCO_DKKAJLLOPJE a4, ::System::Collections::Generic::List_1<::System::Object*>* a5, ::UnityEngine::Vector3Int a6, ::System::Single a7)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::KFIKLIHGCCO_DKKAJLLOPJE, ::System::Collections::Generic::List_1<::System::Object*>*, ::UnityEngine::Vector3Int, ::System::Single))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_OFBNHJODDCH_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7);
		}

		::System::Void CFLLODJLOOD(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::KFIKLIHGCCO_DKKAJLLOPJE a4, ::System::Collections::Generic::List_1<::System::Object*>* a5, ::System::Int32 a6, ::System::Int32 a7, ::System::Single a8)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::KFIKLIHGCCO_DKKAJLLOPJE, ::System::Collections::Generic::List_1<::System::Object*>*, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_CFLLODJLOOD_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Single FODEHNPOAMK(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::Vector3>* a3)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_FODEHNPOAMK_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Bounds AKINGEAIMFH(::KFIKLIHGCCO_GOOMAMBICNK* a1, ::KFIKLIHGCCO_DKKAJLLOPJE a2)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::KFIKLIHGCCO_GOOMAMBICNK*, ::KFIKLIHGCCO_DKKAJLLOPJE))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_AKINGEAIMFH_OFFSET))(this, a1, a2);
		}

		::System::Void HHFBKKJICGB(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_HHFBKKJICGB_OFFSET))(this, a1);
		}

		::System::Boolean IKGPDEFLNNO()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_IKGPDEFLNNO_OFFSET))(this);
		}

		::UnityEngine::Vector3 OBILKONBGCJ(::System::Int32 a1)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_OBILKONBGCJ_OFFSET))(this, a1);
		}

		::Il2CppArray<::UnityEngine::Vector3>* HMGCCJGBMMC(::System::Int32 a1)
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_HMGCCJGBMMC_OFFSET))(this, a1);
		}

		::System::Single GDFFKHPCFBJ(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::Vector3>* a3, ::System::Boolean a4)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_GDFFKHPCFBJ_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Single DDLFIBAFJMI(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::Il2CppArray<::UnityEngine::Vector3>* a3, ::System::Boolean a4, ::System::Collections::Generic::List_1<::System::Object*>* a5)
		{
			return ((::System::Single(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Boolean, ::System::Collections::Generic::List_1<::System::Object*>*))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_DDLFIBAFJMI_OFFSET))(this, a1, a2, a3, a4, a5);
		}

		::System::UInt32 GKIDCHOKNAA(::System::UInt32 a1)
		{
			return ((::System::UInt32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_GKIDCHOKNAA_OFFSET))(this, a1);
		}

		::System::Void MMBEDBDFIIH(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_MMBEDBDFIIH_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Bounds MONKEIJOHKJ(::UnityEngine::Bounds a1, ::UnityEngine::Matrix4x4 a2)
		{
			return ((::UnityEngine::Bounds(*)(::PVOID, ::UnityEngine::Bounds, ::UnityEngine::Matrix4x4))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_MONKEIJOHKJ_OFFSET))(this, a1, a2);
		}

		::System::Void EEIKJMLCMMC(::KFIKLIHGCCO_DKKAJLLOPJE a1)
		{
			return ((::System::Void(*)(::PVOID, ::KFIKLIHGCCO_DKKAJLLOPJE))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_EEIKJMLCMMC_OFFSET))(this, a1);
		}

		::System::Void HEMHBCODCOG(::UnityEngine::Vector3Int a1, ::KFIKLIHGCCO_DKKAJLLOPJE a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3Int, ::KFIKLIHGCCO_DKKAJLLOPJE))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_HEMHBCODCOG_OFFSET))(this, a1, a2);
		}

		::System::Void KCOEHIBKAOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_KCOEHIBKAOA_OFFSET))(this);
		}

		::System::Void FHPAOJGFHHE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_FHPAOJGFHHE_OFFSET))(this);
		}

		::System::Void HEKKBGIIOHF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_HEKKBGIIOHF_OFFSET))(this);
		}

		::System::Void DIOGMGIHDII()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_DIOGMGIHDII_OFFSET))(this);
		}

		::System::Void JLDCAHBINPD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_JLDCAHBINPD_OFFSET))(this);
		}

		::System::Void JHJPANJDBEH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_JHJPANJDBEH_OFFSET))(this);
		}

		::System::Void PCLNFODDBLL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_PCLNFODDBLL_OFFSET))(this);
		}

		::System::Void OMOHLDCEPBC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_OMOHLDCEPBC_OFFSET))(this);
		}

		::System::Void KHGAOGLKBLO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_KHGAOGLKBLO_OFFSET))(this);
		}

		::System::Void HAMNKEFFDAI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_HAMNKEFFDAI_OFFSET))(this);
		}

		::System::Void MGEFHBLJNOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_MGEFHBLJNOF_OFFSET))(this);
		}

		::System::Void BKLNBHLOKMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_BKLNBHLOKMK_OFFSET))(this);
		}

		::System::Void DMAHJPOAJOL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_DMAHJPOAJOL_OFFSET))(this);
		}

		::System::Void FNACALDOOIF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_FNACALDOOIF_OFFSET))(this);
		}

		::System::Void MMBHHGKAAPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFIKLIHGCCO_MMBHHGKAAPN_OFFSET))(this);
		}

	};
