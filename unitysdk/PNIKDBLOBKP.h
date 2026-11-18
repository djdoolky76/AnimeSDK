#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FILNFMCNCFE;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define PNIKDBLOBKP_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1CB58BD0)
#define PNIKDBLOBKP_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1CB58B20)
#define PNIKDBLOBKP_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1CB58950)
#define PNIKDBLOBKP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB58BC0)

inline static constexpr unsigned int PNIKDBLOBKP_TypeDefinitionIndex = 55096;

class PNIKDBLOBKP : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* FEKAMKHOIMK; // 0x18
	::FILNFMCNCFE* MNHOFEMCLNH; // 0x20
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x30
	::UnityEngine::RectTransform* MMMNEINIFGB; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIKDBLOBKP__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNIKDBLOBKP_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNIKDBLOBKP_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNIKDBLOBKP_KGEBDLGBGNM_OFFSET))(this);
	}
};
