#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class FILNFMCNCFE;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MPPHNNHBOMI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x131B1000)
#define MPPHNNHBOMI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x131B0F00)
#define MPPHNNHBOMI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x131B0C60)
#define MPPHNNHBOMI__CTOR_OFFSET UNITYSDK_OFFSET(0x131B0FF0)

inline static constexpr unsigned int MPPHNNHBOMI_TypeDefinitionIndex = 82012;

class MPPHNNHBOMI : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* IPEDBFEEFFE; // 0x18
	::UnityEngine::Transform* ODPHCLMJAOE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* IGMLLFPCOGE; // 0x28
	::UnityEngine::Transform* FDJHEBHLJLD; // 0x30
	::UnityEngine::Transform* MGEDBKBHJPM; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* HPCCLNODIOJ; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* DECNCCKMGFP; // 0x48
	::FILNFMCNCFE* CALJMMPPAOE; // 0x50
	::UnityEngine::RectTransform* LGFIICKCKGO; // 0x58
	::FGCOIBFFCHB* MNPAKJLEMKH; // 0x60
	::FGCOIBFFCHB* AIDNPHEBHCB; // 0x68
	::UnityEngine::UI::Extension::UILocalizationText* JIAPDEAHAMM; // 0x70
	::UnityEngine::Transform* PDACHPLBKIE; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHNNHBOMI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPPHNNHBOMI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MPPHNNHBOMI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MPPHNNHBOMI_KGEBDLGBGNM_OFFSET))(this);
	}
};
