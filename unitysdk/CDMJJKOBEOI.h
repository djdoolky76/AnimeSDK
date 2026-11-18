#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CDMJJKOBEOI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16A12B80)
#define CDMJJKOBEOI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16A12A80)
#define CDMJJKOBEOI__CTOR_OFFSET UNITYSDK_OFFSET(0x16A12B70)

inline static constexpr unsigned int CDMJJKOBEOI_TypeDefinitionIndex = 47064;

class CDMJJKOBEOI : public ::GIBMJLOJLKD
{
public:
	::MoleMole::UIGeneralButtonController* NBFCNDIFJHF; // 0x18
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x20
	::UnityEngine::RectTransform* DEIPJONPFNG; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* HJMOFMLMAOE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CDMJJKOBEOI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDMJJKOBEOI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CDMJJKOBEOI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
