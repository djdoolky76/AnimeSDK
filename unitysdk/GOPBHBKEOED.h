#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class MonoGeneralLevelUpConfig;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIZenkovGemDebuffItemWidgetController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class CBCLGFEGHLJ_1;

#define GOPBHBKEOED_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1491D8E0)
#define GOPBHBKEOED_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1491D850)
#define GOPBHBKEOED_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1491D6A0)
#define GOPBHBKEOED__CTOR_OFFSET UNITYSDK_OFFSET(0x1491D8D0)

inline static constexpr unsigned int GOPBHBKEOED_TypeDefinitionIndex = 50116;

class GOPBHBKEOED : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MDKPGBCBHAF; // 0x18
	::CBCLGFEGHLJ_1<::MoleMole::UIZenkovGemDebuffItemWidgetController*>* BGJEFGOIEAI; // 0x20
	::GCIMMDDIFBJ* HGEBLKNDDPG; // 0x28
	::MonoGeneralLevelUpConfig* AHMFPFACACD; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOPBHBKEOED__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOPBHBKEOED_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOPBHBKEOED_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOPBHBKEOED_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
