#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define ECOKLKJEEAL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x148C85E0)
#define ECOKLKJEEAL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x148C8540)
#define ECOKLKJEEAL__CTOR_OFFSET UNITYSDK_OFFSET(0x148C85D0)

inline static constexpr unsigned int ECOKLKJEEAL_TypeDefinitionIndex = 58792;

class ECOKLKJEEAL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* LFJLBDDCHPN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ECOKLKJEEAL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECOKLKJEEAL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + ECOKLKJEEAL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
