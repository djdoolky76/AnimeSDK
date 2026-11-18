#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BDOGAGAEJNF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1822E8F0)
#define BDOGAGAEJNF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1822E7E0)
#define BDOGAGAEJNF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1822E610)
#define BDOGAGAEJNF__CTOR_OFFSET UNITYSDK_OFFSET(0x1822E8E0)

inline static constexpr unsigned int BDOGAGAEJNF_TypeDefinitionIndex = 41185;

class BDOGAGAEJNF : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* AAMHMDCJCPA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* KAKFJLCDEAL; // 0x20
	::LGINJIKKBJA* NPOGELIMFKE; // 0x28
	::UnityEngine::GameObject* ANDHLPBLPBG; // 0x30
	::FGCOIBFFCHB* PBNOPGCPMAP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOGAGAEJNF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDOGAGAEJNF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDOGAGAEJNF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BDOGAGAEJNF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
