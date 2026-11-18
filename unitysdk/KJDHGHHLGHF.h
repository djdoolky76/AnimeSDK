#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define KJDHGHHLGHF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x16812E10)
#define KJDHGHHLGHF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16812D50)
#define KJDHGHHLGHF__CTOR_OFFSET UNITYSDK_OFFSET(0x16812E00)

inline static constexpr unsigned int KJDHGHHLGHF_TypeDefinitionIndex = 72917;

class KJDHGHHLGHF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* HBADNCJHEOJ; // 0x18
	::UnityEngine::UI::Text* MGEDBKBHJPM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJDHGHHLGHF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJDHGHHLGHF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJDHGHHLGHF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
