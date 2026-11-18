#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define HIFPODJBGGA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15B4B330)
#define HIFPODJBGGA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15B4B250)
#define HIFPODJBGGA__CTOR_OFFSET UNITYSDK_OFFSET(0x15B4B320)

inline static constexpr unsigned int HIFPODJBGGA_TypeDefinitionIndex = 87383;

class HIFPODJBGGA : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* ODALDIOFMPH; // 0x18
	::UnityEngine::RectTransform* NDPFKBKABLI; // 0x20
	::UnityEngine::RectTransform* GDLCCFGKNBD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HIFPODJBGGA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HIFPODJBGGA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HIFPODJBGGA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
