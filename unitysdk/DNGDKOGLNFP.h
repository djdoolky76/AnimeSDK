#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DNGDKOGLNFP_LeavePhase.h"
#include "unitysdk/NHKOBIDDGBE.h"
#include "unitysdk/PALBAPMODCK.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
class ABFENGEAJNE;
class OMFLOBEGHNM;
namespace RPG::Client { class FiveDimGameInstance; }
namespace RPG::Client { class FiveDimModule; }
namespace RPG::Client { class FiveDimPlayerEnterLeaveInfo; }
namespace System::Collections { class IEnumerator; }
namespace UnityEngine { class Coroutine; }

#define DNGDKOGLNFP_ACMIHGCANBP_OFFSET UNITYSDK_OFFSET(0x12CC0FF0)
#define DNGDKOGLNFP_AJMBPBIFABI_OFFSET UNITYSDK_OFFSET(0x12CC15A0)
#define DNGDKOGLNFP_BENPNNIGHJL_OFFSET UNITYSDK_OFFSET(0x12CC0F90)
#define DNGDKOGLNFP_BMEOKBOHHLB_OFFSET UNITYSDK_OFFSET(0x12CC0D50)
#define DNGDKOGLNFP_BPJOECLGJGB_OFFSET UNITYSDK_OFFSET(0x12CC2410)
#define DNGDKOGLNFP_CBOFAKICELA_OFFSET UNITYSDK_OFFSET(0x12CC1320)
#define DNGDKOGLNFP_CIBEEAMFHOJ_OFFSET UNITYSDK_OFFSET(0x12CC20C0)
#define DNGDKOGLNFP_CLEAR_OFFSET UNITYSDK_OFFSET(0x12CC0760)
#define DNGDKOGLNFP_CMDGAHGHDLA_OFFSET UNITYSDK_OFFSET(0x12CC2710)
#define DNGDKOGLNFP_CTOR_OFFSET UNITYSDK_OFFSET(0x12CC2AC0)
#define DNGDKOGLNFP_DDFDGLGCBAI_OFFSET UNITYSDK_OFFSET(0x12CC2620)
#define DNGDKOGLNFP_DLHHEKECOHA_OFFSET UNITYSDK_OFFSET(0x12CC0F00)
#define DNGDKOGLNFP_EGPNBMLNPAD_OFFSET UNITYSDK_OFFSET(0x12CC1180)
#define DNGDKOGLNFP_EMIOPNNIBKO_OFFSET UNITYSDK_OFFSET(0x12CC1FE0)
#define DNGDKOGLNFP_FAEGIAPDCPN_OFFSET UNITYSDK_OFFSET(0x12CC16B0)
#define DNGDKOGLNFP_FAFNNABEAPL_OFFSET UNITYSDK_OFFSET(0x12CC06F0)
#define DNGDKOGLNFP_FICPGIFCFBN_OFFSET UNITYSDK_OFFSET(0x12CC1EC0)
#define DNGDKOGLNFP_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x12CC2A70)
#define DNGDKOGLNFP_GEPMJEOJHLF_OFFSET UNITYSDK_OFFSET(0x12CC0BB0)
#define DNGDKOGLNFP_GET_CURRENTLEAVECONTAINERID_OFFSET UNITYSDK_OFFSET(0x12CC2AA0)
#define DNGDKOGLNFP_GET_CURRENTLEAVEGROUPID_OFFSET UNITYSDK_OFFSET(0x12CC2A80)
#define DNGDKOGLNFP_HFMCEBDABHP_OFFSET UNITYSDK_OFFSET(0x12CC0AB0)
#define DNGDKOGLNFP_ILLJKMLBGCK_OFFSET UNITYSDK_OFFSET(0x12CC2910)
#define DNGDKOGLNFP_JIKGHBMBDIH_OFFSET UNITYSDK_OFFSET(0x12CC1920)
#define DNGDKOGLNFP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x12CC0CF0)
#define DNGDKOGLNFP_KEJFKONOMKG_OFFSET UNITYSDK_OFFSET(0x12CC0C70)
#define DNGDKOGLNFP_KGPBKBGOADL_OFFSET UNITYSDK_OFFSET(0x12CC23A0)
#define DNGDKOGLNFP_KIBBOBOBAOM_OFFSET UNITYSDK_OFFSET(0x12CC2670)
#define DNGDKOGLNFP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x12CC0030)
#define DNGDKOGLNFP_LHPCCPKKEBI_OFFSET UNITYSDK_OFFSET(0x12CC1090)
#define DNGDKOGLNFP_MEBCDJEAGJC_OFFSET UNITYSDK_OFFSET(0x12CC21F0)
#define DNGDKOGLNFP_MNHGKPJOHNN_OFFSET UNITYSDK_OFFSET(0x12CC0950)
#define DNGDKOGLNFP_MONMKIPCDCK_OFFSET UNITYSDK_OFFSET(0x12CC0C10)
#define DNGDKOGLNFP_NCNHNECHHAC_OFFSET UNITYSDK_OFFSET(0x12CC1630)
#define DNGDKOGLNFP_NDEANLIGFHC_OFFSET UNITYSDK_OFFSET(0x12CC0580)
#define DNGDKOGLNFP_NEOCFNKAFGN_OFFSET UNITYSDK_OFFSET(0x12CC0620)
#define DNGDKOGLNFP_NFAFBKKGHCD_OFFSET UNITYSDK_OFFSET(0x12CC12D0)
#define DNGDKOGLNFP_NHEHMIMJMHL_OFFSET UNITYSDK_OFFSET(0x12CC24D0)
#define DNGDKOGLNFP_ODMIHHEKJKB_OFFSET UNITYSDK_OFFSET(0x12CC1130)
#define DNGDKOGLNFP_OKGOKLCLIHE_OFFSET UNITYSDK_OFFSET(0x12CC27A0)
#define DNGDKOGLNFP_PEIMEMNHFKM_OFFSET UNITYSDK_OFFSET(0x12CC1970)
#define DNGDKOGLNFP_PHMHKFLJPFA_OFFSET UNITYSDK_OFFSET(0x12CC25B0)
#define DNGDKOGLNFP_PLIADKGLEPA_OFFSET UNITYSDK_OFFSET(0x12CC1C10)
#define DNGDKOGLNFP_SET_CURRENTLEAVECONTAINERID_OFFSET UNITYSDK_OFFSET(0x12CC2AB0)
#define DNGDKOGLNFP_SET_CURRENTLEAVEGROUPID_OFFSET UNITYSDK_OFFSET(0x12CC2A90)

