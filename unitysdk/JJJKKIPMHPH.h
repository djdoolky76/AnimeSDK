#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
class NHFJJFFCDFM;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
template <typename T> class KNLFLMMHALL_1;

#define JJJKKIPMHPH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17B2A440)
#define JJJKKIPMHPH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17B2A370)
#define JJJKKIPMHPH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17B2A0F0)
#define JJJKKIPMHPH__CTOR_OFFSET UNITYSDK_OFFSET(0x17B2A430)

inline static constexpr unsigned int JJJKKIPMHPH_TypeDefinitionIndex = 88243;

class JJJKKIPMHPH : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* BKDDKDMILCA; // 0x18
	::UnityEngine::RectTransform* DCIHJGNOBHG; // 0x20
	::MonoUITableScrollV2* NIBIILNAFDM; // 0x28
	::MoleMole::MonoGamepadNavigatableList* GGEIAKCJAJB; // 0x30
	::UnityEngine::Transform* JGDNFGKLEJL; // 0x38
	::UnityEngine::RectTransform* AIPKDFCGCMA; // 0x40
	::UnityEngine::RectTransform* MAFHCNEKEKD; // 0x48
	::UnityEngine::CanvasGroup* MPKDBGOEFBE; // 0x50
	::LGINJIKKBJA* AAHNKDCBAKG; // 0x58
	::MonoUITableScrollV2* JGMGAHMLNON; // 0x60
	::UnityEngine::Transform* EMJJOGHNPDE; // 0x68
	::KNLFLMMHALL_1<::NHFJJFFCDFM*>* AFMFNPNJNAJ; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJKKIPMHPH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JJJKKIPMHPH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JJJKKIPMHPH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJJKKIPMHPH_KGEBDLGBGNM_OFFSET))(this);
	}
};
