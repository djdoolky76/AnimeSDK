#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMPCODLIOLG.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterStanceBarStyle.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/IGKFNIEJGLM.h"
class BHBNAJMBAHO;
class CDKKPFHIFLA;
class DCGIDEKLGAJ;
class GAGGKGFMFPG;
class PMGOFCCJEDE;
namespace RPG::Client { class LocalizedText; }
namespace RPG::GameCore { class AbilityCurrentStanceChange; }
namespace RPG::GameCore { class GameEntity; }
namespace RPG::GameCore { class LevelUIComponent; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }

#define HAOCAPILIGF_AGBFAOFEIEA_OFFSET UNITYSDK_OFFSET(0x16B21E40)
#define HAOCAPILIGF_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0x16B21770)
#define HAOCAPILIGF_AMPJJPMINPN_OFFSET UNITYSDK_OFFSET(0x16B1FFB0)
#define HAOCAPILIGF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x16B232B0)
#define HAOCAPILIGF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x16B23550)
#define HAOCAPILIGF_BJHKJBMJEJN_OFFSET UNITYSDK_OFFSET(0x16B21D30)
#define HAOCAPILIGF_CAKAEHGIHHO_OFFSET UNITYSDK_OFFSET(0x16B21880)
#define HAOCAPILIGF_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0x16B21500)
#define HAOCAPILIGF_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0x16B22180)
#define HAOCAPILIGF_CNDBBJJHMOF_OFFSET UNITYSDK_OFFSET(0x16B1FA20)
#define HAOCAPILIGF_CTOR_OFFSET UNITYSDK_OFFSET(0x16B237C0)
#define HAOCAPILIGF_DBIEEPLDOGP_OFFSET UNITYSDK_OFFSET(0x16B20230)
#define HAOCAPILIGF_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0x16B230D0)
#define HAOCAPILIGF_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0x16B22F50)
#define HAOCAPILIGF_DGGDFIKDJND_OFFSET UNITYSDK_OFFSET(0x16B21D90)
#define HAOCAPILIGF_EHDGLEDIFNN_OFFSET UNITYSDK_OFFSET(0x16B22BF0)
#define HAOCAPILIGF_EJDBGGKGPJD_OFFSET UNITYSDK_OFFSET(0x16B22360)
#define HAOCAPILIGF_EKNDGDHELDM_OFFSET UNITYSDK_OFFSET(0x16B20C70)
#define HAOCAPILIGF_EPPICCENEHE_OFFSET UNITYSDK_OFFSET(0x16B22D40)
#define HAOCAPILIGF_FCEHPGJKPEN_OFFSET UNITYSDK_OFFSET(0x16B20E10)
#define HAOCAPILIGF_FFEKHOKHAJN_OFFSET UNITYSDK_OFFSET(0x16B22980)
#define HAOCAPILIGF_GANONNBLMBC_OFFSET UNITYSDK_OFFSET(0x16B214B0)
#define HAOCAPILIGF_GCFJKNOPOJP_OFFSET UNITYSDK_OFFSET(0x16B21F80)
#define HAOCAPILIGF_GOFEAGLOPFJ_OFFSET UNITYSDK_OFFSET(0x16B22AB0)
#define HAOCAPILIGF_HEEDDMNBJFG_OFFSET UNITYSDK_OFFSET(0x16B1FE60)
#define HAOCAPILIGF_HEKAONCELEP_OFFSET UNITYSDK_OFFSET(0x16B224A0)
#define HAOCAPILIGF_HEPIBMIGHAC_OFFSET UNITYSDK_OFFSET(0x16B21EA0)
#define HAOCAPILIGF_IDGENCGNNNL_OFFSET UNITYSDK_OFFSET(0x16B22C80)
#define HAOCAPILIGF_IMOBCCPHHDL_OFFSET UNITYSDK_OFFSET(0x16B221F0)
#define HAOCAPILIGF_IOMPOJEKJOJ_OFFSET UNITYSDK_OFFSET(0x16B1FF10)
#define HAOCAPILIGF_JFIDDAEECPA_OFFSET UNITYSDK_OFFSET(0x16B23010)
#define HAOCAPILIGF_JFKPJMNHBPG_OFFSET UNITYSDK_OFFSET(0x16B22900)
#define HAOCAPILIGF_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x16B20BB0)
#define HAOCAPILIGF_JKNNPOOOINO_OFFSET UNITYSDK_OFFSET(0x16B20170)
#define HAOCAPILIGF_JPHGHAGMEEI_OFFSET UNITYSDK_OFFSET(0x16B22E00)
#define HAOCAPILIGF_KGJOGPABLEN_OFFSET UNITYSDK_OFFSET(0x16B20520)
#define HAOCAPILIGF_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0x16B22EC0)
#define HAOCAPILIGF_KJNODBEBNBO_OFFSET UNITYSDK_OFFSET(0x16B21B60)
#define HAOCAPILIGF_KOLBHPFLGHN_OFFSET UNITYSDK_OFFSET(0x16B22060)
#define HAOCAPILIGF_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x16B21B10)
#define HAOCAPILIGF_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0x16B21820)
#define HAOCAPILIGF_LDKMKOGIADC_OFFSET UNITYSDK_OFFSET(0x16B22B80)
#define HAOCAPILIGF_LGKMLNKILEO_OFFSET UNITYSDK_OFFSET(0x16B21250)
#define HAOCAPILIGF_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x16B1F700)
#define HAOCAPILIGF_MAMPCDKHKKB_OFFSET UNITYSDK_OFFSET(0x16B21990)
#define HAOCAPILIGF_MPFBHIGKDHI_OFFSET UNITYSDK_OFFSET(0x16B20F20)
#define HAOCAPILIGF_MPKLJEEJMBM_OFFSET UNITYSDK_OFFSET(0x16B21660)
#define HAOCAPILIGF_NENIICLLPBF_OFFSET UNITYSDK_OFFSET(0x16B21FF0)
#define HAOCAPILIGF_NMJFANMBGAA_OFFSET UNITYSDK_OFFSET(0x16B1F990)
#define HAOCAPILIGF_OFJPMMBPCJH_OFFSET UNITYSDK_OFFSET(0x16B23190)
#define HAOCAPILIGF_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x16B1F6A0)
#define HAOCAPILIGF_ONRETURN_OFFSET UNITYSDK_OFFSET(0x16B1F930)
#define HAOCAPILIGF_PACMLALABLN_OFFSET UNITYSDK_OFFSET(0x16B203D0)
#define HAOCAPILIGF_PCIGGGFIONB_OFFSET UNITYSDK_OFFSET(0x16B229E0)
#define HAOCAPILIGF__INITVARONCE_OFFSET UNITYSDK_OFFSET(0x16B1FBC0)
#define HAOCAPILIGF__ONBIND_OFFSET UNITYSDK_OFFSET(0x16B1F260)
#define HAOCAPILIGF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x16B20CF0)
#define HAOCAPILIGF__ONINITPARAMS_OFFSET UNITYSDK_OFFSET(0x16B1FA70)
#define HAOCAPILIGF__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x16B1F800)

