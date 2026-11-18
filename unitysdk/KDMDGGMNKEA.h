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

#define KDMDGGMNKEA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x13C54010)
#define KDMDGGMNKEA_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x13C53F40)
#define KDMDGGMNKEA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13C53D00)
#define KDMDGGMNKEA__CTOR_OFFSET UNITYSDK_OFFSET(0x13C54000)

inline static constexpr unsigned int KDMDGGMNKEA_TypeDefinitionIndex = 73846;

class KDMDGGMNKEA : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* DKEFFKBJAMA; // 0x18
	::UnityEngine::RectTransform* ODALDIOFMPH; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* DBBDKLENOKD; // 0x28
	::UnityEngine::RectTransform* DBJCNKCCNKC; // 0x30
	::MoleMole::MonoGamepadCustomList* IHGNFKCAJBE; // 0x38
	::LGINJIKKBJA* ONOINJOLLPK; // 0x40
	::UnityEngine::RectTransform* NDPFKBKABLI; // 0x48
	::UnityEngine::RectTransform* BLBHEMCBCOL; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* BMLHGEJLNHK; // 0x58
	::LGINJIKKBJA* CGOBDCLIIDH; // 0x60
	::UnityEngine::GameObject* ILCHICALAHE; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMDGGMNKEA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KDMDGGMNKEA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KDMDGGMNKEA_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KDMDGGMNKEA_KGEBDLGBGNM_OFFSET))(this);
	}
};
