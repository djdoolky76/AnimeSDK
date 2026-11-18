#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define BFFKLFIPBPH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12683940)
#define BFFKLFIPBPH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12683870)
#define BFFKLFIPBPH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12683660)
#define BFFKLFIPBPH__CTOR_OFFSET UNITYSDK_OFFSET(0x12683930)

inline static constexpr unsigned int BFFKLFIPBPH_TypeDefinitionIndex = 91155;

class BFFKLFIPBPH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x18
	::FGCOIBFFCHB* BFCKCCMHGIG; // 0x20
	::UnityEngine::GameObject* PDACHPLBKIE; // 0x28
	::UnityEngine::GameObject* BFGEEJANJLG; // 0x30
	::FGCOIBFFCHB* KKOJIGEFPBM; // 0x38
	::GCIMMDDIFBJ* IGBMAGGIDHN; // 0x40
	::FGCOIBFFCHB* JGIHKLDGPPG; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFKLFIPBPH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFFKLFIPBPH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BFFKLFIPBPH_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BFFKLFIPBPH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
