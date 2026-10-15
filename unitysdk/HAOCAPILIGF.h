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
namespace System { class Tuple; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define HAOCAPILIGF_AGBFAOFEIEA_OFFSET UNITYSDK_OFFSET(0x15B9B6E0)
#define HAOCAPILIGF_AIOJNOHDCDM_OFFSET UNITYSDK_OFFSET(0x15B9AB00)
#define HAOCAPILIGF_AMPJJPMINPN_OFFSET UNITYSDK_OFFSET(0x15B99470)
#define HAOCAPILIGF_AUTOBINDCALLBACK_OFFSET UNITYSDK_OFFSET(0x15B9D320)
#define HAOCAPILIGF_AUTOREMOVECALLBACK_OFFSET UNITYSDK_OFFSET(0x15B9D640)
#define HAOCAPILIGF_BJHKJBMJEJN_OFFSET UNITYSDK_OFFSET(0x15B9B680)
#define HAOCAPILIGF_CAKAEHGIHHO_OFFSET UNITYSDK_OFFSET(0x15B9AC10)
#define HAOCAPILIGF_CCJBBIOCLIM_OFFSET UNITYSDK_OFFSET(0x15B9A740)
#define HAOCAPILIGF_CHEPLDNDOOP_OFFSET UNITYSDK_OFFSET(0x15B98B00)
#define HAOCAPILIGF_CIINDFONDLC_OFFSET UNITYSDK_OFFSET(0x15B9B940)
#define HAOCAPILIGF_CNDBBJJHMOF_OFFSET UNITYSDK_OFFSET(0x15B98F50)
#define HAOCAPILIGF_CTOR_OFFSET UNITYSDK_OFFSET(0x15B9D940)
#define HAOCAPILIGF_DBIEEPLDOGP_OFFSET UNITYSDK_OFFSET(0x15B99690)
#define HAOCAPILIGF_DDCDDLKFKNI_OFFSET UNITYSDK_OFFSET(0x15B9D050)
#define HAOCAPILIGF_DGBGEJOLBEO_OFFSET UNITYSDK_OFFSET(0x15B9CE10)
#define HAOCAPILIGF_DHHDFAAJMMC_OFFSET UNITYSDK_OFFSET(0x15B98FA0)
#define HAOCAPILIGF_DJFLELEAOBK_OFFSET UNITYSDK_OFFSET(0x15B9C1E0)
#define HAOCAPILIGF_EFPCLFPLCCN_OFFSET UNITYSDK_OFFSET(0x15B9B080)
#define HAOCAPILIGF_EHDGLEDIFNN_OFFSET UNITYSDK_OFFSET(0x15B9CA80)
#define HAOCAPILIGF_EJDBGGKGPJD_OFFSET UNITYSDK_OFFSET(0x15B9BB10)
#define HAOCAPILIGF_EKGCGIDIFJJ_OFFSET UNITYSDK_OFFSET(0x15B98E60)
#define HAOCAPILIGF_EKNDGDHELDM_OFFSET UNITYSDK_OFFSET(0x15B9A0C0)
#define HAOCAPILIGF_EPPICCENEHE_OFFSET UNITYSDK_OFFSET(0x15B9CB10)
#define HAOCAPILIGF_FCEHPGJKPEN_OFFSET UNITYSDK_OFFSET(0x15B9ADE0)
#define HAOCAPILIGF_FFEKHOKHAJN_OFFSET UNITYSDK_OFFSET(0x15B9BFE0)
#define HAOCAPILIGF_FMACKGCGJJB_OFFSET UNITYSDK_OFFSET(0x15B9C7A0)
#define HAOCAPILIGF_GANONNBLMBC_OFFSET UNITYSDK_OFFSET(0x15B98D00)
#define HAOCAPILIGF_GCFJKNOPOJP_OFFSET UNITYSDK_OFFSET(0x15B9B740)
#define HAOCAPILIGF_GOFEAGLOPFJ_OFFSET UNITYSDK_OFFSET(0x15B9C110)
#define HAOCAPILIGF_HADCKFDBNPG_OFFSET UNITYSDK_OFFSET(0x15B9D110)
#define HAOCAPILIGF_HEEDDMNBJFG_OFFSET UNITYSDK_OFFSET(0x15B99320)
#define HAOCAPILIGF_HEKAONCELEP_OFFSET UNITYSDK_OFFSET(0x15B9BC50)
#define HAOCAPILIGF_IDGENCGNNNL_OFFSET UNITYSDK_OFFSET(0x15B9CF90)
#define HAOCAPILIGF_IGKOIPNBFBN_OFFSET UNITYSDK_OFFSET(0x15B9B2E0)
#define HAOCAPILIGF_IMOBCCPHHDL_OFFSET UNITYSDK_OFFSET(0x15B9B9A0)
#define HAOCAPILIGF_IOMPOJEKJOJ_OFFSET UNITYSDK_OFFSET(0x15B993D0)
#define HAOCAPILIGF_JFIDDAEECPA_OFFSET UNITYSDK_OFFSET(0x15B9CED0)
#define HAOCAPILIGF_JFKPJMNHBPG_OFFSET UNITYSDK_OFFSET(0x15B9BF60)
#define HAOCAPILIGF_JIABCJLODJI_OFFSET UNITYSDK_OFFSET(0x15B99FF0)
#define HAOCAPILIGF_JKNNPOOOINO_OFFSET UNITYSDK_OFFSET(0x15B995D0)
#define HAOCAPILIGF_JPHGHAGMEEI_OFFSET UNITYSDK_OFFSET(0x15B9CBD0)
#define HAOCAPILIGF_KDLKDJDPAAM_OFFSET UNITYSDK_OFFSET(0x15B9CC90)
#define HAOCAPILIGF_KGJOGPABLEN_OFFSET UNITYSDK_OFFSET(0x15B99980)
#define HAOCAPILIGF_KHNLCACKMAH_OFFSET UNITYSDK_OFFSET(0x15B9CD80)
#define HAOCAPILIGF_KJNODBEBNBO_OFFSET UNITYSDK_OFFSET(0x15B9AF40)
#define HAOCAPILIGF_KOLBHPFLGHN_OFFSET UNITYSDK_OFFSET(0x15B9B820)
#define HAOCAPILIGF_LBPHINKONCH_OFFSET UNITYSDK_OFFSET(0x15B9AEF0)
#define HAOCAPILIGF_LCJLLGBJENF_OFFSET UNITYSDK_OFFSET(0x15B9ABB0)
#define HAOCAPILIGF_LELBGCPANNC_OFFSET UNITYSDK_OFFSET(0x15B9A9B0)
#define HAOCAPILIGF_LGKMLNKILEO_OFFSET UNITYSDK_OFFSET(0x15B9A4F0)
#define HAOCAPILIGF_LIDKFDENKAP_OFFSET UNITYSDK_OFFSET(0x15B98DF0)
#define HAOCAPILIGF_MAMPCDKHKKB_OFFSET UNITYSDK_OFFSET(0x15B9AD20)
#define HAOCAPILIGF_MPFBHIGKDHI_OFFSET UNITYSDK_OFFSET(0x15B9A1C0)
#define HAOCAPILIGF_MPKLJEEJMBM_OFFSET UNITYSDK_OFFSET(0x15B9A8A0)
#define HAOCAPILIGF_NENIICLLPBF_OFFSET UNITYSDK_OFFSET(0x15B9B7B0)
#define HAOCAPILIGF_NIJJPBOIGBI_OFFSET UNITYSDK_OFFSET(0x15B99080)
#define HAOCAPILIGF_OFJPMMBPCJH_OFFSET UNITYSDK_OFFSET(0x15B9D200)
#define HAOCAPILIGF_ONACQUIRE_OFFSET UNITYSDK_OFFSET(0x15B98D50)
#define HAOCAPILIGF_ONRETURN_OFFSET UNITYSDK_OFFSET(0x15B98EF0)
#define HAOCAPILIGF_PACMLALABLN_OFFSET UNITYSDK_OFFSET(0x15B99830)
#define HAOCAPILIGF_PCIGGGFIONB_OFFSET UNITYSDK_OFFSET(0x15B9C040)
#define HAOCAPILIGF__ONBIND_OFFSET UNITYSDK_OFFSET(0x15B988E0)
#define HAOCAPILIGF__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x15B9A160)
#define HAOCAPILIGF___ONSETSTANCEHINTEFFECT_B__39_0_OFFSET UNITYSDK_OFFSET(0x15B9D9A0)

inline static constexpr unsigned int HAOCAPILIGF_TypeDefinitionIndex = 71804;

