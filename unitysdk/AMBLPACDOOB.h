#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define AMBLPACDOOB_BBCNGAMOMEB_OFFSET UNITYSDK_OFFSET(0x654700)
#define AMBLPACDOOB_BFIFALFGOOC_OFFSET UNITYSDK_OFFSET(0x778750)
#define AMBLPACDOOB_BIMNKHNBOJL_OFFSET UNITYSDK_OFFSET(0x408720)
#define AMBLPACDOOB_CEHHDPOJLPF_OFFSET UNITYSDK_OFFSET(0x359320)
#define AMBLPACDOOB_CPAFPCHDDPA_OFFSET UNITYSDK_OFFSET(0x2E38E0)
#define AMBLPACDOOB_DHBHABHLDHI_OFFSET UNITYSDK_OFFSET(0x3632B0)
#define AMBLPACDOOB_DMCCCANGCKD_OFFSET UNITYSDK_OFFSET(0x5B4B70)
#define AMBLPACDOOB_DPIHOJBBGLA_OFFSET UNITYSDK_OFFSET(0x7C94D0)
#define AMBLPACDOOB_EEDDALPLFJE_OFFSET UNITYSDK_OFFSET(0x7C9570)
#define AMBLPACDOOB_FICNLFHHJHP_OFFSET UNITYSDK_OFFSET(0x6465A0)
#define AMBLPACDOOB_FJPBPHPLLHA_OFFSET UNITYSDK_OFFSET(0x411E60)
#define AMBLPACDOOB_FPPAIAPNHGA_OFFSET UNITYSDK_OFFSET(0x3844F0)
#define AMBLPACDOOB_GBHCPLKPNNM_OFFSET UNITYSDK_OFFSET(0x778760)
#define AMBLPACDOOB_GGNOOFNDAIK_OFFSET UNITYSDK_OFFSET(0x359150)
#define AMBLPACDOOB_HNLNDEPLKDJ_OFFSET UNITYSDK_OFFSET(0x7C94C0)
#define AMBLPACDOOB_ICKJHPMHPHD_OFFSET UNITYSDK_OFFSET(0x4254B0)
#define AMBLPACDOOB_IHOKIIFNPKI_OFFSET UNITYSDK_OFFSET(0x778770)
#define AMBLPACDOOB_IMONJJFLGED_OFFSET UNITYSDK_OFFSET(0x6546E0)
#define AMBLPACDOOB_JICAHGKGBIJ_OFFSET UNITYSDK_OFFSET(0x3CED50)
#define AMBLPACDOOB_KPMKENNCHAF_OFFSET UNITYSDK_OFFSET(0x7C9580)
#define AMBLPACDOOB_LAPJKBLKJKH_OFFSET UNITYSDK_OFFSET(0x388A60)
#define AMBLPACDOOB_LLPDPGAPNGG_OFFSET UNITYSDK_OFFSET(0x3632C0)
#define AMBLPACDOOB_LMMJCNHPFDC_OFFSET UNITYSDK_OFFSET(0x3D00D0)
#define AMBLPACDOOB_LOKBFILHIAC_OFFSET UNITYSDK_OFFSET(0x3844E0)
#define AMBLPACDOOB_MKKGNJFICKJ_OFFSET UNITYSDK_OFFSET(0x52D8C0)
#define AMBLPACDOOB_NEFGCFFCHAC_OFFSET UNITYSDK_OFFSET(0x67F0F0)
#define AMBLPACDOOB_NMELIPDEANE_OFFSET UNITYSDK_OFFSET(0x3CE9E0)
#define AMBLPACDOOB_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7C94B0)
#define AMBLPACDOOB__CTOR_OFFSET UNITYSDK_OFFSET(0x7C9410)

inline static constexpr unsigned int AMBLPACDOOB_TypeDefinitionIndex = 68305;

struct alignas(8) AMBLPACDOOB
{
	::System::Int32 _NLNPMDNHEHL_k__BackingField; // 0x10
	::System::Int32 _OAIILLIEICL_k__BackingField; // 0x14
	::System::String* _BJKMJMCFJFM_k__BackingField; // 0x18
	::System::String* _JMDNOLLGAJM_k__BackingField; // 0x20
	::System::Boolean _PGHNLONCNCG_k__BackingField; // 0x28
	::System::Byte _padding0[0x3];
	::System::Int32 _PIFKNPGMLPE_k__BackingField; // 0x2C
	::System::Boolean _EDAOJIPHINO_k__BackingField; // 0x30
	::System::Byte _padding1[0x3];
	::System::Int32 _PMPINJADPMO_k__BackingField; // 0x34
	::System::String* _ACGODCCMPFB_k__BackingField; // 0x38
	::System::UInt32 _IJGJHPGLMJB_k__BackingField; // 0x40
	::System::UInt32 _AHDIKJLMIFA_k__BackingField; // 0x44
	::System::UInt32 _GHGNFMHBAIO_k__BackingField; // 0x48
	::System::UInt32 _EFONKKNPIPB_k__BackingField; // 0x4C

