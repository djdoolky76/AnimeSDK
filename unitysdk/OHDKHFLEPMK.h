#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define OHDKHFLEPMK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13A61470)
#define OHDKHFLEPMK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13A613A0)
#define OHDKHFLEPMK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13A611D0)
#define OHDKHFLEPMK__CTOR_OFFSET UNITYSDK_OFFSET(0x13A61460)

inline static constexpr unsigned int OHDKHFLEPMK_TypeDefinitionIndex = 51733;

class OHDKHFLEPMK : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* KNHJHAJDGED; // 0x18
	::UnityEngine::UI::Extension::UITabButtonGroup* IINFBMMMNAB; // 0x20
	::LGINJIKKBJA* BKDDKDMILCA; // 0x28
	::MonoUITableScrollV2* PNDKHLDEMPC; // 0x30
	::UnityEngine::GameObject* GFDKICGJEIO; // 0x38
	::MonoUITableScrollV2* GPIAMKAJBFA; // 0x40
	::UnityEngine::UI::Text* LDFCONFKOOA; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDKHFLEPMK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OHDKHFLEPMK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OHDKHFLEPMK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OHDKHFLEPMK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
