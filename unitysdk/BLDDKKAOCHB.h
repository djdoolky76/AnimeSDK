#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define BLDDKKAOCHB_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x14258A30)
#define BLDDKKAOCHB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x142589A0)
#define BLDDKKAOCHB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14258830)
#define BLDDKKAOCHB__CTOR_OFFSET UNITYSDK_OFFSET(0x14258A20)

inline static constexpr unsigned int BLDDKKAOCHB_TypeDefinitionIndex = 64154;

class BLDDKKAOCHB : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::GameObject* BBKPIJFOMFO; // 0x18
	::MonoUITableScrollV2* CFDDJINKOCB; // 0x20
	::LGINJIKKBJA* FBIHFNOOPBG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDKKAOCHB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLDDKKAOCHB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BLDDKKAOCHB_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BLDDKKAOCHB_KGEBDLGBGNM_OFFSET))(this);
	}
};
