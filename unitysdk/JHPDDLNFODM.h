#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
class PopText;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define JHPDDLNFODM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x198C9A20)
#define JHPDDLNFODM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x198C98F0)
#define JHPDDLNFODM__CTOR_OFFSET UNITYSDK_OFFSET(0x198C9A10)

inline static constexpr unsigned int JHPDDLNFODM_TypeDefinitionIndex = 60332;

class JHPDDLNFODM : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* MGEDBKBHJPM; // 0x18
	::UnityEngine::CanvasGroup* NOFCCGPPFGD; // 0x20
	::PopText* HJMOFMLMAOE; // 0x28
	::GCIMMDDIFBJ* OBNLBMABFPF; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHPDDLNFODM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JHPDDLNFODM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JHPDDLNFODM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
