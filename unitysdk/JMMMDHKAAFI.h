#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JMMMDHKAAFI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1C371FA0)
#define JMMMDHKAAFI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1C371E50)
#define JMMMDHKAAFI__CTOR_OFFSET UNITYSDK_OFFSET(0x1C371F90)

inline static constexpr unsigned int JMMMDHKAAFI_TypeDefinitionIndex = 80044;

class JMMMDHKAAFI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* IBMLEPHEBDA; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* JKLABKIHBKP; // 0x20
	::GCIMMDDIFBJ* OIKFFMHNCHB; // 0x28
	::UnityEngine::GameObject* DCJCHGOGLMF; // 0x30
	::UnityEngine::GameObject* DEIPJONPFNG; // 0x38
	::UnityEngine::GameObject* DPNLLKMJMMB; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JMMMDHKAAFI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JMMMDHKAAFI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JMMMDHKAAFI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
