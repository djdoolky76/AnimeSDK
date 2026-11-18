#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NKLLJDDENIP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x105C6B90)
#define NKLLJDDENIP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x105C6AC0)
#define NKLLJDDENIP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x105C68C0)
#define NKLLJDDENIP__CTOR_OFFSET UNITYSDK_OFFSET(0x105C6B80)

inline static constexpr unsigned int NKLLJDDENIP_TypeDefinitionIndex = 58718;

class NKLLJDDENIP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* FMENAEHGODC; // 0x18
	::UnityEngine::Transform* IGAFCKEHDCD; // 0x20
	::UnityEngine::Transform* ILIEPFHBJIH; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BJJDPEIKNBB; // 0x30
	::LGINJIKKBJA* LGBEGNMEBOK; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* ECPLDIANLJL; // 0x40
	::UnityEngine::Transform* IKJJIPDPICB; // 0x48
	::UnityEngine::Transform* DJJNFOEEFMG; // 0x50
	::UnityEngine::Transform* BLIKPBHEJMO; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLLJDDENIP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NKLLJDDENIP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NKLLJDDENIP_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NKLLJDDENIP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
