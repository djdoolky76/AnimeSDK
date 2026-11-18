#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class Text; }

#define FMHGMJIFIOK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x11C5B7A0)
#define FMHGMJIFIOK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x11C5B6D0)
#define FMHGMJIFIOK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11C5B550)
#define FMHGMJIFIOK__CTOR_OFFSET UNITYSDK_OFFSET(0x11C5B790)

inline static constexpr unsigned int FMHGMJIFIOK_TypeDefinitionIndex = 44031;

class FMHGMJIFIOK : public ::GIBMJLOJLKD
{
public:
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x18
	::UnityEngine::GameObject* JFDOOELFAOA; // 0x20
	::LGINJIKKBJA* HJDAMCBKNEI; // 0x28
	::UnityEngine::GameObject* AJIBHBJNOCE; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHGMJIFIOK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FMHGMJIFIOK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FMHGMJIFIOK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FMHGMJIFIOK_KGEBDLGBGNM_OFFSET))(this);
	}
};
