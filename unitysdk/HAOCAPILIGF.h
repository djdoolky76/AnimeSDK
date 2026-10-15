#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterStanceBarStyle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BHBNAJMBAHO;
class DCGIDEKLGAJ;
class GAGGKGFMFPG;
class MNNJNNIHOJN;
class PMGOFCCJEDE;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AbilityCurrentStanceChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Tuple_2; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define HAOCAPILIGF_AGBFAOFEIEA_OFFSET UNITYSDK_OFFSET(0x15B8FD70)
#define HAOCAPILIGF_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0x15B8F180)
#define HAOCAPILIGF_AMPJJPMINPN_OFFSET UNITYSDK_OFFSET(0x15B8DAD0)
#define HAOCAPILIGF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15B919C0)
#define HAOCAPILIGF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15B91CE0)
#define HAOCAPILIGF_BJHKJBMJEJN_OFFSET UNITYSDK_OFFSET(0x15B8FD10)
#define HAOCAPILIGF_CAKAEHGIHHO_OFFSET UNITYSDK_OFFSET(0x15B8F290)
#define HAOCAPILIGF_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0x15B8EDC0)
#define HAOCAPILIGF_CHEPLDNDOOP_OFFSET UNITYSDK_OFFSET(0x15B8D160)
#define HAOCAPILIGF_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0x15B8FFD0)
#define HAOCAPILIGF_CNDBBJJHMOF_OFFSET UNITYSDK_OFFSET(0x15B8D5B0)
#define HAOCAPILIGF_CTOR_OFFSET UNITYSDK_OFFSET(0x15B91FE0)
#define HAOCAPILIGF_DBIEEPLDOGP_OFFSET UNITYSDK_OFFSET(0x15B8DCF0)
#define HAOCAPILIGF_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0x15B916F0)
#define HAOCAPILIGF_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0x15B914B0)
#define HAOCAPILIGF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15B8D600)
#define HAOCAPILIGF_DJFLELEAOBK_OFFSET UNITYSDK_OFFSET(0x15B908A0)
#define HAOCAPILIGF_EFPCLFPLCCN_OFFSET UNITYSDK_OFFSET(0x15B8F700)
#define HAOCAPILIGF_EHDGLEDIFNN_OFFSET UNITYSDK_OFFSET(0x15B91120)
#define HAOCAPILIGF_EJDBGGKGPJD_OFFSET UNITYSDK_OFFSET(0x15B901C0)
#define HAOCAPILIGF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15B8D4C0)
#define HAOCAPILIGF_EKNDGDHELDM_OFFSET UNITYSDK_OFFSET(0x15B8E730)
#define HAOCAPILIGF_EPPICCENEHE_OFFSET UNITYSDK_OFFSET(0x15B911B0)
#define HAOCAPILIGF_FCEHPGJKPEN_OFFSET UNITYSDK_OFFSET(0x15B8F460)
#define HAOCAPILIGF_FFEKHOKHAJN_OFFSET UNITYSDK_OFFSET(0x15B906A0)
#define HAOCAPILIGF_FMACKGCGJJB_OFFSET UNITYSDK_OFFSET(0x15B90E40)
#define HAOCAPILIGF_GANONNBLMBC_OFFSET UNITYSDK_OFFSET(0x15B8D360)
#define HAOCAPILIGF_GCFJKNOPOJP_OFFSET UNITYSDK_OFFSET(0x15B8FDD0)
#define HAOCAPILIGF_GOFEAGLOPFJ_OFFSET UNITYSDK_OFFSET(0x15B907D0)
#define HAOCAPILIGF_HADCKFDBNPG_OFFSET UNITYSDK_OFFSET(0x15B917B0)
#define HAOCAPILIGF_HEEDDMNBJFG_OFFSET UNITYSDK_OFFSET(0x15B8D980)
#define HAOCAPILIGF_HEKAONCELEP_OFFSET UNITYSDK_OFFSET(0x15B90300)
#define HAOCAPILIGF_IDGENCGNNNL_OFFSET UNITYSDK_OFFSET(0x15B91630)
#define HAOCAPILIGF_IGKOIPNBFBN_OFFSET UNITYSDK_OFFSET(0x15B8F970)
#define HAOCAPILIGF_IMOBCCPHHDL_OFFSET UNITYSDK_OFFSET(0x15B90040)
#define HAOCAPILIGF_IOMPOJEKJOJ_OFFSET UNITYSDK_OFFSET(0x15B8DA30)
#define HAOCAPILIGF_JFIDDAEECPA_OFFSET UNITYSDK_OFFSET(0x15B91570)
#define HAOCAPILIGF_JFKPJMNHBPG_OFFSET UNITYSDK_OFFSET(0x15B90620)
#define HAOCAPILIGF_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x15B8E660)
#define HAOCAPILIGF_JKNNPOOOINO_OFFSET UNITYSDK_OFFSET(0x15B8DC30)
#define HAOCAPILIGF_JPHGHAGMEEI_OFFSET UNITYSDK_OFFSET(0x15B91270)
#define HAOCAPILIGF_KDLKDJDPAAM_OFFSET UNITYSDK_OFFSET(0x15B91330)
#define HAOCAPILIGF_KGJOGPABLEN_OFFSET UNITYSDK_OFFSET(0x15B8DFE0)
#define HAOCAPILIGF_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0x15B91420)
#define HAOCAPILIGF_KJNODBEBNBO_OFFSET UNITYSDK_OFFSET(0x15B8F5C0)
#define HAOCAPILIGF_KOLBHPFLGHN_OFFSET UNITYSDK_OFFSET(0x15B8FEB0)
#define HAOCAPILIGF_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x15B8F570)
#define HAOCAPILIGF_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0x15B8F230)
#define HAOCAPILIGF_LELBGCPANNC_OFFSET UNITYSDK_OFFSET(0x15B8F030)
#define HAOCAPILIGF_LGKMLNKILEO_OFFSET UNITYSDK_OFFSET(0x15B8EB60)
#define HAOCAPILIGF_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x15B8D450)
#define HAOCAPILIGF_MAMPCDKHKKB_OFFSET UNITYSDK_OFFSET(0x15B8F3A0)
#define HAOCAPILIGF_MPFBHIGKDHI_OFFSET UNITYSDK_OFFSET(0x15B8E830)
#define HAOCAPILIGF_MPKLJEEJMBM_OFFSET UNITYSDK_OFFSET(0x15B8EF20)
#define HAOCAPILIGF_NENIICLLPBF_OFFSET UNITYSDK_OFFSET(0x15B8FE40)
#define HAOCAPILIGF_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15B8D6E0)
#define HAOCAPILIGF_OFJPMMBPCJH_OFFSET UNITYSDK_OFFSET(0x15B918A0)
#define HAOCAPILIGF_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15B8D3B0)
#define HAOCAPILIGF_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15B8D550)
#define HAOCAPILIGF_PACMLALABLN_OFFSET UNITYSDK_OFFSET(0x15B8DE90)
#define HAOCAPILIGF_PCIGGGFIONB_OFFSET UNITYSDK_OFFSET(0x15B90700)
#define HAOCAPILIGF__ONBIND_OFFSET UNITYSDK_OFFSET(0x15B8CEE0)
#define HAOCAPILIGF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15B8E7D0)
#define HAOCAPILIGF___ONSETSTANCEHINTEFFECT_B__39_0_OFFSET UNITYSDK_OFFSET(0x15B92040)

