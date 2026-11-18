#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI { class Text; }

#define EPHKBOFJKHH_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15E3ED60)
#define EPHKBOFJKHH_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15E3EC90)
#define EPHKBOFJKHH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15E3EB40)
#define EPHKBOFJKHH__CTOR_OFFSET UNITYSDK_OFFSET(0x15E3ED50)

inline static constexpr unsigned int EPHKBOFJKHH_TypeDefinitionIndex = 88766;

class EPHKBOFJKHH : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* IODBDPOLPKA; // 0x18
	::UnityEngine::UI::Text* HJMOFMLMAOE; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHKBOFJKHH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPHKBOFJKHH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EPHKBOFJKHH_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EPHKBOFJKHH_KGEBDLGBGNM_OFFSET))(this);
	}
};
