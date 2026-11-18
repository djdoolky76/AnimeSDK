#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HHHGKMBODII_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17A460A0)
#define HHHGKMBODII_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x17A45FB0)
#define HHHGKMBODII_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17A45DB0)
#define HHHGKMBODII__CTOR_OFFSET UNITYSDK_OFFSET(0x17A46090)

inline static constexpr unsigned int HHHGKMBODII_TypeDefinitionIndex = 83343;

class HHHGKMBODII : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* FDDAMLEALPJ; // 0x18
	::UnityEngine::Transform* FIOPMNMJBCG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* CAFHFLHHAJK; // 0x30
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x38
	::UnityEngine::RectTransform* EKGCNEJNDJN; // 0x40
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHGKMBODII__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHHGKMBODII_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHHGKMBODII_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHHGKMBODII_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
