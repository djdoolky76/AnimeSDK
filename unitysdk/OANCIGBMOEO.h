#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define OANCIGBMOEO_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15F56190)
#define OANCIGBMOEO_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15F560C0)
#define OANCIGBMOEO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15F55EF0)
#define OANCIGBMOEO__CTOR_OFFSET UNITYSDK_OFFSET(0x15F56180)

inline static constexpr unsigned int OANCIGBMOEO_TypeDefinitionIndex = 92721;

class OANCIGBMOEO : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* EOCCFIFOIBL; // 0x18
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x20
	::UnityEngine::GameObject* MHCKELMHMPD; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* BJBGIMJKCDA; // 0x30
	::UnityEngine::GameObject* JPLICJNHBBD; // 0x38
	::LGINJIKKBJA* KHOJKFHFKIJ; // 0x40
	::UnityEngine::GameObject* AJIBHBJNOCE; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANCIGBMOEO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OANCIGBMOEO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OANCIGBMOEO_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OANCIGBMOEO_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