inline static constexpr unsigned int HAOCAPILIGF_TypeDefinitionIndex = 73824;

	class HAOCAPILIGF : public ::FMPCODLIOLG
	{
	public:
		::GAGGKGFMFPG* NEJJFGIHHCP; // 0x60
		::UnityEngine::RectTransform* LLNGAJECOOL; // 0x68
		::RPG::Client::LocalizedText* OCFIEADGJKH; // 0x70
		::BHBNAJMBAHO* INFKHFPPPCN; // 0x78
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0x80
		::DCGIDEKLGAJ* OJHPCBCOMPH; // 0x88
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0x90
		::DCGIDEKLGAJ* BBKDNMLIICL; // 0x98
		::GAGGKGFMFPG* DGIKLFJCEJF; // 0xA0
		::UnityEngine::Animation* HEOEAFHGHDG; // 0xA8
		::RPG::GameCore::TurnBasedAbilityComponent* PEPAJDNHBNF; // 0xB0
		::CDKKPFHIFLA* NMMGIDOGGGD; // 0xB8
		::DCGIDEKLGAJ* HIDPNDPKDLG; // 0xC0
		::UnityEngine::Animation* KHONICBMFBP; // 0xC8
		::RPG::GameCore::MonsterStanceBarStyle MMCFCBMDGEK; // 0xD0
		::System::Boolean HAKHCANCCKK; // 0xD4
		::System::Boolean NCMNAEHAPNO; // 0xD5
		::System::Byte _padding0[0x2];
		::UnityEngine::Color BGHEJIGECIL; // 0xD8
		::UnityEngine::Color DAJIAPPOMCL; // 0xE8
		::UnityEngine::Color KBAHMFAPDAD; // 0xF8
		::System::Int32 CHDBNDLPHME; // 0x108
		::System::Int32 OJJEBIJFLLD; // 0x10C
		::UnityEngine::Color BNKKPLOJKGM; // 0x110
		::RPG::GameCore::FixPoint KJLPKLMOMKN; // 0x120
		::System::Int32 KIGHKNPHMEN; // 0x128
		::UnityEngine::Color FLNEDEJLHLP; // 0x12C
		::UnityEngine::Color NIFOJHMGDDB; // 0x13C
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

		::System::Void OnAcquire(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_ONACQUIRE_OFFSET))(this, a1);
		}

		::System::Void OnReturn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_ONRETURN_OFFSET))(this);
		}

		::System::Void NMJFANMBGAA(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HAOCAPILIGF_NMJFANMBGAA_OFFSET))(this, a1);
		}

		::System::Void CNDBBJJHMOF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_CNDBBJJHMOF_OFFSET))(this);
		}

		::System::Void _OnInitParams(::IGKFNIEJGLM a1)
		{
			return ((::System::Void(*)(::PVOID, ::IGKFNIEJGLM))((::PBYTE)hIl2Cpp + HAOCAPILIGF__ONINITPARAMS_OFFSET))(this, a1);
		}

		::System::Void _InitVarOnce()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF__INITVARONCE_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF__SETUPVIEW_OFFSET))(this);
		}

		::System::Void JIABCJLODJI(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + HAOCAPILIGF_JIABCJLODJI_OFFSET))(this, a1);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF__ONDISPOSE_OFFSET))(this);
		}

		::System::Void FCEHPGJKPEN(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_FCEHPGJKPEN_OFFSET))(this, a1);
		}

		::System::Void MPFBHIGKDHI(::RPG::GameCore::AbilityCurrentStanceChange* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::AbilityCurrentStanceChange*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_MPFBHIGKDHI_OFFSET))(this, a1);
		}

		::System::Void MPKLJEEJMBM(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_MPKLJEEJMBM_OFFSET))(this, a1);
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

		::System::Void LBPHINKONCH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_LBPHINKONCH_OFFSET))(this);
		}

		::System::Void BJHKJBMJEJN(::PMGOFCCJEDE* a1)
		{
			return ((::System::Void(*)(::PVOID, ::PMGOFCCJEDE*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_BJHKJBMJEJN_OFFSET))(this, a1);
		}

		::System::Void LIDKFDENKAP(::RPG::GameCore::GameEntity* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_LIDKFDENKAP_OFFSET))(this, a1);
		}

		::System::Void DGGDFIKDJND()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_DGGDFIKDJND_OFFSET))(this);
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

		::System::Void HEPIBMIGHAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_HEPIBMIGHAC_OFFSET))(this);
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

		::System::Void LDKMKOGIADC(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + HAOCAPILIGF_LDKMKOGIADC_OFFSET))(this, a1);
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

		::System::Void KGJOGPABLEN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_KGJOGPABLEN_OFFSET))(this);
		}

		::System::Boolean EHDGLEDIFNN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + HAOCAPILIGF_EHDGLEDIFNN_OFFSET))(this);
		}

		::System::Void IDGENCGNNNL(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_IDGENCGNNNL_OFFSET))(this, a1);
		}

		::System::Void EPPICCENEHE(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_EPPICCENEHE_OFFSET))(this, a1);
		}

		::System::Void JPHGHAGMEEI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_JPHGHAGMEEI_OFFSET))(this, a1);
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

		::System::Void DDCDDLKFKNI(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_DDCDDLKFKNI_OFFSET))(this, a1);
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

	};
