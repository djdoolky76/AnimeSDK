#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }

#define MNDNLKPCKAP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x127438C0)
#define MNDNLKPCKAP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x12743800)
#define MNDNLKPCKAP__CTOR_OFFSET UNITYSDK_OFFSET(0x127438B0)

inline static constexpr unsigned int MNDNLKPCKAP_TypeDefinitionIndex = 80998;

class MNDNLKPCKAP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x18
	::UnityEngine::RectTransform* PDACHPLBKIE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MNDNLKPCKAP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNDNLKPCKAP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MNDNLKPCKAP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
