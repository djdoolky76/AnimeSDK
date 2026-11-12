#pragma once
#include "unitysdk/unitysdk.h"
class LELCKJPOPAO;
namespace RPG::GameCore { class DriftComponentData; }

#define IFFDLGLFCOP_BFOKECMNIOG_OFFSET UNITYSDK_OFFSET(0x3E894A0)
#define IFFDLGLFCOP_BGMOBFFBHEJ_OFFSET UNITYSDK_OFFSET(0x3E899A0)
#define IFFDLGLFCOP_BPLDJKDNBEN_OFFSET UNITYSDK_OFFSET(0x3E898D0)
#define IFFDLGLFCOP_CGDGAGOILIF_OFFSET UNITYSDK_OFFSET(0x3E89550)
#define IFFDLGLFCOP_CJDNBDACAGP_OFFSET UNITYSDK_OFFSET(0x3E895D0)
#define IFFDLGLFCOP_CJDOKMNCNDP_OFFSET UNITYSDK_OFFSET(0x3E89420)
#define IFFDLGLFCOP_CNCBAFEGFIJ_OFFSET UNITYSDK_OFFSET(0x3E89950)
#define IFFDLGLFCOP_CNFGFFLDBJP_OFFSET UNITYSDK_OFFSET(0x3E89450)
#define IFFDLGLFCOP_DAPMMGHHNGA_OFFSET UNITYSDK_OFFSET(0x3E897A0)
#define IFFDLGLFCOP_DBFGCGOEBFJ_OFFSET UNITYSDK_OFFSET(0x3E89B20)
#define IFFDLGLFCOP_DBIHAIJNACB_OFFSET UNITYSDK_OFFSET(0x3E89650)
#define IFFDLGLFCOP_DDOBMOFPNGH_OFFSET UNITYSDK_OFFSET(0x3E893A0)
#define IFFDLGLFCOP_DIBJEHBDLIC_OFFSET UNITYSDK_OFFSET(0x3E89AD0)
#define IFFDLGLFCOP_DISPOSE_OFFSET UNITYSDK_OFFSET(0x3E7C580)
#define IFFDLGLFCOP_DMJNODNMOPJ_OFFSET UNITYSDK_OFFSET(0x3E89620)
#define IFFDLGLFCOP_EDMIEINLPBC_OFFSET UNITYSDK_OFFSET(0x3E89520)
#define IFFDLGLFCOP_EMJMJPOGBOG_OFFSET UNITYSDK_OFFSET(0x3E894D0)
#define IFFDLGLFCOP_EPPMNDANOBL_OFFSET UNITYSDK_OFFSET(0x3E89BD0)
#define IFFDLGLFCOP_GCMFMPAGGJG_OFFSET UNITYSDK_OFFSET(0x3E896D0)
#define IFFDLGLFCOP_GDAGNICIJLC_OFFSET UNITYSDK_OFFSET(0x3E89A20)
#define IFFDLGLFCOP_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x318C5A0)
#define IFFDLGLFCOP_GET_OFFSET_OFFSET UNITYSDK_OFFSET(0xACE0)
#define IFFDLGLFCOP_GET_POOL_OFFSET UNITYSDK_OFFSET(0x1D30)
#define IFFDLGLFCOP_GFLKJLOFIPA_OFFSET UNITYSDK_OFFSET(0x3E89C20)
#define IFFDLGLFCOP_GJNPFGIIAAF_OFFSET UNITYSDK_OFFSET(0x3E896A0)
#define IFFDLGLFCOP_GLDCKCEGEGC_OFFSET UNITYSDK_OFFSET(0x3E89A50)
#define IFFDLGLFCOP_GMJJJPDCLPL_OFFSET UNITYSDK_OFFSET(0x3E89AA0)
#define IFFDLGLFCOP_HLKJALCJGED_OFFSET UNITYSDK_OFFSET(0x3E89850)
#define IFFDLGLFCOP_INIT_OFFSET UNITYSDK_OFFSET(0x18D10)
#define IFFDLGLFCOP_JBDILDEJNPB_OFFSET UNITYSDK_OFFSET(0x3E895A0)
#define IFFDLGLFCOP_JCJOOJCOBCL_OFFSET UNITYSDK_OFFSET(0x3E898A0)
#define IFFDLGLFCOP_KCAACIOLLKD_OFFSET UNITYSDK_OFFSET(0x3E89B50)
#define IFFDLGLFCOP_LAKGNCDCHIO_OFFSET UNITYSDK_OFFSET(0x3E89750)
#define IFFDLGLFCOP_MEKHPOODDJN_OFFSET UNITYSDK_OFFSET(0x3E899D0)
#define IFFDLGLFCOP_MFMNAADNGDF_OFFSET UNITYSDK_OFFSET(0x3E897D0)
#define IFFDLGLFCOP_MOKNNGKMBCK_OFFSET UNITYSDK_OFFSET(0x3E89920)
#define IFFDLGLFCOP_NACINGPHNAB_OFFSET UNITYSDK_OFFSET(0x3E893D0)
#define IFFDLGLFCOP_NFHJEHFPPLG_OFFSET UNITYSDK_OFFSET(0x3E89320)
#define IFFDLGLFCOP_NFPPPNFKKFB_OFFSET UNITYSDK_OFFSET(0x3E89350)
#define IFFDLGLFCOP_NJNHLPCNGCI_OFFSET UNITYSDK_OFFSET(0x3E89720)
#define IFFDLGLFCOP_NOJJPKNMICO_OFFSET UNITYSDK_OFFSET(0x3E89BA0)
#define IFFDLGLFCOP_OJJEPHMHLEJ_OFFSET UNITYSDK_OFFSET(0x3E89820)

