#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define IHFDBCLNJIB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1A3A1FE0)
#define IHFDBCLNJIB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1A3A1F20)
#define IHFDBCLNJIB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3A1FD0)

inline static constexpr unsigned int IHFDBCLNJIB_TypeDefinitionIndex = 83084;

class IHFDBCLNJIB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* GCDICMMDPPG; // 0x18
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IHFDBCLNJIB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHFDBCLNJIB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IHFDBCLNJIB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
