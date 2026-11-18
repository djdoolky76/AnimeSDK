#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }

#define LKIBCMDMMBF_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x184FD340)
#define LKIBCMDMMBF_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x184FD230)
#define LKIBCMDMMBF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x184FCFF0)
#define LKIBCMDMMBF__CTOR_OFFSET UNITYSDK_OFFSET(0x184FD330)

inline static constexpr unsigned int LKIBCMDMMBF_TypeDefinitionIndex = 66125;

class LKIBCMDMMBF : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* GGJJBCMKBAN; // 0x18
	::UnityEngine::GameObject* ANDFIBAKEAE; // 0x20
	::UnityEngine::GameObject* KBPOBILLOLF; // 0x28
	::UnityEngine::GameObject* LPMNKAOBDKL; // 0x30
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x38
	::UnityEngine::GameObject* PPFACCLCJEH; // 0x40
	::LGINJIKKBJA* PHBBGMHDKEE; // 0x48
	::UnityEngine::GameObject* HMDJOLGPLOD; // 0x50
	::UnityEngine::Transform* PNKBOLJOOLM; // 0x58
	::LGINJIKKBJA* DABEBOFEHJB; // 0x60
	::MonoUITableScrollV2* ODALDIOFMPH; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIBCMDMMBF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LKIBCMDMMBF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LKIBCMDMMBF_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LKIBCMDMMBF_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
