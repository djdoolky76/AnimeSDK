#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KJELKHJMKAB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1765DE00)
#define KJELKHJMKAB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1765DCF0)
#define KJELKHJMKAB__CTOR_OFFSET UNITYSDK_OFFSET(0x1765DDF0)

inline static constexpr unsigned int KJELKHJMKAB_TypeDefinitionIndex = 77995;

class KJELKHJMKAB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* NGCBBIENDHO; // 0x18
	::UnityEngine::GameObject* EHCFMIOELLO; // 0x20
	::UnityEngine::GameObject* JLLJPNMPKJA; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* EKDFLECLNHE; // 0x30
	::UnityEngine::Animation* FNPLEPMLABP; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KJELKHJMKAB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJELKHJMKAB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KJELKHJMKAB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
