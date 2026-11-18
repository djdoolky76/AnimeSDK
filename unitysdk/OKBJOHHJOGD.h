#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define OKBJOHHJOGD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xFB91E20)
#define OKBJOHHJOGD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFB91D20)
#define OKBJOHHJOGD__CTOR_OFFSET UNITYSDK_OFFSET(0xFB91E10)

inline static constexpr unsigned int OKBJOHHJOGD_TypeDefinitionIndex = 40655;

class OKBJOHHJOGD : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* LPDOINNNAKI; // 0x18
	::UnityEngine::RectTransform* KKKFCNKCKOF; // 0x20
	::UnityEngine::RectTransform* GCELCEPBLBK; // 0x28
	::UnityEngine::RectTransform* EJPPIHFOCFM; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OKBJOHHJOGD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKBJOHHJOGD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OKBJOHHJOGD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
