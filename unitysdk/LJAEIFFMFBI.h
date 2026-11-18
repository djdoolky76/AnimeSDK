#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }

#define LJAEIFFMFBI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x184FB240)
#define LJAEIFFMFBI_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x184FB1B0)
#define LJAEIFFMFBI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x184FB060)
#define LJAEIFFMFBI__CTOR_OFFSET UNITYSDK_OFFSET(0x184FB230)

inline static constexpr unsigned int LJAEIFFMFBI_TypeDefinitionIndex = 55071;

class LJAEIFFMFBI : public ::GIBMJLOJLKD
{
public:
	::LGINJIKKBJA* LCOOFMKFDPP; // 0x18
	::UnityEngine::CanvasGroup* EHMLMJKEJMM; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAEIFFMFBI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJAEIFFMFBI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJAEIFFMFBI_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + LJAEIFFMFBI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