	::System::Void _ctor(::System::Int32 CELAGOFPIBD, ::System::Int32 IEILFCLOEAF, ::System::String* DEAAAMMKJMM, ::System::String* OMMEALOOOOD, ::System::Boolean HFKOFOPHNAA, ::System::Int32 IFOAKGKKDLJ, ::System::Boolean LIOJICFGKBH, ::System::Int32 JDECNNCBBFO, ::System::String* EMLHEEBOLCE, ::System::UInt32 JOKEACGLLAB, ::System::UInt32 LPDJHEJJOBL, ::System::UInt32 CMJGKGNGELG, ::System::UInt32 AHGFCIADOCA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*, ::System::String*, ::System::Boolean, ::System::Int32, ::System::Boolean, ::System::Int32, ::System::String*, ::System::UInt32, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + AMBLPACDOOB__CTOR_OFFSET))(this, CELAGOFPIBD, IEILFCLOEAF, DEAAAMMKJMM, OMMEALOOOOD, HFKOFOPHNAA, IFOAKGKKDLJ, LIOJICFGKBH, JDECNNCBBFO, EMLHEEBOLCE, JOKEACGLLAB, LPDJHEJJOBL, CMJGKGNGELG, AHGFCIADOCA);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBLPACDOOB_TOSTRING_OFFSET))(this);
	}

	::System::Void HNLNDEPLKDJ(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMBLPACDOOB_HNLNDEPLKDJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* DPIHOJBBGLA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBLPACDOOB_DPIHOJBBGLA_OFFSET))(this);
	}

	::System::UInt32 EEDDALPLFJE()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBLPACDOOB_EEDDALPLFJE_OFFSET))(this);
	}

	::System::Void MKKGNJFICKJ(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMBLPACDOOB_MKKGNJFICKJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LAPJKBLKJKH(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AMBLPACDOOB_LAPJKBLKJKH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* BIMNKHNBOJL()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBLPACDOOB_BIMNKHNBOJL_OFFSET))(this);
	}

	::System::Void IMONJJFLGED(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMBLPACDOOB_IMONJJFLGED_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 CEHHDPOJLPF()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBLPACDOOB_CEHHDPOJLPF_OFFSET))(this);
	}

	::System::Boolean LMMJCNHPFDC()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBLPACDOOB_LMMJCNHPFDC_OFFSET))(this);
	}

	::System::Void FPPAIAPNHGA(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMBLPACDOOB_FPPAIAPNHGA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IHOKIIFNPKI(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMBLPACDOOB_IHOKIIFNPKI_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 NEFGCFFCHAC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBLPACDOOB_NEFGCFFCHAC_OFFSET))(this);
	}

	::System::Int32 LOKBFILHIAC()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBLPACDOOB_LOKBFILHIAC_OFFSET))(this);
	}

	::System::Void GGNOOFNDAIK(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMBLPACDOOB_GGNOOFNDAIK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ICKJHPMHPHD(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AMBLPACDOOB_ICKJHPMHPHD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 DHBHABHLDHI()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBLPACDOOB_DHBHABHLDHI_OFFSET))(this);
	}

	::System::String* JICAHGKGBIJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBLPACDOOB_JICAHGKGBIJ_OFFSET))(this);
	}

	::System::Void DMCCCANGCKD(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + AMBLPACDOOB_DMCCCANGCKD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* CPAFPCHDDPA()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBLPACDOOB_CPAFPCHDDPA_OFFSET))(this);
	}

	::System::Void KPMKENNCHAF(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMBLPACDOOB_KPMKENNCHAF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean BBCNGAMOMEB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBLPACDOOB_BBCNGAMOMEB_OFFSET))(this);
	}

	::System::Void FICNLFHHJHP(::System::UInt32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + AMBLPACDOOB_FICNLFHHJHP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 NMELIPDEANE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBLPACDOOB_NMELIPDEANE_OFFSET))(this);
	}

	::System::Void GBHCPLKPNNM(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + AMBLPACDOOB_GBHCPLKPNNM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void LLPDPGAPNGG(::System::Int32 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AMBLPACDOOB_LLPDPGAPNGG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::UInt32 FJPBPHPLLHA()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBLPACDOOB_FJPBPHPLLHA_OFFSET))(this);
	}

	::System::UInt32 BFIFALFGOOC()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + AMBLPACDOOB_BFIFALFGOOC_OFFSET))(this);
	}
};
