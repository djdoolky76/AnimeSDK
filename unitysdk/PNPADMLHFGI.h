#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define PNPADMLHFGI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1B9F8D40)
#define PNPADMLHFGI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1B9F8C70)
#define PNPADMLHFGI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1B9F8A80)
#define PNPADMLHFGI__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9F8D30)

inline static constexpr unsigned int PNPADMLHFGI_TypeDefinitionIndex = 88292;

class PNPADMLHFGI : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* NFLKDMHODKI; // 0x18
	::UnityEngine::GameObject* HFEGKEEAOMB; // 0x20
	::FGCOIBFFCHB* HBADNCJHEOJ; // 0x28
	::LGINJIKKBJA* PPNGNLGBGAI; // 0x30
	::UnityEngine::GameObject* KKIBDFMEODG; // 0x38
	::FGCOIBFFCHB* MDJFKDGEHKL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPADMLHFGI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNPADMLHFGI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PNPADMLHFGI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PNPADMLHFGI_KGEBDLGBGNM_OFFSET))(this);
	}
};