inline static constexpr unsigned int IFFDLGLFCOP_TypeDefinitionIndex = 10690;

	struct alignas(8) IFFDLGLFCOP
	{
		::LELCKJPOPAO* BEHHICMOFIE; // 0x10
		::System::UInt32 IKKNJMJCDOJ; // 0x18
		::System::Void Init(::LELCKJPOPAO* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::LELCKJPOPAO*, ::System::UInt32))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_INIT_OFFSET))(this, a1, a2);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_GET_ISVALID_OFFSET))(this);
		}

		::System::UInt32 get_Offset()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_GET_OFFSET_OFFSET))(this);
		}

		::LELCKJPOPAO* get_Pool()
		{
			return ((::LELCKJPOPAO*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_GET_POOL_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_DISPOSE_OFFSET))(this);
		}

		::System::SByte NFHJEHFPPLG()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_NFHJEHFPPLG_OFFSET))(this);
		}

		::System::Void NFPPPNFKKFB(::System::SByte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_NFPPPNFKKFB_OFFSET))(this, a1);
		}

		::System::SByte DDOBMOFPNGH()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_DDOBMOFPNGH_OFFSET))(this);
		}

		::System::Void NACINGPHNAB(::System::SByte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_NACINGPHNAB_OFFSET))(this, a1);
		}

		::System::Boolean CJDOKMNCNDP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_CJDOKMNCNDP_OFFSET))(this);
		}

		::System::Void CNFGFFLDBJP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_CNFGFFLDBJP_OFFSET))(this, a1);
		}

		::System::SByte BFOKECMNIOG()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_BFOKECMNIOG_OFFSET))(this);
		}

		::System::Void EMJMJPOGBOG(::System::SByte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_EMJMJPOGBOG_OFFSET))(this, a1);
		}

		::System::SByte EDMIEINLPBC()
		{
			return ((::System::SByte(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_EDMIEINLPBC_OFFSET))(this);
		}

		::System::Void CGDGAGOILIF(::System::SByte a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::SByte))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_CGDGAGOILIF_OFFSET))(this, a1);
		}

		::System::Boolean JBDILDEJNPB()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_JBDILDEJNPB_OFFSET))(this);
		}

		::System::Void CJDNBDACAGP(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_CJDNBDACAGP_OFFSET))(this, a1);
		}

		::System::Boolean DMJNODNMOPJ()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_DMJNODNMOPJ_OFFSET))(this);
		}

		::System::Void DBIHAIJNACB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_DBIHAIJNACB_OFFSET))(this, a1);
		}

		::System::Boolean GJNPFGIIAAF()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_GJNPFGIIAAF_OFFSET))(this);
		}

		::System::Void GCMFMPAGGJG(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_GCMFMPAGGJG_OFFSET))(this, a1);
		}

		::System::Boolean NJNHLPCNGCI()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_NJNHLPCNGCI_OFFSET))(this);
		}

		::System::Void LAKGNCDCHIO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_LAKGNCDCHIO_OFFSET))(this, a1);
		}

		::System::Boolean DAPMMGHHNGA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_DAPMMGHHNGA_OFFSET))(this);
		}

		::System::Void MFMNAADNGDF(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_MFMNAADNGDF_OFFSET))(this, a1);
		}

		::System::Int32 OJJEPHMHLEJ()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_OJJEPHMHLEJ_OFFSET))(this);
		}

		::System::Void HLKJALCJGED(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_HLKJALCJGED_OFFSET))(this, a1);
		}

		::System::Single JCJOOJCOBCL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_JCJOOJCOBCL_OFFSET))(this);
		}

		::System::Void BPLDJKDNBEN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_BPLDJKDNBEN_OFFSET))(this, a1);
		}

		::System::Single MOKNNGKMBCK()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_MOKNNGKMBCK_OFFSET))(this);
		}

		::System::Void CNCBAFEGFIJ(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_CNCBAFEGFIJ_OFFSET))(this, a1);
		}

		::System::Single BGMOBFFBHEJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_BGMOBFFBHEJ_OFFSET))(this);
		}

		::System::Void MEKHPOODDJN(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_MEKHPOODDJN_OFFSET))(this, a1);
		}

		::System::Single GDAGNICIJLC()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_GDAGNICIJLC_OFFSET))(this);
		}

		::System::Void GLDCKCEGEGC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_GLDCKCEGEGC_OFFSET))(this, a1);
		}

		::System::Single GMJJJPDCLPL()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_GMJJJPDCLPL_OFFSET))(this);
		}

		::System::Void DIBJEHBDLIC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_DIBJEHBDLIC_OFFSET))(this, a1);
		}

		::System::Single DBFGCGOEBFJ()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_DBFGCGOEBFJ_OFFSET))(this);
		}

		::System::Void KCAACIOLLKD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_KCAACIOLLKD_OFFSET))(this, a1);
		}

		::System::Single NOJJPKNMICO()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_NOJJPKNMICO_OFFSET))(this);
		}

		::System::Void EPPMNDANOBL(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_EPPMNDANOBL_OFFSET))(this, a1);
		}

		::RPG::GameCore::DriftComponentData* GFLKJLOFIPA()
		{
			return ((::RPG::GameCore::DriftComponentData*(*)(::PVOID))((::PBYTE)hIl2Cpp + IFFDLGLFCOP_GFLKJLOFIPA_OFFSET))(this);
		}

	};
