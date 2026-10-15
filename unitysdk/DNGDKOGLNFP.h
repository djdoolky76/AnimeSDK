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

#define DNGDKOGLNFP_ACMIHGCANBP_OFFSET UNITYSDK_OFFSET(0x11950850)
#define DNGDKOGLNFP_AJMBPBIFABI_OFFSET UNITYSDK_OFFSET(0x11950DE0)
#define DNGDKOGLNFP_BENPNNIGHJL_OFFSET UNITYSDK_OFFSET(0x119507F0)
#define DNGDKOGLNFP_BMEOKBOHHLB_OFFSET UNITYSDK_OFFSET(0x119505C0)
#define DNGDKOGLNFP_BPJOECLGJGB_OFFSET UNITYSDK_OFFSET(0x11951C90)
#define DNGDKOGLNFP_CBOFAKICELA_OFFSET UNITYSDK_OFFSET(0x11950B70)
#define DNGDKOGLNFP_CIBEEAMFHOJ_OFFSET UNITYSDK_OFFSET(0x11951920)
#define DNGDKOGLNFP_CLEAR_OFFSET UNITYSDK_OFFSET(0x1194FFD0)
#define DNGDKOGLNFP_CMDGAHGHDLA_OFFSET UNITYSDK_OFFSET(0x11951F90)
#define DNGDKOGLNFP_CTOR_OFFSET UNITYSDK_OFFSET(0x11952310)
#define DNGDKOGLNFP_DDFDGLGCBAI_OFFSET UNITYSDK_OFFSET(0x11951EA0)
#define DNGDKOGLNFP_DLHHEKECOHA_OFFSET UNITYSDK_OFFSET(0x11950760)
#define DNGDKOGLNFP_EGPNBMLNPAD_OFFSET UNITYSDK_OFFSET(0x119509D0)
#define DNGDKOGLNFP_EMIOPNNIBKO_OFFSET UNITYSDK_OFFSET(0x11951820)
#define DNGDKOGLNFP_FAEGIAPDCPN_OFFSET UNITYSDK_OFFSET(0x11950EF0)
#define DNGDKOGLNFP_FAFNNABEAPL_OFFSET UNITYSDK_OFFSET(0x1194FF60)
#define DNGDKOGLNFP_FICPGIFCFBN_OFFSET UNITYSDK_OFFSET(0x11951700)
#define DNGDKOGLNFP_GCCAABJLGIG_OFFSET UNITYSDK_OFFSET(0x119522C0)
#define DNGDKOGLNFP_GEPMJEOJHLF_OFFSET UNITYSDK_OFFSET(0x11950420)
#define DNGDKOGLNFP_GET_CURRENTLEAVECONTAINERID_OFFSET UNITYSDK_OFFSET(0x119522F0)
#define DNGDKOGLNFP_GET_CURRENTLEAVEGROUPID_OFFSET UNITYSDK_OFFSET(0x119522D0)
#define DNGDKOGLNFP_HFMCEBDABHP_OFFSET UNITYSDK_OFFSET(0x11950320)
#define DNGDKOGLNFP_ILLJKMLBGCK_OFFSET UNITYSDK_OFFSET(0x11952190)
#define DNGDKOGLNFP_JIKGHBMBDIH_OFFSET UNITYSDK_OFFSET(0x11951160)
#define DNGDKOGLNFP_JLANKNHFKCN_OFFSET UNITYSDK_OFFSET(0x11950560)
#define DNGDKOGLNFP_KEJFKONOMKG_OFFSET UNITYSDK_OFFSET(0x119504E0)
#define DNGDKOGLNFP_KGPBKBGOADL_OFFSET UNITYSDK_OFFSET(0x11951C00)
#define DNGDKOGLNFP_KIBBOBOBAOM_OFFSET UNITYSDK_OFFSET(0x11951EF0)
#define DNGDKOGLNFP_KPJGDHLENIP_OFFSET UNITYSDK_OFFSET(0x1194F8B0)
#define DNGDKOGLNFP_LHPCCPKKEBI_OFFSET UNITYSDK_OFFSET(0x119508E0)
#define DNGDKOGLNFP_MEBCDJEAGJC_OFFSET UNITYSDK_OFFSET(0x11951A50)
#define DNGDKOGLNFP_MNHGKPJOHNN_OFFSET UNITYSDK_OFFSET(0x119501C0)
#define DNGDKOGLNFP_MONMKIPCDCK_OFFSET UNITYSDK_OFFSET(0x11950480)
#define DNGDKOGLNFP_NCNHNECHHAC_OFFSET UNITYSDK_OFFSET(0x11950E70)
#define DNGDKOGLNFP_NDEANLIGFHC_OFFSET UNITYSDK_OFFSET(0x1194FDF0)
#define DNGDKOGLNFP_NEOCFNKAFGN_OFFSET UNITYSDK_OFFSET(0x1194FE90)
#define DNGDKOGLNFP_NFAFBKKGHCD_OFFSET UNITYSDK_OFFSET(0x11950B20)
#define DNGDKOGLNFP_NHEHMIMJMHL_OFFSET UNITYSDK_OFFSET(0x11951D50)
#define DNGDKOGLNFP_ODMIHHEKJKB_OFFSET UNITYSDK_OFFSET(0x11950980)
#define DNGDKOGLNFP_OKGOKLCLIHE_OFFSET UNITYSDK_OFFSET(0x11952020)
#define DNGDKOGLNFP_PEIMEMNHFKM_OFFSET UNITYSDK_OFFSET(0x119511B0)
#define DNGDKOGLNFP_PHMHKFLJPFA_OFFSET UNITYSDK_OFFSET(0x11951E30)
#define DNGDKOGLNFP_PLIADKGLEPA_OFFSET UNITYSDK_OFFSET(0x11951450)
#define DNGDKOGLNFP_SET_CURRENTLEAVECONTAINERID_OFFSET UNITYSDK_OFFSET(0x11952300)
#define DNGDKOGLNFP_SET_CURRENTLEAVEGROUPID_OFFSET UNITYSDK_OFFSET(0x119522E0)

inline static constexpr unsigned int DNGDKOGLNFP_TypeDefinitionIndex = 60534;

	class DNGDKOGLNFP : public ::System::Object
	{
	public:
		::UnityEngine::Coroutine* LDPCGHNOPDB; // 0x10
		::ABFENGEAJNE* NFEGAKCJDCE; // 0x18
		::RPG::Client::FiveDimGameInstance* PACHDCGDDLF; // 0x20
		::UnityEngine::Coroutine* CGFIKBBODAJ; // 0x28
		::PALBAPMODCK AMDDFDJAHCG; // 0x30
		::DNGDKOGLNFP_LeavePhase NOHNKAIALPJ; // 0x48
		::System::Boolean JHPALOHBMNB; // 0x4C
		::System::Boolean NFNOPPCDMAL; // 0x4D
		::System::Boolean NPLPFDNELJH; // 0x4E
		::System::Boolean OHLGIMEFONK; // 0x4F
		::System::UInt32 _CurrentLeaveContainerID_k__BackingField; // 0x50
		::NHKOBIDDGBE FBHAJDLBCKO; // 0x54
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
