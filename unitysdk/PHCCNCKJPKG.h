#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class HNLACBJDCGI;
class KDFKNJCECCD;
namespace MoleMole { class UIControlCollection; }

#define PHCCNCKJPKG_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0x1553BFA0)
#define PHCCNCKJPKG_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1553BE80)
#define PHCCNCKJPKG_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0x1553C0D0)
#define PHCCNCKJPKG_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0x1553BF20)
#define PHCCNCKJPKG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1553BE20)
#define PHCCNCKJPKG__CTOR_OFFSET UNITYSDK_OFFSET(0x1553BE70)

inline static constexpr unsigned int PHCCNCKJPKG_TypeDefinitionIndex = 76921;

class PHCCNCKJPKG : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PHCCNCKJPKG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHCCNCKJPKG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHCCNCKJPKG_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KDGMEFEJMGJ(::KDFKNJCECCD* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::KDFKNJCECCD*))((::PBYTE)hIl2Cpp + PHCCNCKJPKG_KDGMEFEJMGJ_OFFSET))(this, AEJAMJDBHAM);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHCCNCKJPKG_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}

	static ::PHCCNCKJPKG* KDGMEFEJMGJ_1(::KDFKNJCECCD* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::PHCCNCKJPKG*(*)(::KDFKNJCECCD*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PHCCNCKJPKG_KDGMEFEJMGJ_1_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}
};
