#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ICNKMKAFNJD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xF8377D0)
#define ICNKMKAFNJD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0xF837740)
#define ICNKMKAFNJD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xF8375D0)
#define ICNKMKAFNJD__CTOR_OFFSET UNITYSDK_OFFSET(0xF8377C0)

inline static constexpr unsigned int ICNKMKAFNJD_TypeDefinitionIndex = 61570;

class ICNKMKAFNJD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* OAKNODKILCN; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::GameObject* ONOIELFKAIA; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNKMKAFNJD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICNKMKAFNJD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICNKMKAFNJD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICNKMKAFNJD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
