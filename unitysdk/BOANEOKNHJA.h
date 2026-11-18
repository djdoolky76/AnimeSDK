#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define BOANEOKNHJA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16932910)
#define BOANEOKNHJA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16932880)
#define BOANEOKNHJA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x169326E0)
#define BOANEOKNHJA__CTOR_OFFSET UNITYSDK_OFFSET(0x16932900)

inline static constexpr unsigned int BOANEOKNHJA_TypeDefinitionIndex = 82298;

class BOANEOKNHJA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* EPJNLBHLMCO; // 0x18
	::UnityEngine::RectTransform* JNADFFOLDGP; // 0x20
	::UnityEngine::RectTransform* IMAHDBILHFL; // 0x28
	::LGINJIKKBJA* EGGGDOOKOFA; // 0x30
	::UnityEngine::RectTransform* CHDHLLNDGIN; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOANEOKNHJA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BOANEOKNHJA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOANEOKNHJA_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BOANEOKNHJA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
