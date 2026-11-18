#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class MEKABAIJMNM_1;

#define ICIMHBNIFDB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16F58AD0)
#define ICIMHBNIFDB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16F58A20)
#define ICIMHBNIFDB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F58870)
#define ICIMHBNIFDB__CTOR_OFFSET UNITYSDK_OFFSET(0x16F58AC0)

inline static constexpr unsigned int ICIMHBNIFDB_TypeDefinitionIndex = 81913;

class ICIMHBNIFDB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* NPAEAAMMIFE; // 0x18
	::FGCOIBFFCHB* OBJMLNLJOJL; // 0x20
	::MEKABAIJMNM_1<::MoleMole::UIGeneralIconCardRarityWidgetController*>* MPPIKJIFCIA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HBADNCJHEOJ; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICIMHBNIFDB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICIMHBNIFDB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ICIMHBNIFDB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ICIMHBNIFDB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
