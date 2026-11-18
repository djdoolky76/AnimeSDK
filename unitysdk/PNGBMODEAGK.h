#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define PNGBMODEAGK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1D9D6950)
#define PNGBMODEAGK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1D9D6870)
#define PNGBMODEAGK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D9D6940)

inline static constexpr unsigned int PNGBMODEAGK_TypeDefinitionIndex = 85534;

class PNGBMODEAGK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* PNDHOGLJAHH; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20
	::UnityEngine::RectTransform* FDJHEBHLJLD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNGBMODEAGK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNGBMODEAGK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNGBMODEAGK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
