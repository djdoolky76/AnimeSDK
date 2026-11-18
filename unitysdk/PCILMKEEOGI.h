#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PCILMKEEOGI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15FFE750)
#define PCILMKEEOGI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15FFE690)
#define PCILMKEEOGI__CTOR_OFFSET UNITYSDK_OFFSET(0x15FFE740)

inline static constexpr unsigned int PCILMKEEOGI_TypeDefinitionIndex = 56936;

class PCILMKEEOGI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* PDACHPLBKIE; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* ACHECKCMIGI; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PCILMKEEOGI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCILMKEEOGI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PCILMKEEOGI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
