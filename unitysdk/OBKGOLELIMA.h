#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OBKGOLELIMA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE0E6370)
#define OBKGOLELIMA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xE0E62C0)
#define OBKGOLELIMA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE0E60B0)
#define OBKGOLELIMA__CTOR_OFFSET UNITYSDK_OFFSET(0xE0E6360)

inline static constexpr unsigned int OBKGOLELIMA_TypeDefinitionIndex = 53740;

class OBKGOLELIMA : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* MCBLBOLNFPL; // 0x18
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x20
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x28
	::UnityEngine::RectTransform* PDMJFIBMIKA; // 0x30
	::UnityEngine::GameObject* OMFJGKJNKOI; // 0x38
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x40
	::LGINJIKKBJA* MDHOCAOPCEC; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKGOLELIMA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OBKGOLELIMA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OBKGOLELIMA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBKGOLELIMA_KGEBDLGBGNM_OFFSET))(this);
	}
};
