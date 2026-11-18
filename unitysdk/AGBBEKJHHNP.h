#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AEAODDJAHLC.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/Config/EntityType.h"
#include "unitysdk/MoleMole/GalGame/GalNPCLocation.h"
#include "unitysdk/MoleMole/GalGame/GalgameFilterType.h"
#include "unitysdk/MoleMole/GalGame/GalgameRainMode.h"
#include "unitysdk/MoleMole/GalGame/GalgameSubFilterType.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define AGBBEKJHHNP_ACAKJGHDBNC_OFFSET UNITYSDK_OFFSET(0x16D73960)
#define AGBBEKJHHNP_ACMBNGNNGFA_OFFSET UNITYSDK_OFFSET(0x16D73840)
#define AGBBEKJHHNP_AFBDMHOBJIL_OFFSET UNITYSDK_OFFSET(0x16D73ED0)
#define AGBBEKJHHNP_AIBNABINKGI_OFFSET UNITYSDK_OFFSET(0x16D73BE0)
#define AGBBEKJHHNP_BOMCBKIBNAD_OFFSET UNITYSDK_OFFSET(0x16D73820)
#define AGBBEKJHHNP_CAMFLKHMGEN_OFFSET UNITYSDK_OFFSET(0x16D73970)
#define AGBBEKJHHNP_CCJCJKLCBHC_OFFSET UNITYSDK_OFFSET(0x16D73D80)
#define AGBBEKJHHNP_CDNMPAHDCIC_OFFSET UNITYSDK_OFFSET(0x16D73940)
#define AGBBEKJHHNP_CEEJGJMHFEJ_OFFSET UNITYSDK_OFFSET(0x16D73C50)
#define AGBBEKJHHNP_CGIKFOEPAMB_OFFSET UNITYSDK_OFFSET(0x16D73810)
#define AGBBEKJHHNP_DGGLJDAOPGB_OFFSET UNITYSDK_OFFSET(0x16D73E00)
#define AGBBEKJHHNP_EDDGJCGFGBE_OFFSET UNITYSDK_OFFSET(0x16D73DA0)
#define AGBBEKJHHNP_EDLKEDGLJLC_OFFSET UNITYSDK_OFFSET(0x16D73720)
#define AGBBEKJHHNP_EEMDGAIOOCK_OFFSET UNITYSDK_OFFSET(0x16D73850)
#define AGBBEKJHHNP_EGEFGKFHOCP_OFFSET UNITYSDK_OFFSET(0x16D73CB0)
#define AGBBEKJHHNP_FAMPEILLPFP_OFFSET UNITYSDK_OFFSET(0x16D73A00)
#define AGBBEKJHHNP_FGHALJAMDAN_OFFSET UNITYSDK_OFFSET(0x16D73BF0)
#define AGBBEKJHHNP_FPIDNICJHHE_OFFSET UNITYSDK_OFFSET(0x16D73BC0)
#define AGBBEKJHHNP_FPIKIKKCGCD_OFFSET UNITYSDK_OFFSET(0x16D73D00)
#define AGBBEKJHHNP_GBAKFBDLHFA_OFFSET UNITYSDK_OFFSET(0x16D738D0)
#define AGBBEKJHHNP_GECBPKOPKJL_OFFSET UNITYSDK_OFFSET(0x16D73EF0)
#define AGBBEKJHHNP_GJNPMFANPBD_OFFSET UNITYSDK_OFFSET(0x16D73C80)
#define AGBBEKJHHNP_GLHCKEEFHDA_OFFSET UNITYSDK_OFFSET(0x16D73830)
#define AGBBEKJHHNP_HJPCFOHAFKO_OFFSET UNITYSDK_OFFSET(0x16D73C00)
#define AGBBEKJHHNP_IGGGPIMPLIC_OFFSET UNITYSDK_OFFSET(0x16D739F0)
#define AGBBEKJHHNP_ILDPAHOEAJE_OFFSET UNITYSDK_OFFSET(0x16D73E20)
#define AGBBEKJHHNP_INPCJFKCLHE_OFFSET UNITYSDK_OFFSET(0x16D73D70)
#define AGBBEKJHHNP_JHACPFHPFBL_OFFSET UNITYSDK_OFFSET(0x16D73C70)
#define AGBBEKJHHNP_JKALGKICGLG_OFFSET UNITYSDK_OFFSET(0x16D73C60)
#define AGBBEKJHHNP_JNEOKJAEIHK_OFFSET UNITYSDK_OFFSET(0x16D738C0)
#define AGBBEKJHHNP_JOIAOKIBMCL_OFFSET UNITYSDK_OFFSET(0x16D738E0)
#define AGBBEKJHHNP_KCKCLPCKOFH_OFFSET UNITYSDK_OFFSET(0x16D73DE0)
#define AGBBEKJHHNP_KDIAGNBKLBH_OFFSET UNITYSDK_OFFSET(0x16D73860)
#define AGBBEKJHHNP_KIEJNFKAGKF_OFFSET UNITYSDK_OFFSET(0x16D73750)
#define AGBBEKJHHNP_LAFCIGLEOJH_OFFSET UNITYSDK_OFFSET(0x16D73D60)
#define AGBBEKJHHNP_LFGAKNECCNB_OFFSET UNITYSDK_OFFSET(0x16D73A60)
#define AGBBEKJHHNP_LLALPEODDBH_OFFSET UNITYSDK_OFFSET(0x16D73D90)
#define AGBBEKJHHNP_LNKFBPOMICD_OFFSET UNITYSDK_OFFSET(0x16D73EE0)
#define AGBBEKJHHNP_MLMMFNONFIE_OFFSET UNITYSDK_OFFSET(0x16D73F40)
#define AGBBEKJHHNP_MMJGECGALNH_OFFSET UNITYSDK_OFFSET(0x16D737A0)
#define AGBBEKJHHNP_MNFEBKAOHED_OFFSET UNITYSDK_OFFSET(0x16D73950)
#define AGBBEKJHHNP_MNMFHPAIKMA_OFFSET UNITYSDK_OFFSET(0x16D73E10)
#define AGBBEKJHHNP_MOOKKKOFKLN_OFFSET UNITYSDK_OFFSET(0x16D73980)
#define AGBBEKJHHNP_NFDAKHJEIIJ_OFFSET UNITYSDK_OFFSET(0x16D739E0)
#define AGBBEKJHHNP_NGIMLOHDEEG_OFFSET UNITYSDK_OFFSET(0x16D73E80)
#define AGBBEKJHHNP_NIJJIIBOJJF_OFFSET UNITYSDK_OFFSET(0x16D73800)
#define AGBBEKJHHNP_ODNDJMPMGGF_OFFSET UNITYSDK_OFFSET(0x16D73C90)
#define AGBBEKJHHNP_OHLCLMGEPBP_OFFSET UNITYSDK_OFFSET(0x16D73740)
#define AGBBEKJHHNP_OKPALOBKMHD_OFFSET UNITYSDK_OFFSET(0x16D73730)
#define AGBBEKJHHNP_OOMNDPEGJMB_OFFSET UNITYSDK_OFFSET(0x16D73CA0)
#define AGBBEKJHHNP_PEMNJKKIMFE_OFFSET UNITYSDK_OFFSET(0x16D73DF0)
#define AGBBEKJHHNP_PJDMEICFKNC_OFFSET UNITYSDK_OFFSET(0x16D73BD0)
#define AGBBEKJHHNP__CTOR_OFFSET UNITYSDK_OFFSET(0x16D736E0)

