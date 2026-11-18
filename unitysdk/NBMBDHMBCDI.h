#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define NBMBDHMBCDI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x12FDD2E0)
#define NBMBDHMBCDI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x12FDD250)
#define NBMBDHMBCDI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12FDD0D0)
#define NBMBDHMBCDI__CTOR_OFFSET UNITYSDK_OFFSET(0x12FDD2D0)

inline static constexpr unsigned int NBMBDHMBCDI_TypeDefinitionIndex = 90392;

class NBMBDHMBCDI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x18
	::UnityEngine::RectTransform* OBEMLOACGAF; // 0x20
	::UnityEngine::RectTransform* JLLJPNMPKJA; // 0x28
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMBDHMBCDI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NBMBDHMBCDI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBMBDHMBCDI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NBMBDHMBCDI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
