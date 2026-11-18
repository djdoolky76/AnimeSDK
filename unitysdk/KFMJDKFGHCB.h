#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OBACOLPIJFF.h"
#include "unitysdk/UnityEngine/Vector3.h"

class GEIHCPAOKKK;
class JAMHKEHPEGD;
class KFMJDKFGHCB_JIOODIPLKMO;
namespace MoleMole::Battle { class Entity; }
namespace MoleMole::MiniGame::BangbooPartyGame { class MonoBangbooPartyAIPathPoint; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KFMJDKFGHCB_BFDDMMMCPFN_OFFSET UNITYSDK_OFFSET(0x13C59400)
#define KFMJDKFGHCB_BHFPFAIEDFO_OFFSET UNITYSDK_OFFSET(0x13C56660)
#define KFMJDKFGHCB_CHEGHCGNLFG_OFFSET UNITYSDK_OFFSET(0x13C566D0)
#define KFMJDKFGHCB_CMFOMGGDPPA_OFFSET UNITYSDK_OFFSET(0x13C592D0)
#define KFMJDKFGHCB_DBGNGOIDFDG_OFFSET UNITYSDK_OFFSET(0x13C57F00)
#define KFMJDKFGHCB_DDCIHEKOAPP_OFFSET UNITYSDK_OFFSET(0x13C58D70)
#define KFMJDKFGHCB_ELNLKJCGBAF_OFFSET UNITYSDK_OFFSET(0x13C58FA0)
#define KFMJDKFGHCB_FCMAMJFNJJC_OFFSET UNITYSDK_OFFSET(0x13C57E20)
#define KFMJDKFGHCB_FLKCEKGCMAA_OFFSET UNITYSDK_OFFSET(0x13C591B0)
#define KFMJDKFGHCB_GJJFNKAGOEO_OFFSET UNITYSDK_OFFSET(0x13C58150)
#define KFMJDKFGHCB_HHNPPJBJPAE_OFFSET UNITYSDK_OFFSET(0x13C59370)
#define KFMJDKFGHCB_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x13C59060)
#define KFMJDKFGHCB_ICEFELAKHBM_OFFSET UNITYSDK_OFFSET(0x13C59240)
#define KFMJDKFGHCB_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x13C59120)
#define KFMJDKFGHCB_KJDFICNBBNK_OFFSET UNITYSDK_OFFSET(0x13C563C0)
#define KFMJDKFGHCB_LCIHOGMKHKN_OFFSET UNITYSDK_OFFSET(0x13C561C0)
#define KFMJDKFGHCB_LKJKNCFLMFI_OFFSET UNITYSDK_OFFSET(0x13C57AF0)
#define KFMJDKFGHCB_NDPMFCDLMFM_OFFSET UNITYSDK_OFFSET(0x13C56170)
#define KFMJDKFGHCB_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x13C56810)
#define KFMJDKFGHCB_PGMAAJNCLNM_OFFSET UNITYSDK_OFFSET(0x13C58750)
#define KFMJDKFGHCB__CCTOR_OFFSET UNITYSDK_OFFSET(0x13C59100)
#define KFMJDKFGHCB__CTOR_OFFSET UNITYSDK_OFFSET(0x13C560A0)

inline static constexpr unsigned int KFMJDKFGHCB_TypeDefinitionIndex = 57603;

class KFMJDKFGHCB : public ::OBACOLPIJFF
{
public:
	static ::System::Single* StaticGet_IHLHPAMDLFN()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(KFMJDKFGHCB_TypeDefinitionIndex)->GetStaticField(0x13170);
	}
	static ::System::Single* StaticGet_IMIEJGEBPCH()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(KFMJDKFGHCB_TypeDefinitionIndex)->GetStaticField(0x13174);
	}
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::Object*>* DLPCFOKOEDO; // 0x10
	::JAMHKEHPEGD* DJIDBKNFNEC; // 0x18
	::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>* HFILDKHDPHP; // 0x20

	::System::Void _ctor(::JAMHKEHPEGD* KFJNBMIFJNC)
	{
		return ((::System::Void(*)(::PVOID, ::JAMHKEHPEGD*))((::PBYTE)hIl2Cpp + KFMJDKFGHCB__CTOR_OFFSET))(this, KFJNBMIFJNC);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + KFMJDKFGHCB__CCTOR_OFFSET))();
	}

	::System::Void NDPMFCDLMFM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_NDPMFCDLMFM_OFFSET))(this);
	}

	::System::Void KJDFICNBBNK(::MoleMole::Battle::Entity* CGELPKBKHOJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_KJDFICNBBNK_OFFSET))(this, CGELPKBKHOJ);
	}

	::System::Void BHFPFAIEDFO(::MoleMole::Battle::Entity* CGELPKBKHOJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_BHFPFAIEDFO_OFFSET))(this, CGELPKBKHOJ);
	}

	::System::Void CHEGHCGNLFG(::MoleMole::Battle::Entity* KECKGDFIALJ)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_CHEGHCGNLFG_OFFSET))(this, KECKGDFIALJ);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void LCIHOGMKHKN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_LCIHOGMKHKN_OFFSET))(this);
	}

	::System::Void GJJFNKAGOEO(::GEIHCPAOKKK* BIEHMPHDGCO, ::KFMJDKFGHCB_JIOODIPLKMO* FJBJHJEFHFM)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::KFMJDKFGHCB_JIOODIPLKMO*))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_GJJFNKAGOEO_OFFSET))(this, BIEHMPHDGCO, FJBJHJEFHFM);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void LKJKNCFLMFI(::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint* KIAIIPAMCBC, ::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>*& MCMKHKAGALM)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*, ::System::Collections::Generic::List_1<::MoleMole::MiniGame::BangbooPartyGame::MonoBangbooPartyAIPathPoint*>*&))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_LKJKNCFLMFI_OFFSET))(this, KIAIIPAMCBC, MCMKHKAGALM);
	}

	::System::Void FLKCEKGCMAA(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_FLKCEKGCMAA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void ICEFELAKHBM(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_ICEFELAKHBM_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Boolean FCMAMJFNJJC(::UnityEngine::Vector3 GKOEEJHILPG, ::UnityEngine::Vector3 IACKHFCLPJI)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_FCMAMJFNJJC_OFFSET))(this, GKOEEJHILPG, IACKHFCLPJI);
	}

	::System::Void CMFOMGGDPPA(::System::Single MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_CMFOMGGDPPA_OFFSET))(this, MIALFKCCCPI);
	}

	::System::Void PGMAAJNCLNM(::GEIHCPAOKKK* BIEHMPHDGCO, ::KFMJDKFGHCB_JIOODIPLKMO* FJBJHJEFHFM)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::KFMJDKFGHCB_JIOODIPLKMO*))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_PGMAAJNCLNM_OFFSET))(this, BIEHMPHDGCO, FJBJHJEFHFM);
	}

	::System::Void DDCIHEKOAPP(::KFMJDKFGHCB_JIOODIPLKMO* FJBJHJEFHFM)
	{
		return ((::System::Void(*)(::PVOID, ::KFMJDKFGHCB_JIOODIPLKMO*))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_DDCIHEKOAPP_OFFSET))(this, FJBJHJEFHFM);
	}

	::System::Void DBGNGOIDFDG(::KFMJDKFGHCB_JIOODIPLKMO* FJBJHJEFHFM)
	{
		return ((::System::Void(*)(::PVOID, ::KFMJDKFGHCB_JIOODIPLKMO*))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_DBGNGOIDFDG_OFFSET))(this, FJBJHJEFHFM);
	}

	::System::Void HHNPPJBJPAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_HHNPPJBJPAE_OFFSET))(this);
	}

	::System::Void ELNLKJCGBAF(::GEIHCPAOKKK* OHPJHPEOFLD, ::KFMJDKFGHCB_JIOODIPLKMO* FJBJHJEFHFM)
	{
		return ((::System::Void(*)(::PVOID, ::GEIHCPAOKKK*, ::KFMJDKFGHCB_JIOODIPLKMO*))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_ELNLKJCGBAF_OFFSET))(this, OHPJHPEOFLD, FJBJHJEFHFM);
	}

	::System::Void BFDDMMMCPFN(::MoleMole::Battle::Entity* MIALFKCCCPI)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Battle::Entity*))((::PBYTE)hIl2Cpp + KFMJDKFGHCB_BFDDMMMCPFN_OFFSET))(this, MIALFKCCCPI);
	}
};
