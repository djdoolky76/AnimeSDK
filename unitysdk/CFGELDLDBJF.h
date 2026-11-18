#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CFGELDLDBJF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x132577A0)
#define CFGELDLDBJF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x132576A0)
#define CFGELDLDBJF__CTOR_OFFSET UNITYSDK_OFFSET(0x13257790)

inline static constexpr unsigned int CFGELDLDBJF_TypeDefinitionIndex = 54078;

class CFGELDLDBJF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::RectTransform* IODBDPOLPKA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* DEMGHPAAOKC; // 0x20
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CFGELDLDBJF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFGELDLDBJF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CFGELDLDBJF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
