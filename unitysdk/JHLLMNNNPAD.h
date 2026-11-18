#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define JHLLMNNNPAD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x165AC6B0)
#define JHLLMNNNPAD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x165AC5C0)
#define JHLLMNNNPAD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x165AC450)
#define JHLLMNNNPAD__CTOR_OFFSET UNITYSDK_OFFSET(0x165AC6A0)

inline static constexpr unsigned int JHLLMNNNPAD_TypeDefinitionIndex = 87743;

class JHLLMNNNPAD : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::LGINJIKKBJA* ALAKLHDMHIN; // 0x20
	::LGINJIKKBJA* ACAAAJMHIFH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLLMNNNPAD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JHLLMNNNPAD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JHLLMNNNPAD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JHLLMNNNPAD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
