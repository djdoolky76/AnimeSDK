#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HFDLDBAFGID_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15DA55E0)
#define HFDLDBAFGID_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15DA5550)
#define HFDLDBAFGID_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15DA53B0)
#define HFDLDBAFGID__CTOR_OFFSET UNITYSDK_OFFSET(0x15DA55D0)

inline static constexpr unsigned int HFDLDBAFGID_TypeDefinitionIndex = 45091;

class HFDLDBAFGID : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x18
	::UnityEngine::RectTransform* NDPFKBKABLI; // 0x20
	::UnityEngine::RectTransform* PPMOHEGLEKP; // 0x28
	::LGINJIKKBJA* PMBLECALCKB; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDLDBAFGID__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFDLDBAFGID_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HFDLDBAFGID_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HFDLDBAFGID_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
