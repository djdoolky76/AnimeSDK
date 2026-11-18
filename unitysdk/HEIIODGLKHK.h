#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HEIIODGLKHK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x19E0A2C0)
#define HEIIODGLKHK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x19E0A1B0)
#define HEIIODGLKHK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x19E09FE0)
#define HEIIODGLKHK__CTOR_OFFSET UNITYSDK_OFFSET(0x19E0A2B0)

inline static constexpr unsigned int HEIIODGLKHK_TypeDefinitionIndex = 82647;

class HEIIODGLKHK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BPPHBMJJAEC; // 0x18
	::LGINJIKKBJA* OBNGOBFMMHJ; // 0x20
	::UnityEngine::Transform* KAPJKBCBNHC; // 0x28
	::FGCOIBFFCHB* HLFNJGFNICM; // 0x30
	::FGCOIBFFCHB* FDJINHBENNC; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIIODGLKHK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEIIODGLKHK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HEIIODGLKHK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HEIIODGLKHK_KGEBDLGBGNM_OFFSET))(this);
	}
};
