#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class MonoWorldLevelUpConfig;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OBNHPGJKABG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14F60750)
#define OBNHPGJKABG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14F60680)
#define OBNHPGJKABG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14F60470)
#define OBNHPGJKABG__CTOR_OFFSET UNITYSDK_OFFSET(0x14F60740)

inline static constexpr unsigned int OBNHPGJKABG_TypeDefinitionIndex = 89312;

class OBNHPGJKABG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MCHFGDACING; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* ILGLHIEJNEL; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* ONINOOLKFLE; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HCKNFPACNIL; // 0x30
	::UnityEngine::RectTransform* GAEGCEAPHLH; // 0x38
	::UnityEngine::RectTransform* JFJBLJMFEEM; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* CAHELPFDKBB; // 0x48
	::MonoWorldLevelUpConfig* AHMFPFACACD; // 0x50
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* OLJKBIECBBG; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNHPGJKABG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OBNHPGJKABG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OBNHPGJKABG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OBNHPGJKABG_KGEBDLGBGNM_OFFSET))(this);
	}
};
