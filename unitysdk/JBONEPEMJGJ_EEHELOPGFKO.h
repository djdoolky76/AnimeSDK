#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimDamperParam.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimFixedParam.h"
#include "unitysdk/MoleMole/Battle/ProceduralAnimType.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

class OCEAHJEGOBJ;
namespace MoleMole::Config { class AnimatorZoneRotateBone; }
namespace System { class String; }
namespace UnityEngine { class Transform; }

#define JBONEPEMJGJ_EEHELOPGFKO_AAAFAPCCMAN_OFFSET UNITYSDK_OFFSET(0x1989DCE0)
#define JBONEPEMJGJ_EEHELOPGFKO_AHIDCGCHEAN_OFFSET UNITYSDK_OFFSET(0x1989D8E0)
#define JBONEPEMJGJ_EEHELOPGFKO_BOHPGNJMJKJ_OFFSET UNITYSDK_OFFSET(0x1989DC00)
#define JBONEPEMJGJ_EEHELOPGFKO_CCDPMNIAGPD_OFFSET UNITYSDK_OFFSET(0x1989DD70)
#define JBONEPEMJGJ_EEHELOPGFKO_CGIADAHNEEL_OFFSET UNITYSDK_OFFSET(0x1989DAE0)
#define JBONEPEMJGJ_EEHELOPGFKO_CPHBFHNCDBG_OFFSET UNITYSDK_OFFSET(0x1989DD40)
#define JBONEPEMJGJ_EEHELOPGFKO_DCFFCIDFHKJ_OFFSET UNITYSDK_OFFSET(0x1989DA90)
#define JBONEPEMJGJ_EEHELOPGFKO_DFPMHMDJKHE_OFFSET UNITYSDK_OFFSET(0x1989DC80)
#define JBONEPEMJGJ_EEHELOPGFKO_DPOLENAEHDA_OFFSET UNITYSDK_OFFSET(0x1989DC50)
#define JBONEPEMJGJ_EEHELOPGFKO_EBAAJDJFABP_OFFSET UNITYSDK_OFFSET(0x1989DBE0)
#define JBONEPEMJGJ_EEHELOPGFKO_ECJIOGIEDHP_OFFSET UNITYSDK_OFFSET(0x1989DB70)
#define JBONEPEMJGJ_EEHELOPGFKO_EPNCLKFGOMD_OFFSET UNITYSDK_OFFSET(0x1989DCB0)
#define JBONEPEMJGJ_EEHELOPGFKO_FCDJBHHMLIK_OFFSET UNITYSDK_OFFSET(0x1989D940)
#define JBONEPEMJGJ_EEHELOPGFKO_FCIMJCLBBIM_OFFSET UNITYSDK_OFFSET(0x1989DD00)
#define JBONEPEMJGJ_EEHELOPGFKO_FFNHIBEPHOA_OFFSET UNITYSDK_OFFSET(0x1989D930)
#define JBONEPEMJGJ_EEHELOPGFKO_FKOPAOHFDAJ_OFFSET UNITYSDK_OFFSET(0x1989DC60)
#define JBONEPEMJGJ_EEHELOPGFKO_FPBLJBHPDHH_OFFSET UNITYSDK_OFFSET(0x1989DB40)
#define JBONEPEMJGJ_EEHELOPGFKO_FPGNACLDPCD_OFFSET UNITYSDK_OFFSET(0x1989D8F0)
#define JBONEPEMJGJ_EEHELOPGFKO_GDFIFANMLEJ_OFFSET UNITYSDK_OFFSET(0x1989DD10)
#define JBONEPEMJGJ_EEHELOPGFKO_GOKJBEHGAAN_OFFSET UNITYSDK_OFFSET(0x1989DD20)
#define JBONEPEMJGJ_EEHELOPGFKO_HIJLENJLNCH_OFFSET UNITYSDK_OFFSET(0x1989DB90)
#define JBONEPEMJGJ_EEHELOPGFKO_IBJJJGNINMG_OFFSET UNITYSDK_OFFSET(0x1989DD80)
#define JBONEPEMJGJ_EEHELOPGFKO_IIOEFMOIHBP_OFFSET UNITYSDK_OFFSET(0x1989DB30)
#define JBONEPEMJGJ_EEHELOPGFKO_JIDLJHGNBEB_OFFSET UNITYSDK_OFFSET(0x1989DAA0)
#define JBONEPEMJGJ_EEHELOPGFKO_JNCKOOFDEIO_OFFSET UNITYSDK_OFFSET(0x1989DB00)
#define JBONEPEMJGJ_EEHELOPGFKO_JOIEENAKLFI_OFFSET UNITYSDK_OFFSET(0x1989DD90)
#define JBONEPEMJGJ_EEHELOPGFKO_KDILJIGLDKK_OFFSET UNITYSDK_OFFSET(0x1989DB50)
#define JBONEPEMJGJ_EEHELOPGFKO_KFLPGNCDGAE_OFFSET UNITYSDK_OFFSET(0x1989DD30)
#define JBONEPEMJGJ_EEHELOPGFKO_KHEJPFADFAG_OFFSET UNITYSDK_OFFSET(0x1989DBD0)
#define JBONEPEMJGJ_EEHELOPGFKO_KJOLGJGKDJL_OFFSET UNITYSDK_OFFSET(0x1989DC20)
#define JBONEPEMJGJ_EEHELOPGFKO_KMKIGHMGFEC_OFFSET UNITYSDK_OFFSET(0x1989DB20)
#define JBONEPEMJGJ_EEHELOPGFKO_KNDOJNFBPBO_OFFSET UNITYSDK_OFFSET(0x1989DC30)
#define JBONEPEMJGJ_EEHELOPGFKO_LBMFFHDJBKC_OFFSET UNITYSDK_OFFSET(0x1989DC70)
#define JBONEPEMJGJ_EEHELOPGFKO_LDIFNHEODBM_OFFSET UNITYSDK_OFFSET(0x1989DCC0)
#define JBONEPEMJGJ_EEHELOPGFKO_LMOBPAJGKJC_OFFSET UNITYSDK_OFFSET(0x1989DAB0)
#define JBONEPEMJGJ_EEHELOPGFKO_LNBAIIHKHDB_OFFSET UNITYSDK_OFFSET(0x1989DC90)
#define JBONEPEMJGJ_EEHELOPGFKO_MABDEGAPMOG_OFFSET UNITYSDK_OFFSET(0x1989D920)
#define JBONEPEMJGJ_EEHELOPGFKO_MCALFACFCKF_OFFSET UNITYSDK_OFFSET(0x1989DB80)
#define JBONEPEMJGJ_EEHELOPGFKO_MEDEJPFNIDD_OFFSET UNITYSDK_OFFSET(0x1989DB10)
#define JBONEPEMJGJ_EEHELOPGFKO_MMOOOMACDNE_OFFSET UNITYSDK_OFFSET(0x1989DBC0)
#define JBONEPEMJGJ_EEHELOPGFKO_NEDDAGNENLP_OFFSET UNITYSDK_OFFSET(0x1989D910)
#define JBONEPEMJGJ_EEHELOPGFKO_NIKPBOPLLJG_OFFSET UNITYSDK_OFFSET(0x1989DDC0)
#define JBONEPEMJGJ_EEHELOPGFKO_NJMGJFILKBN_OFFSET UNITYSDK_OFFSET(0x1989DCF0)
#define JBONEPEMJGJ_EEHELOPGFKO_NLOJBCKMNPG_OFFSET UNITYSDK_OFFSET(0x1989DC40)
#define JBONEPEMJGJ_EEHELOPGFKO_NNOAPKIHDBB_OFFSET UNITYSDK_OFFSET(0x1989DAF0)
#define JBONEPEMJGJ_EEHELOPGFKO_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1989D950)
#define JBONEPEMJGJ_EEHELOPGFKO_OHIPCBHAIBD_OFFSET UNITYSDK_OFFSET(0x1989DD60)
#define JBONEPEMJGJ_EEHELOPGFKO_OLEKCFHCHPH_OFFSET UNITYSDK_OFFSET(0x1989DB60)
#define JBONEPEMJGJ_EEHELOPGFKO_OPIKCHHAOKK_OFFSET UNITYSDK_OFFSET(0x1989DCA0)
#define JBONEPEMJGJ_EEHELOPGFKO_PAAGDMJJKGC_OFFSET UNITYSDK_OFFSET(0x1989DC10)
#define JBONEPEMJGJ_EEHELOPGFKO_PDPENHIBNDH_OFFSET UNITYSDK_OFFSET(0x1989D900)
#define JBONEPEMJGJ_EEHELOPGFKO__CTOR_OFFSET UNITYSDK_OFFSET(0x1989D8D0)