inline static constexpr unsigned int AGBBEKJHHNP_TypeDefinitionIndex = 84872;

class AGBBEKJHHNP : public ::System::Object
{
public:
	::DGDNKBFMHME* CCDMEKCLPPJ; // 0x10
	::System::String* _ALBHGALJHBK_k__BackingField; // 0x18
	::System::String* _CCOLEDBLCJC_k__BackingField; // 0x20
	::System::String* _EJNEBKCAECE_k__BackingField; // 0x28
	::UnityEngine::GameObject* NNFAMBPEGEH; // 0x30
	::Foundation::AssetPath _AMFNNCOLOHA_k__BackingField; // 0x38
	::System::String* _HMJLPMDJMGL_k__BackingField; // 0x48
	::System::Int32 _JDPFKLNCODM_k__BackingField; // 0x50
	::MoleMole::GalGame::GalgameFilterType _BFKCEEHNPON_k__BackingField; // 0x54
	::System::Int32 _MLAOANDBFDO_k__BackingField; // 0x58
	::System::Boolean BBIBAPPOFPF; // 0x5C
	::System::Boolean IJBKKIHABFG; // 0x5D
	::System::Byte _padding0[0x2];
	::MoleMole::Config::EntityType _BNNCKPODBEH_k__BackingField; // 0x60
	::MoleMole::GalGame::GalgameSubFilterType _KIHLOKGAGNI_k__BackingField; // 0x64
	::System::Boolean _EADIKPFJKBE_k__BackingField; // 0x68
	::System::Boolean _BIPCBJLNIBM_k__BackingField; // 0x69
	::System::Boolean ALAHLGIKBDD; // 0x6A
	::System::Boolean _FDLBKPABGFO_k__BackingField; // 0x6B
	::AEAODDJAHLC _CCIDCFIEPCI_k__BackingField; // 0x6C
	::MoleMole::GalGame::GalgameRainMode _MHHCDFMGMCB_k__BackingField; // 0x70
	::MoleMole::GalGame::GalNPCLocation _JBGIJHMCLJD_k__BackingField; // 0x74