	class HAOCAPILIGF : public ::FMPCODLIOLG
	{
	public:
		::DCGIDEKLGAJ* BBKDNMLIICL; // 0x60
		::UnityEngine::Animation* KHONICBMFBP; // 0x68
		::DCGIDEKLGAJ* HIDPNDPKDLG; // 0x70
		::RPG::Client::LocalizedText* OCFIEADGJKH; // 0x78
		::UnityEngine::Animation* NANNKBPABNE; // 0x80
		::GAGGKGFMFPG* NEJJFGIHHCP; // 0x88
		::UnityEngine::GameObject* HMKJOJGNMCO; // 0x90
		::BHBNAJMBAHO* INFKHFPPPCN; // 0x98
		::UnityEngine::Transform* PDMEKBDNPLL; // 0xA0
		::UnityEngine::GameObject* GCBKJFLEHCJ; // 0xA8
		::UnityEngine::GameObject* GHKJCIMMOOJ; // 0xB0
		::UnityEngine::RectTransform* LLNGAJECOOL; // 0xB8
		::DCGIDEKLGAJ* OJHPCBCOMPH; // 0xC0
		::UnityEngine::Animation* HEOEAFHGHDG; // 0xC8
		::RPG::GameCore::TurnBasedAbilityComponent* PEPAJDNHBNF; // 0xD0
		::RPG::GameCore::LevelUIComponent* FGCIJADADDA; // 0xD8
		::RPG::GameCore::GameEntity* KAKEIDJDNHJ; // 0xE0
		::UnityEngine::GameObject* GIOILAMAMDP; // 0xE8
		::System::String* FPEIDBPEPDP; // 0xF0
		::RPG::GameCore::MonsterStanceBarStyle MMCFCBMDGEK; // 0xF8
		::System::Int32 KIGHKNPHMEN; // 0xFC
		::UnityEngine::Color BNKKPLOJKGM; // 0x100
		::UnityEngine::Color NIFOJHMGDDB; // 0x110
		::UnityEngine::Color KBAHMFAPDAD; // 0x120
		::System::Int32 OJJEBIJFLLD; // 0x130
		::System::Boolean HAKHCANCCKK; // 0x134
		::System::Boolean PKCJICMHPDG; // 0x135
		::System::Boolean NCMNAEHAPNO; // 0x136
		::System::Byte _padding0[0x1];
		::UnityEngine::Color DAJIAPPOMCL; // 0x138
		::UnityEngine::Color BGHEJIGECIL; // 0x148
		::UnityEngine::Color FLNEDEJLHLP; // 0x158
		::RPG::GameCore::FixPoint KJLPKLMOMKN; // 0x168
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

		::System::Void LELBGCPANNC(::System::Tuple* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Tuple*))((::PBYTE)hIl2Cpp + HAOCAPILIGF_LELBGCPANNC_OFFSET))(this, a1);
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
