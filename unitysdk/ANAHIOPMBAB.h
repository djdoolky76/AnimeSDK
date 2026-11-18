#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define ANAHIOPMBAB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1820F5C0)
#define ANAHIOPMBAB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1820F450)
#define ANAHIOPMBAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1820F5B0)

inline static constexpr unsigned int ANAHIOPMBAB_TypeDefinitionIndex = 76495;

class ANAHIOPMBAB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MLKKFBEOHIB; // 0x18
	::UnityEngine::Animation* GNKIAHNBGKP; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DIGGKOFFAOI; // 0x28
	::UnityEngine::RectTransform* MJMGANKGIFM; // 0x30
	::UnityEngine::RectTransform* OGDHHANGGIG; // 0x38
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* CKHKPHBKAOJ; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* DGJNCIFBOJN; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* PCLNFDNGEBL; // 0x50
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* BIOGEIHKABE; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ANAHIOPMBAB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANAHIOPMBAB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ANAHIOPMBAB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