inline static constexpr unsigned int DNGDKOGLNFP_TypeDefinitionIndex = 61823;

	class DNGDKOGLNFP : public ::System::Object
	{
	public:
		::PALBAPMODCK AMDDFDJAHCG; // 0x10
		::UnityEngine::Coroutine* CGFIKBBODAJ; // 0x28
		::ABFENGEAJNE* NFEGAKCJDCE; // 0x30
		::RPG::Client::FiveDimGameInstance* PACHDCGDDLF; // 0x38
		::UnityEngine::Coroutine* LDPCGHNOPDB; // 0x40
		::NHKOBIDDGBE FBHAJDLBCKO; // 0x48
		::DNGDKOGLNFP_LeavePhase NOHNKAIALPJ; // 0xB8
		::System::UInt32 _CurrentLeaveContainerID_k__BackingField; // 0xBC
		::System::Boolean JHPALOHBMNB; // 0xC0
		::System::Boolean OHLGIMEFONK; // 0xC1
		::System::Boolean NFNOPPCDMAL; // 0xC2
		::System::Boolean NPLPFDNELJH; // 0xC3
		::System::UInt32 _CurrentLeaveGroupID_k__BackingField; // 0xC4
		// static const ::System::String* NCOCDJEAHOE; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_CTOR_OFFSET))(this);
		}

		::System::Void KPJGDHLENIP(::NHKOBIDDGBE a1, ::PALBAPMODCK a2)
		{
			return ((::System::Void(*)(::PVOID, ::NHKOBIDDGBE, ::PALBAPMODCK))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_KPJGDHLENIP_OFFSET))(this, a1, a2);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_CLEAR_OFFSET))(this);
		}

		::System::Void JLANKNHFKCN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_JLANKNHFKCN_OFFSET))(this, a1);
		}

		::System::Void DLHHEKECOHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_DLHHEKECOHA_OFFSET))(this);
		}

		::System::Void BMEOKBOHHLB(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_BMEOKBOHHLB_OFFSET))(this, a1);
		}

		::System::Void ACMIHGCANBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_ACMIHGCANBP_OFFSET))(this);
		}

		::System::Void CBOFAKICELA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_CBOFAKICELA_OFFSET))(this);
		}

		::System::Void PLIADKGLEPA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_PLIADKGLEPA_OFFSET))(this);
		}

		::System::Void CIBEEAMFHOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_CIBEEAMFHOJ_OFFSET))(this);
		}

		::System::Void MEBCDJEAGJC(::UnityEngine::Vector3 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_MEBCDJEAGJC_OFFSET))(this, a1);
		}

		::System::Void HFMCEBDABHP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_HFMCEBDABHP_OFFSET))(this);
		}

		::System::Void FICPGIFCFBN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_FICPGIFCFBN_OFFSET))(this);
		}

		::System::Collections::IEnumerator* KGPBKBGOADL()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_KGPBKBGOADL_OFFSET))(this);
		}

		::System::Void GEPMJEOJHLF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_GEPMJEOJHLF_OFFSET))(this);
		}

		::System::Void EMIOPNNIBKO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_EMIOPNNIBKO_OFFSET))(this);
		}

		::System::Void AJMBPBIFABI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_AJMBPBIFABI_OFFSET))(this);
		}

		::System::Void FAEGIAPDCPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_FAEGIAPDCPN_OFFSET))(this);
		}

		::System::Void EGPNBMLNPAD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_EGPNBMLNPAD_OFFSET))(this);
		}

		::System::Boolean NDEANLIGFHC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_NDEANLIGFHC_OFFSET))(this);
		}

		::System::Collections::IEnumerator* PHMHKFLJPFA()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_PHMHKFLJPFA_OFFSET))(this);
		}

		::System::Void MONMKIPCDCK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_MONMKIPCDCK_OFFSET))(this);
		}

		::System::Void NHEHMIMJMHL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_NHEHMIMJMHL_OFFSET))(this);
		}

		::System::Void NFAFBKKGHCD()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_NFAFBKKGHCD_OFFSET))(this);
		}

		::System::Void KEJFKONOMKG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_KEJFKONOMKG_OFFSET))(this);
		}

		::System::Void JIKGHBMBDIH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_JIKGHBMBDIH_OFFSET))(this);
		}

		::System::Void BPJOECLGJGB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_BPJOECLGJGB_OFFSET))(this);
		}

		::System::Boolean DDFDGLGCBAI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_DDFDGLGCBAI_OFFSET))(this);
		}

		::System::Void LHPCCPKKEBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_LHPCCPKKEBI_OFFSET))(this);
		}

		::System::Void NCNHNECHHAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_NCNHNECHHAC_OFFSET))(this);
		}

		::System::Void KIBBOBOBAOM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_KIBBOBOBAOM_OFFSET))(this);
		}

		::RPG::Client::FiveDimPlayerEnterLeaveInfo* BENPNNIGHJL()
		{
			return ((::RPG::Client::FiveDimPlayerEnterLeaveInfo*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_BENPNNIGHJL_OFFSET))(this);
		}

		::System::Boolean FAFNNABEAPL(::PALBAPMODCK a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::PALBAPMODCK))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_FAFNNABEAPL_OFFSET))(this, a1);
		}

		::System::Void ODMIHHEKJKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_ODMIHHEKJKB_OFFSET))(this);
		}

		::System::Void MNHGKPJOHNN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_MNHGKPJOHNN_OFFSET))(this);
		}

		::System::Void PEIMEMNHFKM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_PEIMEMNHFKM_OFFSET))(this);
		}

		::System::Void OKGOKLCLIHE(::OMFLOBEGHNM* a1)
		{
			return ((::System::Void(*)(::PVOID, ::OMFLOBEGHNM*))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_OKGOKLCLIHE_OFFSET))(this, a1);
		}

		::RPG::Client::FiveDimGameInstance* NEOCFNKAFGN()
		{
			return ((::RPG::Client::FiveDimGameInstance*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_NEOCFNKAFGN_OFFSET))(this);
		}

		::RPG::Client::FiveDimModule* CMDGAHGHDLA()
		{
			return ((::RPG::Client::FiveDimModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_CMDGAHGHDLA_OFFSET))(this);
		}

		::System::Void ILLJKMLBGCK(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_ILLJKMLBGCK_OFFSET))(this, a1);
		}

		::System::Boolean GCCAABJLGIG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_GCCAABJLGIG_OFFSET))(this);
		}

		::System::UInt32 get_CurrentLeaveGroupID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_GET_CURRENTLEAVEGROUPID_OFFSET))(this);
		}

		::System::Void set_CurrentLeaveGroupID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_SET_CURRENTLEAVEGROUPID_OFFSET))(this, a1);
		}

		::System::UInt32 get_CurrentLeaveContainerID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_GET_CURRENTLEAVECONTAINERID_OFFSET))(this);
		}

		::System::Void set_CurrentLeaveContainerID(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + DNGDKOGLNFP_SET_CURRENTLEAVECONTAINERID_OFFSET))(this, a1);
		}

	};
