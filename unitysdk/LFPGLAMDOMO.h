#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define LFPGLAMDOMO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14DAA910)
#define LFPGLAMDOMO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x14DAA840)
#define LFPGLAMDOMO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14DAA690)
#define LFPGLAMDOMO__CTOR_OFFSET UNITYSDK_OFFSET(0x14DAA900)

inline static constexpr unsigned int LFPGLAMDOMO_TypeDefinitionIndex = 45060;

class LFPGLAMDOMO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::Transform* ODALDIOFMPH; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::UnityEngine::Animation* OIKFFMHNCHB; // 0x28
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x30
	::UnityEngine::UI::Text* AMEEMEPHGEL; // 0x38
	::UnityEngine::GameObject* OCJOCLEDABL; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPGLAMDOMO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LFPGLAMDOMO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LFPGLAMDOMO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LFPGLAMDOMO_KGEBDLGBGNM_OFFSET))(this);
	}
};
