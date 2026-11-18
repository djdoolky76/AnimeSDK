#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JCLNBJCNBGG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13ABFF40)
#define JCLNBJCNBGG_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13ABFE90)
#define JCLNBJCNBGG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13ABFD00)
#define JCLNBJCNBGG__CTOR_OFFSET UNITYSDK_OFFSET(0x13ABFF30)

inline static constexpr unsigned int JCLNBJCNBGG_TypeDefinitionIndex = 90730;

class JCLNBJCNBGG : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* PLHFEEBKFJF; // 0x18
	::FGCOIBFFCHB* POPGLGEDFFG; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x28
	::FGCOIBFFCHB* HIKHFOHLCIB; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLNBJCNBGG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JCLNBJCNBGG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JCLNBJCNBGG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCLNBJCNBGG_KGEBDLGBGNM_OFFSET))(this);
	}
};
