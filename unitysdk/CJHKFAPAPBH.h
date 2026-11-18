#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CJHKFAPAPBH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x147A66D0)
#define CJHKFAPAPBH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x147A65C0)
#define CJHKFAPAPBH__CTOR_OFFSET UNITYSDK_OFFSET(0x147A66C0)

inline static constexpr unsigned int CJHKFAPAPBH_TypeDefinitionIndex = 90244;

class CJHKFAPAPBH : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* GFHKFLFKKCE; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* PPPNOAPFDMN; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* KOPHJOCCNLM; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* KFDOBMKJEPI; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CJHKFAPAPBH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJHKFAPAPBH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CJHKFAPAPBH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
