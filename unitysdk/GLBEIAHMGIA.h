#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GLBEIAHMGIA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10FE7F20)
#define GLBEIAHMGIA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10FE7E20)
#define GLBEIAHMGIA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10FE7C10)
#define GLBEIAHMGIA__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE7F10)

inline static constexpr unsigned int GLBEIAHMGIA_TypeDefinitionIndex = 83323;

class GLBEIAHMGIA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* ILOBEELCFOK; // 0x18
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x20
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* JHGGHHOJDPF; // 0x38
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x40
	::FGCOIBFFCHB* OAKLOCDAFEE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBEIAHMGIA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLBEIAHMGIA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GLBEIAHMGIA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GLBEIAHMGIA_KGEBDLGBGNM_OFFSET))(this);
	}
};
