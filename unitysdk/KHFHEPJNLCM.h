#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KHFHEPJNLCM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x17710190)
#define KHFHEPJNLCM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x17710080)
#define KHFHEPJNLCM__CTOR_OFFSET UNITYSDK_OFFSET(0x17710180)

inline static constexpr unsigned int KHFHEPJNLCM_TypeDefinitionIndex = 48177;

class KHFHEPJNLCM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* AAJIHFCEABI; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* HIHBKFLCOAC; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* OOBHLNGHJMA; // 0x30
	::UnityEngine::RectTransform* HKEOAPODEHP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHFHEPJNLCM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KHFHEPJNLCM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KHFHEPJNLCM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
