#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KDEGMCDDMKF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x130B17A0)
#define KDEGMCDDMKF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x130B16B0)
#define KDEGMCDDMKF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x130B14B0)
#define KDEGMCDDMKF__CTOR_OFFSET UNITYSDK_OFFSET(0x130B1790)

inline static constexpr unsigned int KDEGMCDDMKF_TypeDefinitionIndex = 43657;

class KDEGMCDDMKF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* ONDCEOKGKCK; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::UnityEngine::GameObject* IOAAHPKLJMO; // 0x28
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x38
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* JHGGHHOJDPF; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGMCDDMKF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KDEGMCDDMKF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KDEGMCDDMKF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDEGMCDDMKF_KGEBDLGBGNM_OFFSET))(this);
	}
};
