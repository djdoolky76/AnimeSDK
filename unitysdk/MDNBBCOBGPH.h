#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class LLCICCEMLIO;
namespace RPG::Client { class TeamBuildRecipe; }
namespace RPG::Client { class TeamBuildSynopsis; }
namespace RPG::Client { class TeamBuildUnit; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class ICollection_1; }
namespace System::Collections::Generic { template <typename T> class IList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Stack_1; }

#define MDNBBCOBGPH_ABHFOOFPCPE_OFFSET UNITYSDK_OFFSET(0xC162A70)
#define MDNBBCOBGPH_AIPIFEIJJIC_OFFSET UNITYSDK_OFFSET(0xC15F2D0)
#define MDNBBCOBGPH_BPNLPFIAAKC_OFFSET UNITYSDK_OFFSET(0xC1609F0)
#define MDNBBCOBGPH_CECODIDHAOL_OFFSET UNITYSDK_OFFSET(0xC1628F0)
#define MDNBBCOBGPH_CMOMAMJMOFH_OFFSET UNITYSDK_OFFSET(0xC15F690)
#define MDNBBCOBGPH_CTOR_OFFSET UNITYSDK_OFFSET(0xC163020)
#define MDNBBCOBGPH_DFJIEICCCMK_OFFSET UNITYSDK_OFFSET(0xC161310)
#define MDNBBCOBGPH_DNGMOIBHEOA_OFFSET UNITYSDK_OFFSET(0xC15FAC0)
#define MDNBBCOBGPH_EGLHHBPLONJ_OFFSET UNITYSDK_OFFSET(0xC160AD0)
#define MDNBBCOBGPH_EMDMKJFPFMO_OFFSET UNITYSDK_OFFSET(0xC161F80)
#define MDNBBCOBGPH_FAALOEMDJOD_OFFSET UNITYSDK_OFFSET(0xC160C80)
#define MDNBBCOBGPH_GET_ALTERNATIVEINDEX_OFFSET UNITYSDK_OFFSET(0xC15F210)
#define MDNBBCOBGPH_GET_CANDIDATEPOOLONLY_OFFSET UNITYSDK_OFFSET(0xC15F230)
#define MDNBBCOBGPH_GET_CANDIDATEPOOLSBYPOSITION_OFFSET UNITYSDK_OFFSET(0xC15F150)
#define MDNBBCOBGPH_GET_EXCLUDEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC15F190)
#define MDNBBCOBGPH_GET_HASAVATARCHECKER_OFFSET UNITYSDK_OFFSET(0xC15F130)
#define MDNBBCOBGPH_GET_MAXTEAMBUILDSYNOPSISCOUNT_OFFSET UNITYSDK_OFFSET(0xC15F1B0)
#define MDNBBCOBGPH_GET_PARTIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC15F170)
#define MDNBBCOBGPH_GET_PREFERALTERNATIVE_OFFSET UNITYSDK_OFFSET(0xC15F1F0)
#define MDNBBCOBGPH_GET_PREFERMAINONLY_OFFSET UNITYSDK_OFFSET(0xC15F1D0)
#define MDNBBCOBGPH_GET_TEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0xC15F110)
#define MDNBBCOBGPH_GHPEAEGCEHM_OFFSET UNITYSDK_OFFSET(0xC161130)
#define MDNBBCOBGPH_GIIMLONJNPF_OFFSET UNITYSDK_OFFSET(0xC160860)
#define MDNBBCOBGPH_GLBICOLGMEL_OFFSET UNITYSDK_OFFSET(0xC160FF0)
#define MDNBBCOBGPH_GLJBEKIDMHG_OFFSET UNITYSDK_OFFSET(0xC1616B0)
#define MDNBBCOBGPH_GPCPAJPEPAE_OFFSET UNITYSDK_OFFSET(0xC160240)
#define MDNBBCOBGPH_HBFGBNMELCJ_OFFSET UNITYSDK_OFFSET(0xC161F00)
#define MDNBBCOBGPH_HHGCNHAOENF_OFFSET UNITYSDK_OFFSET(0xC162CF0)
#define MDNBBCOBGPH_HPHKOEAPKMK_OFFSET UNITYSDK_OFFSET(0xC161070)
#define MDNBBCOBGPH_IBJFHJDPAAH_OFFSET UNITYSDK_OFFSET(0xC15FFE0)
#define MDNBBCOBGPH_INCDAJJNKJP_OFFSET UNITYSDK_OFFSET(0xC161CE0)
#define MDNBBCOBGPH_IPCFJGNGOCC_OFFSET UNITYSDK_OFFSET(0xC1619C0)
#define MDNBBCOBGPH_JGBBGNLDFFG_OFFSET UNITYSDK_OFFSET(0xC160E60)
#define MDNBBCOBGPH_JHKCAJHFKEF_OFFSET UNITYSDK_OFFSET(0xC161650)
#define MDNBBCOBGPH_KHGIKBFDLFB_OFFSET UNITYSDK_OFFSET(0xC15F250)
#define MDNBBCOBGPH_KJJCIDNMMAJ_OFFSET UNITYSDK_OFFSET(0xC161E40)
#define MDNBBCOBGPH_LAAHNMJAEGF_OFFSET UNITYSDK_OFFSET(0xC161AF0)
#define MDNBBCOBGPH_MJHGGNMBOGN_OFFSET UNITYSDK_OFFSET(0xC15F810)
#define MDNBBCOBGPH_NCBBPHBFOFC_OFFSET UNITYSDK_OFFSET(0xC160190)
#define MDNBBCOBGPH_NNBLLKOOLFG_OFFSET UNITYSDK_OFFSET(0xC1607A0)
#define MDNBBCOBGPH_PCHNPOHMEAP_OFFSET UNITYSDK_OFFSET(0xC1617B0)
#define MDNBBCOBGPH_PHOICEJADNL_OFFSET UNITYSDK_OFFSET(0xC1627A0)
#define MDNBBCOBGPH_SET_ALTERNATIVEINDEX_OFFSET UNITYSDK_OFFSET(0xC15F220)
#define MDNBBCOBGPH_SET_CANDIDATEPOOLONLY_OFFSET UNITYSDK_OFFSET(0xC15F240)
#define MDNBBCOBGPH_SET_CANDIDATEPOOLSBYPOSITION_OFFSET UNITYSDK_OFFSET(0xC15F160)
#define MDNBBCOBGPH_SET_EXCLUDEDAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC15F1A0)
#define MDNBBCOBGPH_SET_HASAVATARCHECKER_OFFSET UNITYSDK_OFFSET(0xC15F140)
#define MDNBBCOBGPH_SET_MAXTEAMBUILDSYNOPSISCOUNT_OFFSET UNITYSDK_OFFSET(0xC15F1C0)
#define MDNBBCOBGPH_SET_PARTIALAVATARIDS_OFFSET UNITYSDK_OFFSET(0xC15F180)
#define MDNBBCOBGPH_SET_PREFERALTERNATIVE_OFFSET UNITYSDK_OFFSET(0xC15F200)
#define MDNBBCOBGPH_SET_PREFERMAINONLY_OFFSET UNITYSDK_OFFSET(0xC15F1E0)
#define MDNBBCOBGPH_SET_TEAMBUILDRECIPE_OFFSET UNITYSDK_OFFSET(0xC15F120)
#define MDNBBCOBGPH___GETSORTEDAVATARIDSBYPARTIALAVATARIDS_B__80_0_OFFSET UNITYSDK_OFFSET(0xC163330)

