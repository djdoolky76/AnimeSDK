#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define GOEBNBHPEAL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x18164620)
#define GOEBNBHPEAL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x18164590)
#define GOEBNBHPEAL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x181643F0)
#define GOEBNBHPEAL__CTOR_OFFSET UNITYSDK_OFFSET(0x18164610)

inline static constexpr unsigned int GOEBNBHPEAL_TypeDefinitionIndex = 69176;

class GOEBNBHPEAL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* FGFHALJAFBE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* LFBMJMODNKN; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* CCPLIMCODMH; // 0x28
	::FGCOIBFFCHB* HKGLBJHDCMO; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* AMEEMEPHGEL; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEBNBHPEAL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOEBNBHPEAL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GOEBNBHPEAL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GOEBNBHPEAL_KGEBDLGBGNM_OFFSET))(this);
	}
};
