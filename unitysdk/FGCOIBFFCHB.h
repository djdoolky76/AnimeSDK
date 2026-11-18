#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/MPHPFDEODIG.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/UnityEngine/Color.h"

class FAKGOOMIIIO;
class HNLACBJDCGI;
namespace Foundation { template <typename T> class ObjectPool_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI { class Image; }

#define FGCOIBFFCHB_AEJHKCHMCAE_OFFSET UNITYSDK_OFFSET(0x141A3F20)
#define FGCOIBFFCHB_AGCGFJLJICA_OFFSET UNITYSDK_OFFSET(0x141A3C60)
#define FGCOIBFFCHB_AKGNDDMPIEP_OFFSET UNITYSDK_OFFSET(0x141A4830)
#define FGCOIBFFCHB_AOKEOGEHECF_OFFSET UNITYSDK_OFFSET(0x141A4740)
#define FGCOIBFFCHB_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x141A2F50)
#define FGCOIBFFCHB_BDDIOIHBCLI_OFFSET UNITYSDK_OFFSET(0x141A4820)
#define FGCOIBFFCHB_BOJPLKPPGLO_1_OFFSET UNITYSDK_OFFSET(0x141A30D0)
#define FGCOIBFFCHB_BOJPLKPPGLO_OFFSET UNITYSDK_OFFSET(0x141A2C60)
#define FGCOIBFFCHB_CKNLHALOKOC_OFFSET UNITYSDK_OFFSET(0x141A4480)
#define FGCOIBFFCHB_CLEAN_OFFSET UNITYSDK_OFFSET(0x141A21D0)
#define FGCOIBFFCHB_CMBLCGHHPOA_OFFSET UNITYSDK_OFFSET(0x141A3D60)
#define FGCOIBFFCHB_COKNIICCODC_OFFSET UNITYSDK_OFFSET(0x14147030)
#define FGCOIBFFCHB_DJCHGGFFHDC_1_OFFSET UNITYSDK_OFFSET(0x141A3C90)
#define FGCOIBFFCHB_DJCHGGFFHDC_2_OFFSET UNITYSDK_OFFSET(0x141A4D10)
#define FGCOIBFFCHB_DJCHGGFFHDC_OFFSET UNITYSDK_OFFSET(0x141A29A0)
#define FGCOIBFFCHB_EHNNHLANMGI_OFFSET UNITYSDK_OFFSET(0x141A2D70)
#define FGCOIBFFCHB_FFKOPOFKAGP_OFFSET UNITYSDK_OFFSET(0x141A3770)
#define FGCOIBFFCHB_GBEMAHNJACM_OFFSET UNITYSDK_OFFSET(0x141A31D0)
#define FGCOIBFFCHB_GDEKDEMGHEH_OFFSET UNITYSDK_OFFSET(0x141A3D50)
#define FGCOIBFFCHB_GNOACGOMCGJ_OFFSET UNITYSDK_OFFSET(0x141A36F0)
#define FGCOIBFFCHB_HFAGIBCMCCC_OFFSET UNITYSDK_OFFSET(0x141A47A0)
#define FGCOIBFFCHB_HHFACCPEABD_OFFSET UNITYSDK_OFFSET(0x141A22F0)
#define FGCOIBFFCHB_HIJLOLCLHKD_OFFSET UNITYSDK_OFFSET(0x141A3F00)
#define FGCOIBFFCHB_IHIMGBAOBEA_OFFSET UNITYSDK_OFFSET(0x141A3C50)
#define FGCOIBFFCHB_INFMBOBEFME_OFFSET UNITYSDK_OFFSET(0x141A4550)
#define FGCOIBFFCHB_JPCNGNPKDNG_OFFSET UNITYSDK_OFFSET(0x141A4190)
#define FGCOIBFFCHB_KEMEKBOIEFA_OFFSET UNITYSDK_OFFSET(0x141A4120)
#define FGCOIBFFCHB_KGBBBAILLPO_OFFSET UNITYSDK_OFFSET(0x141A2790)
#define FGCOIBFFCHB_KKJFICNFJOP_OFFSET UNITYSDK_OFFSET(0x141A3510)
#define FGCOIBFFCHB_LALMGBDDCFH_OFFSET UNITYSDK_OFFSET(0x141A2BC0)
#define FGCOIBFFCHB_LBMPAIKPDJL_OFFSET UNITYSDK_OFFSET(0x141A28E0)
#define FGCOIBFFCHB_LJNFANAEHHA_OFFSET UNITYSDK_OFFSET(0x141A2850)
#define FGCOIBFFCHB_MEMEDDHIOOJ_OFFSET UNITYSDK_OFFSET(0x141A4530)
#define FGCOIBFFCHB_MJGMMNJBCDC_OFFSET UNITYSDK_OFFSET(0x141A2D50)
#define FGCOIBFFCHB_NIAHNNJBCCJ_OFFSET UNITYSDK_OFFSET(0x141A2F40)
#define FGCOIBFFCHB_NMKMPJDCOLB_OFFSET UNITYSDK_OFFSET(0x141A4660)
#define FGCOIBFFCHB_ODLLAHNHCDD_OFFSET UNITYSDK_OFFSET(0x141A1DB0)
#define FGCOIBFFCHB_OFAPODFLNHM_OFFSET UNITYSDK_OFFSET(0x141A2CE0)
#define FGCOIBFFCHB_OPAEIJFNAIM_1_OFFSET UNITYSDK_OFFSET(0x1414BF20)
#define FGCOIBFFCHB_OPAEIJFNAIM_OFFSET UNITYSDK_OFFSET(0x1414BE30)
#define FGCOIBFFCHB_PEDANHBGIGE_OFFSET UNITYSDK_OFFSET(0x141A2940)
#define FGCOIBFFCHB_PEFGDNLEMEG_1_OFFSET UNITYSDK_OFFSET(0x141A3490)
#define FGCOIBFFCHB_PEFGDNLEMEG_OFFSET UNITYSDK_OFFSET(0x141A33F0)
#define FGCOIBFFCHB_PJDDOIEFNFI_OFFSET UNITYSDK_OFFSET(0x141A4800)
#define FGCOIBFFCHB_PNAAINBNNIE_OFFSET UNITYSDK_OFFSET(0x141A4240)
#define FGCOIBFFCHB_SETGREY_OFFSET UNITYSDK_OFFSET(0x141A1F90)
#define FGCOIBFFCHB__CCTOR_OFFSET UNITYSDK_OFFSET(0x141A26D0)
#define FGCOIBFFCHB__CTOR_OFFSET UNITYSDK_OFFSET(0x141A2670)

inline static constexpr unsigned int FGCOIBFFCHB_TypeDefinitionIndex = 49055;

class FGCOIBFFCHB : public ::MPHPFDEODIG
{
public:
	static ::Foundation::ObjectPool_1<::FGCOIBFFCHB*>** StaticGet_HKHFCCEMOIH()
	{
		return (::Foundation::ObjectPool_1<::FGCOIBFFCHB*>**)Il2CppClass::FromTypeDefinitionIndex(FGCOIBFFCHB_TypeDefinitionIndex)->GetStaticField(0x376E0);
	}
	static ::System::Boolean* StaticGet_ECLEDDKCKOB()
	{
		return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(FGCOIBFFCHB_TypeDefinitionIndex)->GetStaticField(0xC940);
	}
	static ::System::Single* StaticGet_ALPLIPLOOKO()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FGCOIBFFCHB_TypeDefinitionIndex)->GetStaticField(0xC944);
	}
	static ::System::Single* StaticGet_HLPGDBBNPNM()
	{
		return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(FGCOIBFFCHB_TypeDefinitionIndex)->GetStaticField(0xC948);
	}
	::UnityEngine::Material* OIJKKAAIBAJ; // 0x20
	::UnityEngine::Material* HLFGANGNOND; // 0x28
	::UnityEngine::Material* IFLJPJKJEPM; // 0x30
	::UnityEngine::CanvasGroup* HAEHJMCNKJB; // 0x38
	::UnityEngine::Material* ONFOEHCAGKC; // 0x40
	::Foundation::AssetPath FAEEIFFDBCD; // 0x48
	::UnityEngine::UI::Image* LEDEGAFKEJO; // 0x58
	::UnityEngine::Material* EMOEONLLFAK; // 0x60
	::FAKGOOMIIIO* _GKIKBNMLNMI_k__BackingField; // 0x68
	::HNLACBJDCGI* FOLOGOFJHED; // 0x70
	::Foundation::AssetPath LLKLIIAAPFO; // 0x78
	::Foundation::AssetRequestHandle MPCEMICNKGG; // 0x88
	::Foundation::Coroutine::CoroutineHandle IFDJMJDNOLJ; // 0xA8
	::System::Boolean LDOAMBFEMGO; // 0xAC
	::System::Boolean EGAFHENMIGA; // 0xAD

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + FGCOIBFFCHB__CCTOR_OFFSET))();
	}

	::System::Void ODLLAHNHCDD(::System::Boolean EGEGIMGMJHN, ::System::Boolean HHBFNJMGNGD)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_ODLLAHNHCDD_OFFSET))(this, EGEGIMGMJHN, HHBFNJMGNGD);
	}

	::System::Void SetGrey(::System::Boolean LMPCEBHFPOH)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_SETGREY_OFFSET))(this, LMPCEBHFPOH);
	}

	::System::Void Clean()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_CLEAN_OFFSET))(this);
	}

	static ::FGCOIBFFCHB* KGBBBAILLPO()
	{
		return ((::FGCOIBFFCHB*(*)())((::PBYTE)hIl2Cpp + FGCOIBFFCHB_KGBBBAILLPO_OFFSET))();
	}

	::System::Void LJNFANAEHHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_LJNFANAEHHA_OFFSET))(this);
	}

	::System::Void LBMPAIKPDJL(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_LBMPAIKPDJL_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void PEDANHBGIGE(::System::Boolean AHEAEIMIJJK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_PEDANHBGIGE_OFFSET))(this, AHEAEIMIJJK);
	}

	::System::Void DJCHGGFFHDC(::Foundation::AssetPath OIIHCACKLHD, ::System::Action_1<::System::Boolean>* NKIFJCDNCFI, ::System::Boolean FPMFCHEPPIC)
	{
		return ((::System::Void(*)(::PVOID, ::Foundation::AssetPath, ::System::Action_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_DJCHGGFFHDC_OFFSET))(this, OIIHCACKLHD, NKIFJCDNCFI, FPMFCHEPPIC);
	}

	::System::Boolean OPAEIJFNAIM(::System::String* CJBJONJDOLI, ::System::Boolean PIDGGLHACBB, ::System::Boolean CIEPNJFNHML, ::System::Boolean FPMFCHEPPIC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_OPAEIJFNAIM_OFFSET))(this, CJBJONJDOLI, PIDGGLHACBB, CIEPNJFNHML, FPMFCHEPPIC);
	}

	::System::Void LALMGBDDCFH(::System::Boolean MIALFKCCCPI, ::System::Boolean KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_LALMGBDDCFH_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Boolean BOJPLKPPGLO(::Foundation::AssetPath CJBJONJDOLI, ::System::Boolean FPMFCHEPPIC)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_BOJPLKPPGLO_OFFSET))(this, CJBJONJDOLI, FPMFCHEPPIC);
	}

	::System::Void OFAPODFLNHM(::UnityEngine::Color EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_OFAPODFLNHM_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Sprite* MJGMMNJBCDC()
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_MJGMMNJBCDC_OFFSET))(this);
	}

	::System::Boolean OPAEIJFNAIM_1(::Foundation::AssetPath OIIHCACKLHD, ::System::Boolean PIDGGLHACBB, ::System::Boolean CIEPNJFNHML, ::System::Boolean FPMFCHEPPIC)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_OPAEIJFNAIM_1_OFFSET))(this, OIIHCACKLHD, PIDGGLHACBB, CIEPNJFNHML, FPMFCHEPPIC);
	}

	::UnityEngine::UI::Image* NIAHNNJBCCJ()
	{
		return ((::UnityEngine::UI::Image*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_NIAHNNJBCCJ_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::HNLACBJDCGI* JMJGHFAOMNH, ::UnityEngine::UI::Image* CGJEBPGPIHO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_BBOMJDBNHIC_OFFSET))(this, JMJGHFAOMNH, CGJEBPGPIHO);
	}

	::System::Void EHNNHLANMGI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_EHNNHLANMGI_OFFSET))(this);
	}

	::System::Boolean BOJPLKPPGLO_1(::System::String* CJBJONJDOLI, ::System::Boolean FPMFCHEPPIC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_BOJPLKPPGLO_1_OFFSET))(this, CJBJONJDOLI, FPMFCHEPPIC);
	}

	::System::Void GBEMAHNJACM(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_GBEMAHNJACM_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Sprite* PEFGDNLEMEG(::System::String* CJBJONJDOLI)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_PEFGDNLEMEG_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Single KKJFICNFJOP()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_KKJFICNFJOP_OFFSET))(this);
	}

	::System::String* GNOACGOMCGJ()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_GNOACGOMCGJ_OFFSET))(this);
	}

	::System::Boolean FFKOPOFKAGP(::Foundation::AssetPath OIIHCACKLHD)
	{
		return ((::System::Boolean(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_FFKOPOFKAGP_OFFSET))(this, OIIHCACKLHD);
	}

	::System::Boolean IHIMGBAOBEA()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_IHIMGBAOBEA_OFFSET))(this);
	}

	::UnityEngine::Sprite* PEFGDNLEMEG_1(::Foundation::AssetPath CJBJONJDOLI)
	{
		return ((::UnityEngine::Sprite*(*)(::PVOID, ::Foundation::AssetPath))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_PEFGDNLEMEG_1_OFFSET))(this, CJBJONJDOLI);
	}

	::UnityEngine::Color AGCGFJLJICA()
	{
		return ((::UnityEngine::Color(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_AGCGFJLJICA_OFFSET))(this);
	}

	::System::Void DJCHGGFFHDC_1(::System::String* CJBJONJDOLI, ::System::Action_1<::System::Boolean>* NKIFJCDNCFI, ::System::Boolean FPMFCHEPPIC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action_1<::System::Boolean>*, ::System::Boolean))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_DJCHGGFFHDC_1_OFFSET))(this, CJBJONJDOLI, NKIFJCDNCFI, FPMFCHEPPIC);
	}

	static ::FGCOIBFFCHB* COKNIICCODC(::HNLACBJDCGI* JMJGHFAOMNH, ::UnityEngine::UI::Image* CGJEBPGPIHO)
	{
		return ((::FGCOIBFFCHB*(*)(::HNLACBJDCGI*, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_COKNIICCODC_OFFSET))(JMJGHFAOMNH, CGJEBPGPIHO);
	}

	::System::Void GDEKDEMGHEH(::FAKGOOMIIIO* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FAKGOOMIIIO*))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_GDEKDEMGHEH_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void CMBLCGHHPOA(::UnityEngine::Material* MDLNMDJMMJP)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_CMBLCGHHPOA_OFFSET))(this, MDLNMDJMMJP);
	}

	::System::Single HIJLOLCLHKD()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_HIJLOLCLHKD_OFFSET))(this);
	}

	::System::Void AEJHKCHMCAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_AEJHKCHMCAE_OFFSET))(this);
	}

	::System::Void KEMEKBOIEFA(::System::Single EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_KEMEKBOIEFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void JPCNGNPKDNG(::System::String* GJAMAGINFGD, ::MoleMole::TextureSheetType FNOAMBMKGPM, ::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_JPCNGNPKDNG_OFFSET))(this, GJAMAGINFGD, FNOAMBMKGPM, NPPMJEIPMFC);
	}

	::System::Void PNAAINBNNIE(::System::Boolean AKNHLKMDHOJ)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_PNAAINBNNIE_OFFSET))(this, AKNHLKMDHOJ);
	}

	::System::Void CKNLHALOKOC(::System::String* GJAMAGINFGD, ::MoleMole::TextureSheetType FNOAMBMKGPM, ::System::Int32 ABHBKFJKINO)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType, ::System::Int32))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_CKNLHALOKOC_OFFSET))(this, GJAMAGINFGD, FNOAMBMKGPM, ABHBKFJKINO);
	}

	::System::Boolean MEMEDDHIOOJ()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_MEMEDDHIOOJ_OFFSET))(this);
	}

	::System::Void INFMBOBEFME()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_INFMBOBEFME_OFFSET))(this);
	}

	::UnityEngine::Material* AOKEOGEHECF()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_AOKEOGEHECF_OFFSET))(this);
	}

	::System::Void NMKMPJDCOLB(::UnityEngine::Sprite* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Sprite*))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_NMKMPJDCOLB_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void HFAGIBCMCCC(::UnityEngine::Material* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_HFAGIBCMCCC_OFFSET))(this, EGEGIMGMJHN);
	}

	::UnityEngine::Material* PJDDOIEFNFI()
	{
		return ((::UnityEngine::Material*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_PJDDOIEFNFI_OFFSET))(this);
	}

	::FAKGOOMIIIO* BDDIOIHBCLI()
	{
		return ((::FAKGOOMIIIO*(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_BDDIOIHBCLI_OFFSET))(this);
	}

	::System::Void AKGNDDMPIEP(::System::String* GJAMAGINFGD, ::MoleMole::TextureSheetType FNOAMBMKGPM, ::System::Boolean NPPMJEIPMFC)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::MoleMole::TextureSheetType, ::System::Boolean))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_AKGNDDMPIEP_OFFSET))(this, GJAMAGINFGD, FNOAMBMKGPM, NPPMJEIPMFC);
	}

	::System::Void DJCHGGFFHDC_2(::System::String* CJBJONJDOLI)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_DJCHGGFFHDC_2_OFFSET))(this, CJBJONJDOLI);
	}

	::System::Void HHFACCPEABD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FGCOIBFFCHB_HHFACCPEABD_OFFSET))(this);
	}
};