inline static constexpr unsigned int MDNBBCOBGPH_TypeDefinitionIndex = 70044;

	class MDNBBCOBGPH : public ::System::Object
	{
	public:
		::System::Func_2<::System::UInt32, ::System::Boolean>* _HasAvatarChecker_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::System::Object*>* FGLEEKANOLE; // 0x18
		::RPG::Client::TeamBuildRecipe* _TeamBuildRecipe_k__BackingField; // 0x20
		::System::Collections::Generic::HashSet_1<::System::Int32>* BOEMGIBABDN; // 0x28
		::System::Collections::Generic::List_1<::System::UInt32>* KMMGGGFILKJ; // 0x30
		::System::Collections::Generic::List_1<::System::UInt32>* JOMAMALDFBB; // 0x38
		::System::Collections::Generic::List_1<::System::Int32>* DKIHBOKHJPD; // 0x40
		::System::Collections::Generic::List_1<::System::Object*>* IDHHNELJGIO; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Int32>* LLGFBKBNPJL; // 0x50
		::System::Collections::Generic::Stack_1<::System::Object*>* IAGANMHLKAP; // 0x58
		::System::Collections::Generic::ICollection_1<::RPG::Client::TeamBuildSynopsis*>* EFGLAEHEMFG; // 0x60
		::System::Collections::Generic::IList_1<::System::UInt32>* _PartialAvatarIDs_k__BackingField; // 0x68
		::System::Collections::Generic::IList_1<::System::UInt32>* _ExcludedAvatarIDs_k__BackingField; // 0x70
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LLCICCEMLIO*>*>* _CandidatePoolsByPosition_k__BackingField; // 0x78
		::System::Int32 BEFEEBGCDMH; // 0x80
		::System::Boolean _PreferMainOnly_k__BackingField; // 0x84
		::System::Boolean _PreferAlternative_k__BackingField; // 0x85
		::System::Boolean _CandidatePoolOnly_k__BackingField; // 0x86
		::System::Byte _padding0[0x1];
		::System::Int32 _MaxTeamBuildSynopsisCount_k__BackingField; // 0x88
		::System::Int32 _AlternativeIndex_k__BackingField; // 0x8C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_CTOR_OFFSET))(this);
		}

		::RPG::Client::TeamBuildRecipe* get_TeamBuildRecipe()
		{
			return ((::RPG::Client::TeamBuildRecipe*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_GET_TEAMBUILDRECIPE_OFFSET))(this);
		}

		::System::Void set_TeamBuildRecipe(::RPG::Client::TeamBuildRecipe* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::TeamBuildRecipe*))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_SET_TEAMBUILDRECIPE_OFFSET))(this, a1);
		}

		::System::Func_2<::System::UInt32, ::System::Boolean>* get_HasAvatarChecker()
		{
			return ((::System::Func_2<::System::UInt32, ::System::Boolean>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_GET_HASAVATARCHECKER_OFFSET))(this);
		}

		::System::Void set_HasAvatarChecker(::System::Func_2<::System::UInt32, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Func_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_SET_HASAVATARCHECKER_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LLCICCEMLIO*>*>* get_CandidatePoolsByPosition()
		{
			return ((::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LLCICCEMLIO*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_GET_CANDIDATEPOOLSBYPOSITION_OFFSET))(this);
		}

		::System::Void set_CandidatePoolsByPosition(::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LLCICCEMLIO*>*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::LLCICCEMLIO*>*>*))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_SET_CANDIDATEPOOLSBYPOSITION_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* get_PartialAvatarIDs()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_GET_PARTIALAVATARIDS_OFFSET))(this);
		}

		::System::Void set_PartialAvatarIDs(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_SET_PARTIALAVATARIDS_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IList_1<::System::UInt32>* get_ExcludedAvatarIDs()
		{
			return ((::System::Collections::Generic::IList_1<::System::UInt32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_GET_EXCLUDEDAVATARIDS_OFFSET))(this);
		}

		::System::Void set_ExcludedAvatarIDs(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_SET_EXCLUDEDAVATARIDS_OFFSET))(this, a1);
		}

		::System::Int32 get_MaxTeamBuildSynopsisCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_GET_MAXTEAMBUILDSYNOPSISCOUNT_OFFSET))(this);
		}

		::System::Void set_MaxTeamBuildSynopsisCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_SET_MAXTEAMBUILDSYNOPSISCOUNT_OFFSET))(this, a1);
		}

		::System::Boolean get_PreferMainOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_GET_PREFERMAINONLY_OFFSET))(this);
		}

		::System::Void set_PreferMainOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_SET_PREFERMAINONLY_OFFSET))(this, a1);
		}

		::System::Boolean get_PreferAlternative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_GET_PREFERALTERNATIVE_OFFSET))(this);
		}

		::System::Void set_PreferAlternative(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_SET_PREFERALTERNATIVE_OFFSET))(this, a1);
		}

		::System::Int32 get_AlternativeIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_GET_ALTERNATIVEINDEX_OFFSET))(this);
		}

		::System::Void set_AlternativeIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_SET_ALTERNATIVEINDEX_OFFSET))(this, a1);
		}

		::System::Boolean get_CandidatePoolOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_GET_CANDIDATEPOOLONLY_OFFSET))(this);
		}

		::System::Void set_CandidatePoolOnly(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_SET_CANDIDATEPOOLONLY_OFFSET))(this, a1);
		}

		::System::Void KHGIKBFDLFB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_KHGIKBFDLFB_OFFSET))(this);
		}

		::System::Void AIPIFEIJJIC(::System::Collections::Generic::ICollection_1<::RPG::Client::TeamBuildSynopsis*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::ICollection_1<::RPG::Client::TeamBuildSynopsis*>*))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_AIPIFEIJJIC_OFFSET))(this, a1);
		}

		::System::Void MJHGGNMBOGN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_MJHGGNMBOGN_OFFSET))(this);
		}

		::System::Void CMOMAMJMOFH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_CMOMAMJMOFH_OFFSET))(this);
		}

		::System::Void DNGMOIBHEOA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_DNGMOIBHEOA_OFFSET))(this);
		}

		::System::Void IBJFHJDPAAH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_IBJFHJDPAAH_OFFSET))(this);
		}

		::System::Void NCBBPHBFOFC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_NCBBPHBFOFC_OFFSET))(this);
		}

		::System::Void NNBLLKOOLFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_NNBLLKOOLFG_OFFSET))(this);
		}

		::System::Boolean EGLHHBPLONJ(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_EGLHHBPLONJ_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean JGBBGNLDFFG(::System::UInt32 a1, ::RPG::Client::TeamBuildUnit* a2, ::System::Collections::Generic::List_1<::LLCICCEMLIO*>* a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::RPG::Client::TeamBuildUnit*, ::System::Collections::Generic::List_1<::LLCICCEMLIO*>*))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_JGBBGNLDFFG_OFFSET))(this, a1, a2, a3);
		}

		::System::Void FAALOEMDJOD(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_FAALOEMDJOD_OFFSET))(this, a1, a2);
		}

		::System::Void BPNLPFIAAKC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_BPNLPFIAAKC_OFFSET))(this);
		}

		::System::Void GIIMLONJNPF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_GIIMLONJNPF_OFFSET))(this);
		}

		::System::Void GLBICOLGMEL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_GLBICOLGMEL_OFFSET))(this);
		}

		::System::Void HPHKOEAPKMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_HPHKOEAPKMK_OFFSET))(this);
		}

		::System::Void GHPEAEGCEHM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_GHPEAEGCEHM_OFFSET))(this);
		}

		::System::Boolean JHKCAJHFKEF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_JHKCAJHFKEF_OFFSET))(this);
		}

		::System::Boolean PCHNPOHMEAP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_PCHNPOHMEAP_OFFSET))(this);
		}

		::System::Void GLJBEKIDMHG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_GLJBEKIDMHG_OFFSET))(this);
		}

		::System::Void DFJIEICCCMK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_DFJIEICCCMK_OFFSET))(this);
		}

		::System::Boolean LAAHNMJAEGF(::RPG::Client::TeamBuildUnit* a1, ::System::Int32 a2, ::System::UInt32 a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuildUnit*, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_LAAHNMJAEGF_OFFSET))(this, a1, a2, a3);
		}

		::System::Boolean KJJCIDNMMAJ(::RPG::Client::TeamBuildUnit* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuildUnit*, ::System::UInt32))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_KJJCIDNMMAJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean HBFGBNMELCJ(::RPG::Client::TeamBuildUnit* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuildUnit*, ::System::UInt32))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_HBFGBNMELCJ_OFFSET))(this, a1, a2);
		}

		::System::Boolean PHOICEJADNL(::RPG::Client::TeamBuildUnit* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::TeamBuildUnit*, ::System::UInt32))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_PHOICEJADNL_OFFSET))(this, a1, a2);
		}

		::System::Boolean EMDMKJFPFMO(::System::Int32 a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::UInt32))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_EMDMKJFPFMO_OFFSET))(this, a1, a2);
		}

		::System::Boolean CECODIDHAOL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_CECODIDHAOL_OFFSET))(this, a1);
		}

		::System::Boolean ABHFOOFPCPE(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_ABHFOOFPCPE_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::UInt32>* INCDAJJNKJP(::System::Collections::Generic::List_1<::System::UInt32>* a1)
		{
			return ((::System::Collections::Generic::List_1<::System::UInt32>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_INCDAJJNKJP_OFFSET))(this, a1);
		}

		::System::Boolean GPCPAJPEPAE(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_GPCPAJPEPAE_OFFSET))(this, a1);
		}

		::System::Boolean IPCFJGNGOCC(::System::Collections::Generic::IList_1<::System::UInt32>* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_IPCFJGNGOCC_OFFSET))(this, a1);
		}

		static ::System::Boolean HHGCNHAOENF(::System::Collections::Generic::IList_1<::System::UInt32>* a1, ::System::Collections::Generic::IList_1<::System::UInt32>* a2)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::IList_1<::System::UInt32>*, ::System::Collections::Generic::IList_1<::System::UInt32>*))((::PBYTE)hIl2Cpp + MDNBBCOBGPH_HHGCNHAOENF_OFFSET))(a1, a2);
		}

		::System::Int32 __GetSortedAvatarIDsByPartialAvatarIDs_b__80_0(::System::UInt32 a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MDNBBCOBGPH___GETSORTEDAVATARIDSBYPARTIALAVATARIDS_B__80_0_OFFSET))(this, a1);
		}

	};
