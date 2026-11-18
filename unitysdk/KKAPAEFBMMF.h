#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define KKAPAEFBMMF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x129A0500)
#define KKAPAEFBMMF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x129A0430)
#define KKAPAEFBMMF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x129A0200)
#define KKAPAEFBMMF__CTOR_OFFSET UNITYSDK_OFFSET(0x129A04F0)

inline static constexpr unsigned int KKAPAEFBMMF_TypeDefinitionIndex = 73924;

class KKAPAEFBMMF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x18
	::LGINJIKKBJA* ONOINJOLLPK; // 0x20
	::LGINJIKKBJA* CGOBDCLIIDH; // 0x28
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x30
	::UnityEngine::RectTransform* NDPFKBKABLI; // 0x38
	::UnityEngine::RectTransform* DBJCNKCCNKC; // 0x40
	::LGINJIKKBJA* DKEFFKBJAMA; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x50
	::UnityEngine::GameObject* ILCHICALAHE; // 0x58
	::MoleMole::MonoGamepadCustomList* IHGNFKCAJBE; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAPAEFBMMF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KKAPAEFBMMF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KKAPAEFBMMF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KKAPAEFBMMF_KGEBDLGBGNM_OFFSET))(this);
	}
};
