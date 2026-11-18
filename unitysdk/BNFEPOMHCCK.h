#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
class LGINJIKKBJA;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlCollection; }

#define BNFEPOMHCCK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x116001A0)
#define BNFEPOMHCCK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x116000D0)
#define BNFEPOMHCCK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x115FFF60)
#define BNFEPOMHCCK__CTOR_OFFSET UNITYSDK_OFFSET(0x11600190)

inline static constexpr unsigned int BNFEPOMHCCK_TypeDefinitionIndex = 80753;

class BNFEPOMHCCK : public ::GIBMJLOJLKD
{
public:
	::MonoUITableScrollV2* OLLEHOJAOGN; // 0x18
	::LGINJIKKBJA* BAFLNJGCIJK; // 0x20
	::MoleMole::MonoGamepadModule* GNOJGANMLCF; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFEPOMHCCK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BNFEPOMHCCK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BNFEPOMHCCK_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + BNFEPOMHCCK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
