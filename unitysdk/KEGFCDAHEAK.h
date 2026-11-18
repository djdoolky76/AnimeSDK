#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }

#define KEGFCDAHEAK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1860BC20)
#define KEGFCDAHEAK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1860BB50)
#define KEGFCDAHEAK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1860B8A0)
#define KEGFCDAHEAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1860BC10)

inline static constexpr unsigned int KEGFCDAHEAK_TypeDefinitionIndex = 40286;

class KEGFCDAHEAK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* ODKGAHDFMAP; // 0x18
	::UnityEngine::GameObject* BAIBLEJJNMI; // 0x20
	::FGCOIBFFCHB* LFPIAMKMOFN; // 0x28
	::UnityEngine::GameObject* NDPFKBKABLI; // 0x30
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x38
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x40
	::UnityEngine::GameObject* JOFNFMLJPGP; // 0x48
	::UnityEngine::GameObject* NKAGKIILBDN; // 0x50
	::MoleMole::NotificationBadgeEx* PLJOGPIBEIA; // 0x58
	::LGINJIKKBJA* LAFBOBNNAMP; // 0x60
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x68
	::UnityEngine::GameObject* HKLINGLNGAL; // 0x70
	::UnityEngine::GameObject* NLNAHDIJEDM; // 0x78
	::LGINJIKKBJA* BPPCNBHJLCH; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGFCDAHEAK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KEGFCDAHEAK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KEGFCDAHEAK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KEGFCDAHEAK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