	::System::Void _ctor(::System::Int32 MGMDLMBEDJF, ::MoleMole::GalGame::GalNPCLocation CKPHNNFONEH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::GalGame::GalNPCLocation))((::PBYTE)hIl2Cpp + AGBBEKJHHNP__CTOR_OFFSET))(this, MGMDLMBEDJF, CKPHNNFONEH);
	}

	::System::Void EDLKEDGLJLC(::MoleMole::GalGame::GalgameSubFilterType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalgameSubFilterType))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_EDLKEDGLJLC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OKPALOBKMHD(::MoleMole::GalGame::GalgameRainMode EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalgameRainMode))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_OKPALOBKMHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OHLCLMGEPBP(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_OHLCLMGEPBP_OFFSET))(this, EGEGIMGMJHN);
	}

	::DGDNKBFMHME* KIEJNFKAGKF()
	{
		return ((::DGDNKBFMHME*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_KIEJNFKAGKF_OFFSET))(this);
	}

	::AGBBEKJHHNP* MMJGECGALNH(::MoleMole::GalGame::GalgameSubFilterType MLBNKKKCJGF, ::MoleMole::GalGame::GalgameRainMode GEJCKFFFKCL, ::System::String* AAOACDDOKCI)
	{
		return ((::AGBBEKJHHNP*(*)(::PVOID, ::MoleMole::GalGame::GalgameSubFilterType, ::MoleMole::GalGame::GalgameRainMode, ::System::String*))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_MMJGECGALNH_OFFSET))(this, MLBNKKKCJGF, GEJCKFFFKCL, AAOACDDOKCI);
	}

	::System::String* NIJJIIBOJJF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_NIJJIIBOJJF_OFFSET))(this);
	}

	::System::Boolean CGIKFOEPAMB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_CGIKFOEPAMB_OFFSET))(this);
	}

	::System::Boolean BOMCBKIBNAD()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_BOMCBKIBNAD_OFFSET))(this);
	}

	::System::Void GLHCKEEFHDA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_GLHCKEEFHDA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean ACMBNGNNGFA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_ACMBNGNNGFA_OFFSET))(this);
	}

	::System::Boolean EEMDGAIOOCK()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_EEMDGAIOOCK_OFFSET))(this);
	}

	::System::Void KDIAGNBKLBH(::Foundation::AssetPath CJBJONJDOLI, ::MoleMole::Config::EntityType OBNIAHNMHPF)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_KDIAGNBKLBH_OFFSET))(this, CJBJONJDOLI, OBNIAHNMHPF);
	}

	::System::Void JNEOKJAEIHK(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_JNEOKJAEIHK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GBAKFBDLHFA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_GBAKFBDLHFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::AGBBEKJHHNP* JOIAOKIBMCL(::System::Boolean IJMIFIIOKHO, ::System::Int32 CJPLACFCFBP)
	{
		return ((::AGBBEKJHHNP*(*)(::PVOID, ::System::Boolean, ::System::Int32))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_JOIAOKIBMCL_OFFSET))(this, IJMIFIIOKHO, CJPLACFCFBP);
	}

	::System::Boolean CDNMPAHDCIC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_CDNMPAHDCIC_OFFSET))(this);
	}

	::System::Boolean MNFEBKAOHED()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_MNFEBKAOHED_OFFSET))(this);
	}

	::System::Void ACAKJGHDBNC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_ACAKJGHDBNC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* CAMFLKHMGEN()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_CAMFLKHMGEN_OFFSET))(this);
	}

	::System::Void MOOKKKOFKLN(::DGDNKBFMHME* JGPIGFLIDOJ)
	{
		return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_MOOKKKOFKLN_OFFSET))(this, JGPIGFLIDOJ);
	}

	::System::Void NFDAKHJEIIJ(::MoleMole::GalGame::GalgameFilterType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_NFDAKHJEIIJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IGGGPIMPLIC(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_IGGGPIMPLIC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FAMPEILLPFP(::System::String* CJBJONJDOLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_FAMPEILLPFP_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void LFGAKNECCNB(::UnityEngine::GameObject* NJOAJLDJCCJ)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_LFGAKNECCNB_OFFSET))(this, NJOAJLDJCCJ);
	}

	::System::Void FPIDNICJHHE(::MoleMole::Config::EntityType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::EntityType))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_FPIDNICJHHE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 PJDMEICFKNC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_PJDMEICFKNC_OFFSET))(this);
	}

	::System::Void AIBNABINKGI(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_AIBNABINKGI_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::GalGame::GalgameRainMode FGHALJAMDAN()
	{
		return ((::MoleMole::GalGame::GalgameRainMode(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_FGHALJAMDAN_OFFSET))(this);
	}

	::AGBBEKJHHNP* HJPCFOHAFKO(::System::String* JHBKKMKLCBH)
	{
		return ((::AGBBEKJHHNP*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_HJPCFOHAFKO_OFFSET))(this, JHBKKMKLCBH);
	}

	::MoleMole::Config::EntityType CEEJGJMHFEJ()
	{
		return ((::MoleMole::Config::EntityType(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_CEEJGJMHFEJ_OFFSET))(this);
	}

	::Foundation::AssetPath JKALGKICGLG()
	{
		return ((::Foundation::AssetPath(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_JKALGKICGLG_OFFSET))(this);
	}

	::System::Void JHACPFHPFBL(::MoleMole::GalGame::GalNPCLocation EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::GalGame::GalNPCLocation))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_JHACPFHPFBL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void GJNPMFANPBD(::Foundation::AssetPath EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_GJNPMFANPBD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ODNDJMPMGGF(::AEAODDJAHLC EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::AEAODDJAHLC))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_ODNDJMPMGGF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 OOMNDPEGJMB()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_OOMNDPEGJMB_OFFSET))(this);
	}

	::AGBBEKJHHNP* EGEFGKFHOCP(::MoleMole::GalGame::GalgameFilterType GPMHMCFMBIK)
	{
		return ((::AGBBEKJHHNP*(*)(::PVOID, ::MoleMole::GalGame::GalgameFilterType))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_EGEFGKFHOCP_OFFSET))(this, GPMHMCFMBIK);
	}

	::AGBBEKJHHNP* FPIKIKKCGCD(::System::String* DJJHPONIPLC, ::System::Boolean DPEHGEGFJMD)
	{
		return ((::AGBBEKJHHNP*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_FPIKIKKCGCD_OFFSET))(this, DJJHPONIPLC, DPEHGEGFJMD);
	}

	::System::Void LAFCIGLEOJH(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_LAFCIGLEOJH_OFFSET))(this, EGEGIMGMJHN);
	}

	::AEAODDJAHLC INPCJFKCLHE()
	{
		return ((::AEAODDJAHLC(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_INPCJFKCLHE_OFFSET))(this);
	}

	::MoleMole::GalGame::GalgameSubFilterType CCJCJKLCBHC()
	{
		return ((::MoleMole::GalGame::GalgameSubFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_CCJCJKLCBHC_OFFSET))(this);
	}

	::System::String* LLALPEODDBH()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_LLALPEODDBH_OFFSET))(this);
	}

	::System::Void EDDGJCGFGBE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_EDDGJCGFGBE_OFFSET))(this);
	}

	::System::Boolean KCKCLPCKOFH()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_KCKCLPCKOFH_OFFSET))(this);
	}

	::MoleMole::GalGame::GalgameFilterType PEMNJKKIMFE()
	{
		return ((::MoleMole::GalGame::GalgameFilterType(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_PEMNJKKIMFE_OFFSET))(this);
	}

	::System::Void DGGLJDAOPGB(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_DGGLJDAOPGB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* MNMFHPAIKMA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_MNMFHPAIKMA_OFFSET))(this);
	}

	::AGBBEKJHHNP* ILDPAHOEAJE(::System::String* BCEGMGMOIAF, ::System::Boolean GMANKJHDEJA)
	{
		return ((::AGBBEKJHHNP*(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_ILDPAHOEAJE_OFFSET))(this, BCEGMGMOIAF, GMANKJHDEJA);
	}

	::AGBBEKJHHNP* NGIMLOHDEEG(::AEAODDJAHLC AMKFFPNCKAC)
	{
		return ((::AGBBEKJHHNP*(*)(::PVOID, ::AEAODDJAHLC))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_NGIMLOHDEEG_OFFSET))(this, AMKFFPNCKAC);
	}

	::System::Boolean AFBDMHOBJIL()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_AFBDMHOBJIL_OFFSET))(this);
	}

	::MoleMole::GalGame::GalNPCLocation LNKFBPOMICD()
	{
		return ((::MoleMole::GalGame::GalNPCLocation(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_LNKFBPOMICD_OFFSET))(this);
	}

	::UnityEngine::GameObject* GECBPKOPKJL()
	{
		return ((::UnityEngine::GameObject*(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_GECBPKOPKJL_OFFSET))(this);
	}

	::System::Boolean MLMMFNONFIE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AGBBEKJHHNP_MLMMFNONFIE_OFFSET))(this);
	}
};
