#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define FDMHNCFFCAO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132049A0)
#define FDMHNCFFCAO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13204910)
#define FDMHNCFFCAO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13204790)
#define FDMHNCFFCAO__CTOR_OFFSET UNITYSDK_OFFSET(0x13204990)

inline static constexpr unsigned int FDMHNCFFCAO_TypeDefinitionIndex = 72208;

class FDMHNCFFCAO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* DAJDJJCGAKK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x20
	::UnityEngine::RectTransform* FBDMDGMCPOA; // 0x28
	::UnityEngine::RectTransform* LNFCNHNJLEF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDMHNCFFCAO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDMHNCFFCAO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FDMHNCFFCAO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FDMHNCFFCAO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
