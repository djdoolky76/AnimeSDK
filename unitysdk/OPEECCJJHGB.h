#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCallbackType.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/KKKJIPHOOBK.h"
#include "unitysdk/OPEECCJJHGB_AGGLCCBHDLI.h"

class AkCallbackInfo;
class AkMusicSyncCallbackInfo;
class AkSegmentInfo;
class EGCJOPJKNLD;
class GEKNEEMAHBC;
class JCKLKIENABP;
class OPEECCJJHGB_BNODOEOOENC;
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::IO { class StreamWriter; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define OPEECCJJHGB_ADBJIKAOEME_OFFSET UNITYSDK_OFFSET(0x136E6550)
#define OPEECCJJHGB_ALHDJMOFGND_OFFSET UNITYSDK_OFFSET(0x136E6890)
#define OPEECCJJHGB_BKJPMPBEHDO_OFFSET UNITYSDK_OFFSET(0x136E6430)
#define OPEECCJJHGB_BNPEKFBPNNG_OFFSET UNITYSDK_OFFSET(0x136E9060)
#define OPEECCJJHGB_CINLHHAPAFN_1_OFFSET UNITYSDK_OFFSET(0x136E9280)
#define OPEECCJJHGB_CINLHHAPAFN_OFFSET UNITYSDK_OFFSET(0x136E8DC0)
#define OPEECCJJHGB_CNMJIMBHCAE_OFFSET UNITYSDK_OFFSET(0x136E29D0)
#define OPEECCJJHGB_DAKFMDNCNPN_OFFSET UNITYSDK_OFFSET(0x136E74D0)
#define OPEECCJJHGB_DALCHOOFONI_OFFSET UNITYSDK_OFFSET(0x136E8740)
#define OPEECCJJHGB_DJAKHBBMNLE_OFFSET UNITYSDK_OFFSET(0x136E89A0)
#define OPEECCJJHGB_DJAKPKMCJCL_OFFSET UNITYSDK_OFFSET(0x136E3F20)
#define OPEECCJJHGB_DPOLCGIOCEE_OFFSET UNITYSDK_OFFSET(0x136EA4D0)
#define OPEECCJJHGB_EHGBHCKLDKD_OFFSET UNITYSDK_OFFSET(0x136E95A0)
#define OPEECCJJHGB_EIJHKNKPMPN_OFFSET UNITYSDK_OFFSET(0x136E9510)
#define OPEECCJJHGB_EIKNCMLDMOC_OFFSET UNITYSDK_OFFSET(0x136E7E80)
#define OPEECCJJHGB_EKBIEAAGKBL_OFFSET UNITYSDK_OFFSET(0x136EA590)
#define OPEECCJJHGB_EKGJFKKHJDN_OFFSET UNITYSDK_OFFSET(0x136EA2B0)
#define OPEECCJJHGB_EPDCMIFFHDO_OFFSET UNITYSDK_OFFSET(0x136E47D0)
#define OPEECCJJHGB_FDEHJLDDEFM_OFFSET UNITYSDK_OFFSET(0x136EA390)
#define OPEECCJJHGB_FJEKIPNBNLJ_OFFSET UNITYSDK_OFFSET(0x136E65D0)
#define OPEECCJJHGB_FKOONGOMAKN_OFFSET UNITYSDK_OFFSET(0x136E95B0)
#define OPEECCJJHGB_FLOMHAGEFEC_OFFSET UNITYSDK_OFFSET(0x136E8950)
#define OPEECCJJHGB_FOAIGHAAKGL_OFFSET UNITYSDK_OFFSET(0x136E66C0)
#define OPEECCJJHGB_GIMLHJNAPKK_OFFSET UNITYSDK_OFFSET(0x136E9CD0)
#define OPEECCJJHGB_GODMPMJLJOD_OFFSET UNITYSDK_OFFSET(0x136EA420)
#define OPEECCJJHGB_HAJGGHNLIHD_OFFSET UNITYSDK_OFFSET(0x136E3450)
#define OPEECCJJHGB_HBNCBIBKGCI_OFFSET UNITYSDK_OFFSET(0x136EA340)
#define OPEECCJJHGB_HIJCABAJLEH_OFFSET UNITYSDK_OFFSET(0x136E4290)
#define OPEECCJJHGB_IBEBAMIAMHN_OFFSET UNITYSDK_OFFSET(0x136E5C40)
#define OPEECCJJHGB_ICLPLGNNCPA_OFFSET UNITYSDK_OFFSET(0x136E8BD0)
#define OPEECCJJHGB_IFLHPBADBFI_OFFSET UNITYSDK_OFFSET(0x136E5A80)
#define OPEECCJJHGB_IILGONGFFNI_OFFSET UNITYSDK_OFFSET(0x136E94B0)
#define OPEECCJJHGB_IOEPLPNLDAP_OFFSET UNITYSDK_OFFSET(0x136E6660)
#define OPEECCJJHGB_JJOBHFANHEE_OFFSET UNITYSDK_OFFSET(0x136E8C30)
#define OPEECCJJHGB_JLCBJPKBKHD_OFFSET UNITYSDK_OFFSET(0x136E9170)
#define OPEECCJJHGB_JMJDKAHFGDH_OFFSET UNITYSDK_OFFSET(0x136E2580)
#define OPEECCJJHGB_JNPDKPPJHNC_OFFSET UNITYSDK_OFFSET(0x136E6DF0)
#define OPEECCJJHGB_JOFFGMEPGNG_OFFSET UNITYSDK_OFFSET(0x136EA580)
#define OPEECCJJHGB_KEMMBJKNKAH_OFFSET UNITYSDK_OFFSET(0x136E6B20)
#define OPEECCJJHGB_KHGEHJIGFPA_OFFSET UNITYSDK_OFFSET(0x136E2F70)
#define OPEECCJJHGB_KIJHFFNKKFJ_OFFSET UNITYSDK_OFFSET(0x136E8560)
#define OPEECCJJHGB_KKIEAMBLDPN_OFFSET UNITYSDK_OFFSET(0x136E6BB0)
#define OPEECCJJHGB_LLKGNILACPM_OFFSET UNITYSDK_OFFSET(0x136E6B30)
#define OPEECCJJHGB_LNJBMKIFGDO_OFFSET UNITYSDK_OFFSET(0x136E4070)
#define OPEECCJJHGB_LPKBOEPEGAL_OFFSET UNITYSDK_OFFSET(0x136E85F0)
#define OPEECCJJHGB_MEOOMPFPHII_OFFSET UNITYSDK_OFFSET(0x136E63E0)
#define OPEECCJJHGB_MHJMDNJHEMO_OFFSET UNITYSDK_OFFSET(0x136E7090)
#define OPEECCJJHGB_NAMGOFIPPHB_OFFSET UNITYSDK_OFFSET(0x136E2AD0)
#define OPEECCJJHGB_NCACFPPKKFL_OFFSET UNITYSDK_OFFSET(0x136E5B10)
#define OPEECCJJHGB_NDKDFJGANHB_OFFSET UNITYSDK_OFFSET(0x136E78D0)
#define OPEECCJJHGB_NFIMLLOGNGE_1_OFFSET UNITYSDK_OFFSET(0x136EA040)
#define OPEECCJJHGB_NFIMLLOGNGE_OFFSET UNITYSDK_OFFSET(0x136E8490)
#define OPEECCJJHGB_NMCBBNAJHKM_OFFSET UNITYSDK_OFFSET(0x136E9C40)
#define OPEECCJJHGB_NOOIFKNNAFB_OFFSET UNITYSDK_OFFSET(0x136E87A0)
#define OPEECCJJHGB_NPNLGKACANI_OFFSET UNITYSDK_OFFSET(0x136E8ED0)
#define OPEECCJJHGB_OFABNKGAPPE_OFFSET UNITYSDK_OFFSET(0x136E52F0)
#define OPEECCJJHGB_OGKKIFCDJIP_OFFSET UNITYSDK_OFFSET(0x136E7E60)
#define OPEECCJJHGB_OIECDMAAILE_OFFSET UNITYSDK_OFFSET(0x136E8B40)
#define OPEECCJJHGB_OIIIJKDFENF_OFFSET UNITYSDK_OFFSET(0x136E9200)
#define OPEECCJJHGB_OIKMKFFMFEI_OFFSET UNITYSDK_OFFSET(0x136E4110)
#define OPEECCJJHGB_OKFKFPKKLLB_OFFSET UNITYSDK_OFFSET(0x136E5BB0)
#define OPEECCJJHGB_ONKBMLPBNAP_OFFSET UNITYSDK_OFFSET(0x136E5350)
#define OPEECCJJHGB_OPBDOOENBMD_OFFSET UNITYSDK_OFFSET(0x136E2B20)
#define OPEECCJJHGB_OPDJGLHKNDP_OFFSET UNITYSDK_OFFSET(0x136E5EA0)
#define OPEECCJJHGB_OPJIPHNPPAO_OFFSET UNITYSDK_OFFSET(0x136E8B30)
#define OPEECCJJHGB_PBNKIGKIAKM_OFFSET UNITYSDK_OFFSET(0x136E3210)
#define OPEECCJJHGB_PDLAMMKAMFL_OFFSET UNITYSDK_OFFSET(0x136E9430)
#define OPEECCJJHGB_PEJJMFJPKIL_OFFSET UNITYSDK_OFFSET(0x136E54C0)
#define OPEECCJJHGB_PKOBMCEALFE_OFFSET UNITYSDK_OFFSET(0x136E64D0)
#define OPEECCJJHGB_PLPONJAKNEB_OFFSET UNITYSDK_OFFSET(0x136E48E0)
#define OPEECCJJHGB_PNJAOKHCLCK_OFFSET UNITYSDK_OFFSET(0x136E9500)
#define OPEECCJJHGB__CTOR_OFFSET UNITYSDK_OFFSET(0x136E2470)

inline static constexpr unsigned int OPEECCJJHGB_TypeDefinitionIndex = 88584;

class OPEECCJJHGB : public ::KKKJIPHOOBK
{
public:
	// static const ::System::Single DGKFMMMODBL; // 0x0
	::System::Action_1<::System::Object*>* PBHACDDGFAP; // 0x18
	::System::String* NHPKBIEOLEG; // 0x20
	::System::String* OHPLPLOJANB; // 0x28
	::UnityEngine::Transform* GNJFOHLDMJC; // 0x30
	::System::Action_1<::System::String*>* GDGMHJGJHCB; // 0x38
	::System::String* MNKBEMLPGFI; // 0x40
	::System::String* HFJAABMPJGD; // 0x48
	::UnityEngine::GameObject* IMNIGELMEJG; // 0x50
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* KLIHDBIAPNP; // 0x58
	::System::String* FHLPHIIENLN; // 0x60
	::System::String* JNEPCCIHBMB; // 0x68
	::System::String* JFJJLCCOGIA; // 0x70
	::System::String* OHJJEPELING; // 0x78
	::EGCJOPJKNLD* GCMKLLOCKFN; // 0x80
	::System::String* BGBMLHPOLLB; // 0x88
	::System::UInt32 BFBCMALKEIE; // 0x90
	::Foundation::Coroutine::CoroutineHandle JABDFHGOMHB; // 0x94
	::System::Boolean GNMPLHHKNMK; // 0x98
	::System::Byte _padding0[0x3];
	::Foundation::Coroutine::CoroutineHandle KEGMPGNNMCM; // 0x9C
	::System::UInt32 HBLGJHMIOGD; // 0xA0
	::System::Int32 DGNHENJGBOK; // 0xA4
	::System::UInt32 LANPFKCEFMK; // 0xA8
	::System::Int32 MOCELLLHCHC; // 0xAC
	::System::UInt32 FMIJCKHCLFI; // 0xB0
	::System::UInt32 CJIALMHCENG; // 0xB4

	::System::Void _ctor(::JCKLKIENABP* AAOCANGHBDG)
	{
		return ((::System::Void(*)(::PVOID, ::JCKLKIENABP*))((::PBYTE)hIl2Cpp + OPEECCJJHGB__CTOR_OFFSET))(this, AAOCANGHBDG);
	}

	::System::Void JMJDKAHFGDH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_JMJDKAHFGDH_OFFSET))(this);
	}

	::System::Void CNMJIMBHCAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_CNMJIMBHCAE_OFFSET))(this);
	}

	::System::Void OPBDOOENBMD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_OPBDOOENBMD_OFFSET))(this);
	}

	::System::Void DJAKPKMCJCL(::GEKNEEMAHBC* NALHCEONDDN)
	{
		return ((::System::Void(*)(::PVOID, ::GEKNEEMAHBC*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_DJAKPKMCJCL_OFFSET))(this, NALHCEONDDN);
	}

	::System::Void HIJCABAJLEH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_HIJCABAJLEH_OFFSET))(this);
	}

	::System::Void EPDCMIFFHDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_EPDCMIFFHDO_OFFSET))(this);
	}

	::System::Void PLPONJAKNEB(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPEECCJJHGB_PLPONJAKNEB_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void OFABNKGAPPE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_OFABNKGAPPE_OFFSET))(this);
	}

	::System::Void ONKBMLPBNAP(::System::String* JNEPCCIHBMB)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_ONKBMLPBNAP_OFFSET))(this, JNEPCCIHBMB);
	}

	::System::Void PEJJMFJPKIL(::System::IO::StreamWriter* GCNIPFGOGHB)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_PEJJMFJPKIL_OFFSET))(this, GCNIPFGOGHB);
	}

	::System::Void IFLHPBADBFI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_IFLHPBADBFI_OFFSET))(this);
	}

	::System::Void NCACFPPKKFL(::AkMusicSyncCallbackInfo* NIDIFLMJBKA)
	{
		return ((::System::Void(*)(::PVOID, ::AkMusicSyncCallbackInfo*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_NCACFPPKKFL_OFFSET))(this, NIDIFLMJBKA);
	}

	::System::Void OKFKFPKKLLB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_OKFKFPKKLLB_OFFSET))(this);
	}

	::System::Void IBEBAMIAMHN(::OPEECCJJHGB_BNODOEOOENC* JKBLDFBGBPK)
	{
		return ((::System::Void(*)(::PVOID, ::OPEECCJJHGB_BNODOEOOENC*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_IBEBAMIAMHN_OFFSET))(this, JKBLDFBGBPK);
	}

	static ::OPEECCJJHGB_AGGLCCBHDLI OPDJGLHKNDP(::AkSegmentInfo* KHJBLLNJBPM)
	{
		return ((::OPEECCJJHGB_AGGLCCBHDLI(*)(::AkSegmentInfo*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_OPDJGLHKNDP_OFFSET))(KHJBLLNJBPM);
	}

	::System::Void MEOOMPFPHII()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_MEOOMPFPHII_OFFSET))(this);
	}

	::System::Void BKJPMPBEHDO(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPEECCJJHGB_BKJPMPBEHDO_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PKOBMCEALFE(::System::Action_1<::System::Object*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_PKOBMCEALFE_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void ADBJIKAOEME(::System::Action_1<::System::Object*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Object*>*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_ADBJIKAOEME_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void FJEKIPNBNLJ(::System::String* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_FJEKIPNBNLJ_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void IOEPLPNLDAP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_IOEPLPNLDAP_OFFSET))(this);
	}

	::System::Void ALHDJMOFGND(::System::String* BNHJPLLJKDJ, ::System::Single JOFGIANGHMK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + OPEECCJJHGB_ALHDJMOFGND_OFFSET))(this, BNHJPLLJKDJ, JOFGIANGHMK);
	}

	::System::Void KEMMBJKNKAH(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OPEECCJJHGB_KEMMBJKNKAH_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
	}

	::System::Void LLKGNILACPM(::System::Action_1<::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_LLKGNILACPM_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void KKIEAMBLDPN(::System::String* IIGAAPAOOMN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_KKIEAMBLDPN_OFFSET))(this, IIGAAPAOOMN);
	}

	::System::Void MHJMDNJHEMO(::AkMusicSyncCallbackInfo* HMMMOCJAEOA)
	{
		return ((::System::Void(*)(::PVOID, ::AkMusicSyncCallbackInfo*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_MHJMDNJHEMO_OFFSET))(this, HMMMOCJAEOA);
	}

	::System::Void PBNKIGKIAKM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_PBNKIGKIAKM_OFFSET))(this);
	}

	::System::Int32 OGKKIFCDJIP()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_OGKKIFCDJIP_OFFSET))(this);
	}

	::System::Void EIKNCMLDMOC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_EIKNCMLDMOC_OFFSET))(this);
	}

	::System::Void NAMGOFIPPHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_NAMGOFIPPHB_OFFSET))(this);
	}

	::System::Void KIJHFFNKKFJ()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_KIJHFFNKKFJ_OFFSET))(this);
	}

	::System::Void LPKBOEPEGAL(::System::UInt32 GEPABHJBIAH, ::System::String* KPIAFDELPJL, ::System::UInt32 ELNEEALLBGO, ::System::UInt32 LHCANNCJMLK)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::String*, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OPEECCJJHGB_LPKBOEPEGAL_OFFSET))(this, GEPABHJBIAH, KPIAFDELPJL, ELNEEALLBGO, LHCANNCJMLK);
	}

	::System::Void FOAIGHAAKGL(::System::String* BNHJPLLJKDJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_FOAIGHAAKGL_OFFSET))(this, BNHJPLLJKDJ);
	}

	::System::Void DALCHOOFONI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_DALCHOOFONI_OFFSET))(this);
	}

	::System::Void FLOMHAGEFEC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_FLOMHAGEFEC_OFFSET))(this);
	}

	::System::Void DJAKHBBMNLE(::System::String* BNHJPLLJKDJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_DJAKHBBMNLE_OFFSET))(this, BNHJPLLJKDJ);
	}

	::System::UInt32 OPJIPHNPPAO()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_OPJIPHNPPAO_OFFSET))(this);
	}

	::System::Void NOOIFKNNAFB(::System::String* IIGAAPAOOMN)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_NOOIFKNNAFB_OFFSET))(this, IIGAAPAOOMN);
	}

	::System::Void KHGEHJIGFPA(::System::String* IIGAAPAOOMN, ::System::Single JOFGIANGHMK)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + OPEECCJJHGB_KHGEHJIGFPA_OFFSET))(this, IIGAAPAOOMN, JOFGIANGHMK);
	}

	::System::Void OIECDMAAILE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_OIECDMAAILE_OFFSET))(this);
	}

	::System::Void JNPDKPPJHNC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_JNPDKPPJHNC_OFFSET))(this);
	}

	::System::Void ICLPLGNNCPA(::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + OPEECCJJHGB_ICLPLGNNCPA_OFFSET))(this, ELNEEALLBGO);
	}

	::System::Void NDKDFJGANHB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_NDKDFJGANHB_OFFSET))(this);
	}

	::System::Boolean CINLHHAPAFN(::System::UInt32 ELNEEALLBGO, ::OPEECCJJHGB_BNODOEOOENC*& JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::OPEECCJJHGB_BNODOEOOENC*&))((::PBYTE)hIl2Cpp + OPEECCJJHGB_CINLHHAPAFN_OFFSET))(this, ELNEEALLBGO, JKBLDFBGBPK);
	}

	::System::Void NPNLGKACANI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_NPNLGKACANI_OFFSET))(this);
	}

	::System::Void BNPEKFBPNNG(::System::Object* BEHGCHBLHJJ, ::AkCallbackType JNJLGMOGGLJ, ::AkCallbackInfo* KPILKNIECHK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Object*, ::AkCallbackType, ::AkCallbackInfo*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_BNPEKFBPNNG_OFFSET))(this, BEHGCHBLHJJ, JNJLGMOGGLJ, KPILKNIECHK);
	}

	::System::Boolean JJOBHFANHEE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_JJOBHFANHEE_OFFSET))(this);
	}

	::System::Void JLCBJPKBKHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_JLCBJPKBKHD_OFFSET))(this);
	}

	::System::Boolean OIIIJKDFENF(::System::String* KPIAFDELPJL, ::OPEECCJJHGB_BNODOEOOENC*& JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::OPEECCJJHGB_BNODOEOOENC*&))((::PBYTE)hIl2Cpp + OPEECCJJHGB_OIIIJKDFENF_OFFSET))(this, KPIAFDELPJL, JKBLDFBGBPK);
	}

	::System::Void PDLAMMKAMFL(::System::Action_1<::System::String*>* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_PDLAMMKAMFL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void IILGONGFFNI(::UnityEngine::Transform* HODAIDNDKHD)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_IILGONGFFNI_OFFSET))(this, HODAIDNDKHD);
	}

	::System::Void PNJAOKHCLCK(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_PNJAOKHCLCK_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void NFIMLLOGNGE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_NFIMLLOGNGE_OFFSET))(this);
	}

	::System::Collections::Generic::IEnumerable_1<::System::Object*>* EIJHKNKPMPN()
	{
		return ((::System::Collections::Generic::IEnumerable_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_EIJHKNKPMPN_OFFSET))(this);
	}

	::System::UInt32 EHGBHCKLDKD()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_EHGBHCKLDKD_OFFSET))(this);
	}

	::System::Void FKOONGOMAKN(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_FKOONGOMAKN_OFFSET))(this, MNDIBLLFAJI);
	}

	::System::Void NMCBBNAJHKM(::GEKNEEMAHBC* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::GEKNEEMAHBC*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_NMCBBNAJHKM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void GIMLHJNAPKK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_GIMLHJNAPKK_OFFSET))(this);
	}

	::System::Void LNJBMKIFGDO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_LNJBMKIFGDO_OFFSET))(this);
	}

	::System::Boolean CINLHHAPAFN_1(::System::String* KPIAFDELPJL, ::OPEECCJJHGB_BNODOEOOENC*& JKBLDFBGBPK)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::OPEECCJJHGB_BNODOEOOENC*&))((::PBYTE)hIl2Cpp + OPEECCJJHGB_CINLHHAPAFN_1_OFFSET))(this, KPIAFDELPJL, JKBLDFBGBPK);
	}

	::System::Void NFIMLLOGNGE_1(::System::String* BNHJPLLJKDJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_NFIMLLOGNGE_1_OFFSET))(this, BNHJPLLJKDJ);
	}

	::System::Void EKGJFKKHJDN(::System::IO::StreamWriter* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::IO::StreamWriter*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_EKGJFKKHJDN_OFFSET))(this, MIALFKCCCPI);
	}

	::System::UInt32 HBNCBIBKGCI()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_HBNCBIBKGCI_OFFSET))(this);
	}

	::System::Void FDEHJLDDEFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_FDEHJLDDEFM_OFFSET))(this);
	}

	::System::Void HAJGGHNLIHD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_HAJGGHNLIHD_OFFSET))(this);
	}

	::System::Boolean DAKFMDNCNPN()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_DAKFMDNCNPN_OFFSET))(this);
	}

	::System::Void GODMPMJLJOD(::System::Action_1<::System::String*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_GODMPMJLJOD_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void DPOLCGIOCEE(::System::Action_1<::System::String*>* EJGDHCIBCJH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::String*>*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_DPOLCGIOCEE_OFFSET))(this, EJGDHCIBCJH);
	}

	::System::Void OIKMKFFMFEI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPEECCJJHGB_OIKMKFFMFEI_OFFSET))(this);
	}

	::System::Void JOFFGMEPGNG(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 ELNEEALLBGO)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + OPEECCJJHGB_JOFFGMEPGNG_OFFSET))(this, GFOPLDDFDIA, ELNEEALLBGO);
	}

	::System::Void EKBIEAAGKBL(::System::EventArgs* MNDIBLLFAJI)
	{
		return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + OPEECCJJHGB_EKBIEAAGKBL_OFFSET))(this, MNDIBLLFAJI);
	}
};
