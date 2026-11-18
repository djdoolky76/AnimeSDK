#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define ALKJBMCCNCE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x143B3C40)
#define ALKJBMCCNCE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x143B3B40)
#define ALKJBMCCNCE__CTOR_OFFSET UNITYSDK_OFFSET(0x143B3C30)

inline static constexpr unsigned int ALKJBMCCNCE_TypeDefinitionIndex = 82952;

class ALKJBMCCNCE : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* DBBDKLENOKD; // 0x18
	::UnityEngine::RectTransform* ILCKKCENLEK; // 0x20
	::UnityEngine::RectTransform* EKDFMLKGFDA; // 0x28
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALKJBMCCNCE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ALKJBMCCNCE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ALKJBMCCNCE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
