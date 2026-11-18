#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define BCFECDMEDEN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF78B2D0)
#define BCFECDMEDEN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF78B220)
#define BCFECDMEDEN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF78B070)
#define BCFECDMEDEN__CTOR_OFFSET UNITYSDK_OFFSET(0xF78B2C0)

inline static constexpr unsigned int BCFECDMEDEN_TypeDefinitionIndex = 66524;

class BCFECDMEDEN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::CanvasGroup* JMBBEHOMANA; // 0x18
	::FGCOIBFFCHB* BAOBIBPKOEK; // 0x20
	::UnityEngine::RectTransform* KJODNKPHIGL; // 0x28
	::LGINJIKKBJA* KADDHBOOKAC; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFECDMEDEN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCFECDMEDEN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BCFECDMEDEN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BCFECDMEDEN_KGEBDLGBGNM_OFFSET))(this);
	}
};
