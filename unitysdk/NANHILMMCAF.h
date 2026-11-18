#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NANHILMMCAF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13ECB880)
#define NANHILMMCAF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13ECB770)
#define NANHILMMCAF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13ECB580)
#define NANHILMMCAF__CTOR_OFFSET UNITYSDK_OFFSET(0x13ECB870)

inline static constexpr unsigned int NANHILMMCAF_TypeDefinitionIndex = 92652;

class NANHILMMCAF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* JOOKGFCFGLL; // 0x18
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x20
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x28
	::FGCOIBFFCHB* BJAOIDNKEOF; // 0x30
	::UnityEngine::RectTransform* HKCAHGGGOOD; // 0x38
	::FGCOIBFFCHB* LBMPDPJKNJH; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANHILMMCAF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NANHILMMCAF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NANHILMMCAF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NANHILMMCAF_KGEBDLGBGNM_OFFSET))(this);
	}
};
