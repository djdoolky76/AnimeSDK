#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define POIFFKGLFAK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C1E4490)
#define POIFFKGLFAK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1C1E4400)
#define POIFFKGLFAK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C1E41E0)
#define POIFFKGLFAK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C1E4480)

inline static constexpr unsigned int POIFFKGLFAK_TypeDefinitionIndex = 57132;

class POIFFKGLFAK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* JEDGGJKBMMG; // 0x18
	::GCIMMDDIFBJ* HBPKCNJFOPC; // 0x20
	::UnityEngine::Transform* PEFNEBEDKBH; // 0x28
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x30
	::UnityEngine::RectTransform* JFHCMCCHFCK; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x40
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x48
	::MoleMole::MonoInputKey* ENKOLDOMCNA; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIFFKGLFAK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POIFFKGLFAK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POIFFKGLFAK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POIFFKGLFAK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
