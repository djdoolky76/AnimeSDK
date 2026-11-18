#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UISpriteNumPanel; }

#define HKJELMKEMKL_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1F955540)
#define HKJELMKEMKL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1F9553E0)
#define HKJELMKEMKL__CTOR_OFFSET UNITYSDK_OFFSET(0x1F955530)

inline static constexpr unsigned int HKJELMKEMKL_TypeDefinitionIndex = 95037;

class HKJELMKEMKL : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UISpriteNumPanel* MHPIOFJPCFE; // 0x18
	::UnityEngine::CanvasGroup* GPNMGBEFLGO; // 0x20
	::GCIMMDDIFBJ* HMMONJPFOEG; // 0x28
	::UnityEngine::Transform* PDACHPLBKIE; // 0x30
	::UnityEngine::UI::Extension::UISpriteNumPanel* GJLKCLKBNME; // 0x38
	::UnityEngine::UI::Extension::UISpriteNumPanel* PMCNDKMMFDG; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HKJELMKEMKL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKJELMKEMKL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HKJELMKEMKL_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
