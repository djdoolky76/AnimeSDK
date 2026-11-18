#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OLEIKKFFGOK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B7A5380)
#define OLEIKKFFGOK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B7A5290)
#define OLEIKKFFGOK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B7A5060)
#define OLEIKKFFGOK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7A5370)

inline static constexpr unsigned int OLEIKKFFGOK_TypeDefinitionIndex = 73013;

class OLEIKKFFGOK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MAFBMEHCDFJ; // 0x18
	::UnityEngine::Animation* DHCKPIBEKNB; // 0x20
	::LGINJIKKBJA* ICPJFJLCCHB; // 0x28
	::UnityEngine::GameObject* DPDOFDHIBCP; // 0x30
	::UnityEngine::RectTransform* JFDOOELFAOA; // 0x38
	::UnityEngine::GameObject* AJIBHBJNOCE; // 0x40
	::UnityEngine::GameObject* KKMCLPDAJKJ; // 0x48
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEIKKFFGOK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLEIKKFFGOK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEIKKFFGOK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OLEIKKFFGOK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
