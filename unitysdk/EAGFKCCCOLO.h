#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define EAGFKCCCOLO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13533A80)
#define EAGFKCCCOLO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13533970)
#define EAGFKCCCOLO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x135337D0)
#define EAGFKCCCOLO__CTOR_OFFSET UNITYSDK_OFFSET(0x13533A70)

inline static constexpr unsigned int EAGFKCCCOLO_TypeDefinitionIndex = 56592;

class EAGFKCCCOLO : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* IGAGINDJKCH; // 0x18
	::FGCOIBFFCHB* HMHPLOLDMFN; // 0x20
	::FGCOIBFFCHB* INKDOEOKCNF; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* FBGFDNDEPIF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGFKCCCOLO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EAGFKCCCOLO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EAGFKCCCOLO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EAGFKCCCOLO_KGEBDLGBGNM_OFFSET))(this);
	}
};
