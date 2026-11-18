#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoInputKey; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define IBBEAKPEJCC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15BF0E60)
#define IBBEAKPEJCC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15BF0D20)
#define IBBEAKPEJCC__CTOR_OFFSET UNITYSDK_OFFSET(0x15BF0E50)

inline static constexpr unsigned int IBBEAKPEJCC_TypeDefinitionIndex = 84060;

class IBBEAKPEJCC : public ::GIBMJLOJLKD
{
public:
	::MoleMole::MonoGamepadModule* GKMDDOPPNJH; // 0x18
	::MoleMole::MonoInputKey* EEKNGOHCLGC; // 0x20
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x28
	::UnityEngine::Transform* OOENDNEIFDO; // 0x30
	::UnityEngine::GameObject* IAMBLCHKOBE; // 0x38
	::MoleMole::MonoGamepadModule* OLFONKOJJOJ; // 0x40
	::MoleMole::UIGeneralButtonController* ACAAAJMHIFH; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IBBEAKPEJCC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IBBEAKPEJCC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IBBEAKPEJCC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
