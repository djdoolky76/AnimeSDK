#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }
namespace UnityEngine::UI::Extension { class UIImgText; }

#define JCEONAFEOBB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14A4ED30)
#define JCEONAFEOBB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14A4EC20)
#define JCEONAFEOBB__CTOR_OFFSET UNITYSDK_OFFSET(0x14A4ED20)

inline static constexpr unsigned int JCEONAFEOBB_TypeDefinitionIndex = 68346;

class JCEONAFEOBB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* BGOLPFAIMKI; // 0x18
	::UnityEngine::UI::Extension::UIImgText* AGLOKOHOINP; // 0x20
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* OAKAIIJLMIL; // 0x28
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* LOIBABHKFJH; // 0x30
	::UnityEngine::UI::Text* LOIEHBLKDPE; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JCEONAFEOBB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JCEONAFEOBB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JCEONAFEOBB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
