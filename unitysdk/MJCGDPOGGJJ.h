#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MJCGDPOGGJJ_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x177C0BA0)
#define MJCGDPOGGJJ_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x177C0A90)
#define MJCGDPOGGJJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x177C08C0)
#define MJCGDPOGGJJ__CTOR_OFFSET UNITYSDK_OFFSET(0x177C0B90)

inline static constexpr unsigned int MJCGDPOGGJJ_TypeDefinitionIndex = 73904;

class MJCGDPOGGJJ : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* FKIIMEJJPBB; // 0x20
	::FGCOIBFFCHB* GPEIBODHMDE; // 0x28
	::UnityEngine::Animation* MLPLDIKDFJL; // 0x30
	::FGCOIBFFCHB* EIMIIOJFCAP; // 0x38
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCGDPOGGJJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJCGDPOGGJJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MJCGDPOGGJJ_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MJCGDPOGGJJ_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
