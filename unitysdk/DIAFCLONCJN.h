#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIOnlinePlayerItemWidgetController; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define DIAFCLONCJN_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16BA1AB0)
#define DIAFCLONCJN_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16BA1A20)
#define DIAFCLONCJN_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16BA1870)
#define DIAFCLONCJN__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA1AA0)

inline static constexpr unsigned int DIAFCLONCJN_TypeDefinitionIndex = 55603;

class DIAFCLONCJN : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* CAHELPFDKBB; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* ONINOOLKFLE; // 0x20
	::UnityEngine::Transform* CNINGOOJECG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OLJKBIECBBG; // 0x30
	::MEKABAIJMNM_1<::MoleMole::UIOnlinePlayerItemWidgetController*>* AIGIACJFCNM; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAFCLONCJN__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIAFCLONCJN_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIAFCLONCJN_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIAFCLONCJN_KGEBDLGBGNM_OFFSET))(this);
	}
};