inline static constexpr unsigned int JBONEPEMJGJ_EEHELOPGFKO_TypeDefinitionIndex = 40578;

class JBONEPEMJGJ_EEHELOPGFKO : public ::System::Object
{
public:
	::MoleMole::Battle::ProceduralAnimFixedParam _AHOKKABBPHB_k__BackingField; // 0x10
	::OCEAHJEGOBJ* _MNFNDNNMPDJ_k__BackingField; // 0x50
	::MoleMole::Config::AnimatorZoneRotateBone* _KJNHFPNCCDK_k__BackingField; // 0x58
	::MoleMole::Battle::ProceduralAnimFixedParam _AIPAHCFLDCJ_k__BackingField; // 0x60
	::System::String* _LLGJHAKABNH_k__BackingField; // 0xA0
	::UnityEngine::Transform* _KMOLPFOMLPP_k__BackingField; // 0xA8
	::System::Single _AGDJOHJLKEC_k__BackingField; // 0xB0
	::MoleMole::Battle::ProceduralAnimType _HHNMLKJHPMA_k__BackingField; // 0xB4
	::System::Single _HICIDLBDHPC_k__BackingField; // 0xB8
	::UnityEngine::Quaternion _BOPOBOKLINI_k__BackingField; // 0xBC
	::UnityEngine::Quaternion _JPGJKPMEEHK_k__BackingField; // 0xCC
	::MoleMole::Battle::ProceduralAnimType _DECBMJMBIBE_k__BackingField; // 0xDC
	::MoleMole::Battle::ProceduralAnimDamperParam _JIELBIDFEPE_k__BackingField; // 0xE0
	::System::Single _IFAEFEKLEKO_k__BackingField; // 0xF0
	::System::Single _EODAKNPBCHK_k__BackingField; // 0xF4
	::System::Boolean _FABFHJFGPJE_k__BackingField; // 0xF8
	::System::Boolean _AJJJEEALFNM_k__BackingField; // 0xF9
	::System::Byte _padding0[0x2];
	::UnityEngine::Vector3 _ODOKMNJPAPJ_k__BackingField; // 0xFC
	::System::Boolean _DNDPLEMNOGA_k__BackingField; // 0x108
	::System::Boolean _DMOBBCDHJCA_k__BackingField; // 0x109
	::System::Boolean _EMKFNEMIGEB_k__BackingField; // 0x10A
	::System::Boolean _DGFBDJIMNCF_k__BackingField; // 0x10B
	::UnityEngine::Quaternion _LDLKEPFDKPE_k__BackingField; // 0x10C
	::MoleMole::Battle::ProceduralAnimDamperParam _JFNFDGABCGJ_k__BackingField; // 0x11C
	::System::Single _IONMJFGHDGN_k__BackingField; // 0x12C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO__CTOR_OFFSET))(this);
	}

	::System::Void AHIDCGCHEAN(::MoleMole::Battle::ProceduralAnimDamperParam EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimDamperParam))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_AHIDCGCHEAN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FPGNACLDPCD(::MoleMole::Battle::ProceduralAnimDamperParam EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimDamperParam))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_FPGNACLDPCD_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PDPENHIBNDH(::System::String* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_PDPENHIBNDH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Boolean NEDDAGNENLP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_NEDDAGNENLP_OFFSET))(this);
	}

	::MoleMole::Battle::ProceduralAnimType MABDEGAPMOG()
	{
		return ((::MoleMole::Battle::ProceduralAnimType(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_MABDEGAPMOG_OFFSET))(this);
	}

	::System::Void FFNHIBEPHOA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_FFNHIBEPHOA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FCDJBHHMLIK(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_FCDJBHHMLIK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean DCFFCIDFHKJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_DCFFCIDFHKJ_OFFSET))(this);
	}

	::System::Single JIDLJHGNBEB()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_JIDLJHGNBEB_OFFSET))(this);
	}

	::MoleMole::Battle::ProceduralAnimFixedParam LMOBPAJGKJC()
	{
		return ((::MoleMole::Battle::ProceduralAnimFixedParam(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_LMOBPAJGKJC_OFFSET))(this);
	}

	::UnityEngine::Quaternion CGIADAHNEEL()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_CGIADAHNEEL_OFFSET))(this);
	}

	::System::Boolean NNOAPKIHDBB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_NNOAPKIHDBB_OFFSET))(this);
	}

	::System::Void JNCKOOFDEIO(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_JNCKOOFDEIO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MEDEJPFNIDD(::OCEAHJEGOBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::OCEAHJEGOBJ*))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_MEDEJPFNIDD_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Battle::ProceduralAnimDamperParam KMKIGHMGFEC()
	{
		return ((::MoleMole::Battle::ProceduralAnimDamperParam(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_KMKIGHMGFEC_OFFSET))(this);
	}

	::System::Boolean IIOEFMOIHBP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_IIOEFMOIHBP_OFFSET))(this);
	}

	::System::Single FPBLJBHPDHH()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_FPBLJBHPDHH_OFFSET))(this);
	}

	::System::Void KDILJIGLDKK(::UnityEngine::Quaternion EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_KDILJIGLDKK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void OLEKCFHCHPH(::MoleMole::Battle::ProceduralAnimType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimType))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_OLEKCFHCHPH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ECJIOGIEDHP(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_ECJIOGIEDHP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MCALFACFCKF(::UnityEngine::Quaternion EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_MCALFACFCKF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HIJLENJLNCH(::MoleMole::Battle::ProceduralAnimFixedParam EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimFixedParam))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_HIJLENJLNCH_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Quaternion MMOOOMACDNE()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_MMOOOMACDNE_OFFSET))(this);
	}

	::System::Void KHEJPFADFAG(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_KHEJPFADFAG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EBAAJDJFABP(::UnityEngine::Vector3 EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_EBAAJDJFABP_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void BOHPGNJMJKJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_BOHPGNJMJKJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PAAGDMJJKGC(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_PAAGDMJJKGC_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KJOLGJGKDJL(::MoleMole::Config::AnimatorZoneRotateBone* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::AnimatorZoneRotateBone*))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_KJOLGJGKDJL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KNDOJNFBPBO(::UnityEngine::Quaternion EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_KNDOJNFBPBO_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void NLOJBCKMNPG(::MoleMole::Battle::ProceduralAnimType EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimType))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_NLOJBCKMNPG_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void DPOLENAEHDA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_DPOLENAEHDA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FKOPAOHFDAJ(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_FKOPAOHFDAJ_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::String* LBMFFHDJBKC()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_LBMFFHDJBKC_OFFSET))(this);
	}

	::MoleMole::Config::AnimatorZoneRotateBone* DFPMHMDJKHE()
	{
		return ((::MoleMole::Config::AnimatorZoneRotateBone*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_DFPMHMDJKHE_OFFSET))(this);
	}

	::System::Void LNBAIIHKHDB(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_LNBAIIHKHDB_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Battle::ProceduralAnimDamperParam OPIKCHHAOKK()
	{
		return ((::MoleMole::Battle::ProceduralAnimDamperParam(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_OPIKCHHAOKK_OFFSET))(this);
	}

	::OCEAHJEGOBJ* EPNCLKFGOMD()
	{
		return ((::OCEAHJEGOBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_EPNCLKFGOMD_OFFSET))(this);
	}

	::UnityEngine::Vector3 LDIFNHEODBM()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_LDIFNHEODBM_OFFSET))(this);
	}

	::System::Boolean AAAFAPCCMAN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_AAAFAPCCMAN_OFFSET))(this);
	}

	::System::Boolean NJMGJFILKBN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_NJMGJFILKBN_OFFSET))(this);
	}

	::UnityEngine::Quaternion FCIMJCLBBIM()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_FCIMJCLBBIM_OFFSET))(this);
	}

	::System::Single GDFIFANMLEJ()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_GDFIFANMLEJ_OFFSET))(this);
	}

	::System::Void GOKJBEHGAAN(::UnityEngine::Transform* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_GOKJBEHGAAN_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KFLPGNCDGAE(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_KFLPGNCDGAE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CPHBFHNCDBG(::MoleMole::Battle::ProceduralAnimFixedParam EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::ProceduralAnimFixedParam))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_CPHBFHNCDBG_OFFSET))(this, EGEGIMGMJHN);
	}

	::MoleMole::Battle::ProceduralAnimType OHIPCBHAIBD()
	{
		return ((::MoleMole::Battle::ProceduralAnimType(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_OHIPCBHAIBD_OFFSET))(this);
	}

	::System::Single CCDPMNIAGPD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_CCDPMNIAGPD_OFFSET))(this);
	}

	::UnityEngine::Transform* IBJJJGNINMG()
	{
		return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_IBJJJGNINMG_OFFSET))(this);
	}

	::MoleMole::Battle::ProceduralAnimFixedParam JOIEENAKLFI()
	{
		return ((::MoleMole::Battle::ProceduralAnimFixedParam(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_JOIEENAKLFI_OFFSET))(this);
	}

	::System::Single NIKPBOPLLJG()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + JBONEPEMJGJ_EEHELOPGFKO_NIKPBOPLLJG_OFFSET))(this);
	}
};