inline static constexpr unsigned int HAOCAPILIGF_TypeDefinitionIndex = 71803;

	class HAOCAPILIGF : public ::FMPCODLIOLG
	{
	public:
		::RPG::Client::LocalizedText* OCFIEADGJKH; // 0x60
		::UnityEngine::Transform* PDMEKBDNPLL; // 0x68
		::UnityEngine::RectTransform* LLNGAJECOOL; // 0x70
		::UnityEngine::GameObject* HMKJOJGNMCO; // 0x78
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x80
		::DCGIDEKLGAJ* OJHPCBCOMPH; // 0x88
		::DCGIDEKLGAJ* BBKDNMLIICL; // 0x90
		::UnityEngine::GameObject* GHKJCIMMOOJ; // 0x98
		::UnityEngine::GameObject* GCBKJFLEHCJ; // 0xA0
		::DCGIDEKLGAJ* HIDPNDPKDLG; // 0xA8
		::RPG::GameCore::TurnBasedAbilityComponent* PEPAJDNHBNF; // 0xB0
		::UnityEngine::Animation* KHONICBMFBP; // 0xB8
		::UnityEngine::GameObject* GIOILAMAMDP; // 0xC0
		::BHBNAJMBAHO* INFKHFPPPCN; // 0xC8
		::UnityEngine::Animation* HEOEAFHGHDG; // 0xD0
		::System::String* FPEIDBPEPDP; // 0xD8
		::UnityEngine::Animation* NANNKBPABNE; // 0xE0
		::GAGGKGFMFPG* NEJJFGIHHCP; // 0xE8
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xF0
		::System::Int32 KIGHKNPHMEN; // 0xF8
		::System::Boolean HAKHCANCCKK; // 0xFC
		::System::Boolean PKCJICMHPDG; // 0xFD
		::System::Boolean NCMNAEHAPNO; // 0xFE
		::System::Byte _padding0[0x1];
		::UnityEngine::Color KBAHMFAPDAD; // 0x100
		::UnityEngine::Color NIFOJHMGDDB; // 0x110
		::RPG::GameCore::FixPoint KJLPKLMOMKN; // 0x120
		::UnityEngine::Color BNKKPLOJKGM; // 0x128
		::UnityEngine::Color DAJIAPPOMCL; // 0x138
		::UnityEngine::Color BGHEJIGECIL; // 0x148
		::System::Int32 OJJEBIJFLLD; // 0x158
		::UnityEngine::Color FLNEDEJLHLP; // 0x15C
		::RPG::GameCore::MonsterStanceBarStyle MMCFCBMDGEK; // 0x16C
		// static const ::System::String* DJCBDJMACFH; // 0x0
		// static const ::System::String* BEEECPONGEK; // 0x0
		// static const ::System::String* ACAHCLNBFNM; // 0x0
		// static const ::System::String* PENNLJNIACI; // 0x0
		// static const ::System::String* DEEACDBACHB; // 0x0
		// static const ::System::String* LNHLGCMJABG; // 0x0
		// static const ::System::String* CGNDHBLOIKM; // 0x0
		// static const ::System::String* GAMHLBANFDL; // 0x0
		// static const ::System::String* IIOMNNKJGPJ; // 0x0
		// static const ::System::String* EAJKGNAPKHN; // 0x0
		// static const ::System::String* KPMJJJCDJNB; // 0x0
		// static const ::System::String* LABPEJLGDAM; // 0x0
		// static const ::System::String* LKKKDAPPCFF; // 0x0
		// static const ::System::String* LNBMIHGDCPM; // 0x0
		// static const ::System::String* MHBGCAOKCOE; // 0x0
		// static const ::System::Object MILMLKGBOGF; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_CTOR_OFFSET))(this);
		}

		::System::Void _OnBind()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF__ONBIND_OFFSET))(this);
		}

		::System::Void CHEPLDNDOOP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_CHEPLDNDOOP_OFFSET))(this);
		}

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_ONRETURN_OFFSET))(this);
		}

		::System::Void CNDBBJJHMOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_CNDBBJJHMOF_OFFSET))(this);
		}

		::System::Void DHHDFAAJMMC(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HAOCAPILIGF_DHHDFAAJMMC_OFFSET))(this, a1);
		}

		::System::Void NIJJPBOIGBI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_NIJJPBOIGBI_OFFSET))(this);
		}

		::System::Void EKGCGIDIFJJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_EKGCGIDIFJJ_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HAOCAPILIGF_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF__ONDISPOSE_OFFSET))(this);
		}

		::System::Void MPFBHIGKDHI(::RPG::GameCore::AbilityCurrentStanceChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentStanceChange*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_MPFBHIGKDHI_OFFSET))(this, a1);
		}

		::System::Void MPKLJEEJMBM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_MPKLJEEJMBM_OFFSET))(this, a1);
		}

		::System::Void LELBGCPANNC(::System::Tuple_2<::System::UInt32, ::System::Boolean>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Tuple_2<::System::UInt32, ::System::Boolean>*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_LELBGCPANNC_OFFSET))(this, a1);
		}

		::System::Void AIOJNOHDCDM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_AIOJNOHDCDM_OFFSET))(this);
		}

		::System::Void LCJLLGBJENF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_LCJLLGBJENF_OFFSET))(this);
		}

		::System::Void CAKAEHGIHHO(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_CAKAEHGIHHO_OFFSET))(this, a1);
		}

		::System::Void FCEHPGJKPEN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_FCEHPGJKPEN_OFFSET))(this, a1);
		}

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void EFPCLFPLCCN(::MNNJNNIHOJN* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MNNJNNIHOJN*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_EFPCLFPLCCN_OFFSET))(this, a1);
		}

		::System::Void BJHKJBMJEJN(::PMGOFCCJEDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMGOFCCJEDE*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_BJHKJBMJEJN_OFFSET))(this, a1);
		}

		::System::Void IGKOIPNBFBN(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_IGKOIPNBFBN_OFFSET))(this, a1);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void IOMPOJEKJOJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_IOMPOJEKJOJ_OFFSET))(this);
		}

		::System::Boolean AGBFAOFEIEA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_AGBFAOFEIEA_OFFSET))(this);
		}

		::System::Void JKNNPOOOINO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_JKNNPOOOINO_OFFSET))(this);
		}

		::System::Void LGKMLNKILEO(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HAOCAPILIGF_LGKMLNKILEO_OFFSET))(this, a1);
		}

		::System::Boolean GANONNBLMBC()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_GANONNBLMBC_OFFSET))(this);
		}

		::System::Void CCJBBIOCLIM(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HAOCAPILIGF_CCJBBIOCLIM_OFFSET))(this, a1);
		}

		::System::Void KOLBHPFLGHN(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + HAOCAPILIGF_KOLBHPFLGHN_OFFSET))(this, a1, a2);
		}

		::System::Void CIINDFONDLC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_CIINDFONDLC_OFFSET))(this);
		}

		::System::Void IMOBCCPHHDL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_IMOBCCPHHDL_OFFSET))(this);
		}

		::System::Void KJNODBEBNBO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_KJNODBEBNBO_OFFSET))(this);
		}

		::System::Boolean DBIEEPLDOGP()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_DBIEEPLDOGP_OFFSET))(this);
		}

		::System::Void PACMLALABLN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_PACMLALABLN_OFFSET))(this);
		}

		::System::Void HEKAONCELEP(::RPG::GameCore::FixPoint a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::FixPoint))((::PBYTE)hIl2Cpp + HAOCAPILIGF_HEKAONCELEP_OFFSET))(this, a1);
		}

		::System::Void MAMPCDKHKKB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_MAMPCDKHKKB_OFFSET))(this);
		}

		::System::Void AMPJJPMINPN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_AMPJJPMINPN_OFFSET))(this);
		}

		::System::Void HEEDDMNBJFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_HEEDDMNBJFG_OFFSET))(this);
		}

		::System::Void PCIGGGFIONB(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HAOCAPILIGF_PCIGGGFIONB_OFFSET))(this, a1);
		}

		::System::Void GOFEAGLOPFJ(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HAOCAPILIGF_GOFEAGLOPFJ_OFFSET))(this, a1);
		}

		::System::Void EKNDGDHELDM(::System::String* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + HAOCAPILIGF_EKNDGDHELDM_OFFSET))(this, a1, a2);
		}

		::System::Void GCFJKNOPOJP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_GCFJKNOPOJP_OFFSET))(this);
		}

		::System::Void NENIICLLPBF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_NENIICLLPBF_OFFSET))(this);
		}

		::System::Void JFKPJMNHBPG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_JFKPJMNHBPG_OFFSET))(this);
		}

		::System::Void FFEKHOKHAJN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_FFEKHOKHAJN_OFFSET))(this);
		}

		::System::Boolean EJDBGGKGPJD()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_EJDBGGKGPJD_OFFSET))(this);
		}

		::System::Void FMACKGCGJJB()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_FMACKGCGJJB_OFFSET))(this);
		}

		::System::Void DJFLELEAOBK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_DJFLELEAOBK_OFFSET))(this);
		}

		::System::Void KGJOGPABLEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_KGJOGPABLEN_OFFSET))(this);
		}

		::System::Boolean EHDGLEDIFNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_EHDGLEDIFNN_OFFSET))(this);
		}

		::System::Void EPPICCENEHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_EPPICCENEHE_OFFSET))(this, a1);
		}

		::System::Void JPHGHAGMEEI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_JPHGHAGMEEI_OFFSET))(this, a1);
		}

		::System::Void KDLKDJDPAAM(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_KDLKDJDPAAM_OFFSET))(this, a1);
		}

		::System::Void KHNLCACKMAH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_KHNLCACKMAH_OFFSET))(this, a1);
		}

		::System::Void DGBGEJOLBEO(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_DGBGEJOLBEO_OFFSET))(this, a1);
		}

		::System::Void JFIDDAEECPA(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_JFIDDAEECPA_OFFSET))(this, a1);
		}

		::System::Void IDGENCGNNNL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_IDGENCGNNNL_OFFSET))(this, a1);
		}

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_DDCDDLKFKNI_OFFSET))(this, a1);
		}

		::System::Void HADCKFDBNPG(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_HADCKFDBNPG_OFFSET))(this, a1);
		}

		::System::Void OFJPMMBPCJH(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_OFJPMMBPCJH_OFFSET))(this, a1);
		}

		::System::Void AutoBindCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_AUTOBINDCALLBACK_OFFSET))(this);
		}

		::System::Void AutoRemoveCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_AUTOREMOVECALLBACK_OFFSET))(this);
		}

		::System::Boolean __OnSetStanceHintEffect_b__39_0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HAOCAPILIGF___ONSETSTANCEHINTEFFECT_B__39_0_OFFSET))(this, a1);
		}

	};
