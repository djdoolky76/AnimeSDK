#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/OFGBAENJIFM.h"

class HNLACBJDCGI;
class KDFKNJCECCD;
namespace MoleMole { class UIControlCollection; }

#define NMAALMIPIOI_CPLNCDIFJAE_OFFSET UNITYSDK_OFFSET(0xE0A9860)
#define NMAALMIPIOI_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0xE0A95C0)
#define NMAALMIPIOI_KDGMEFEJMGJ_1_OFFSET UNITYSDK_OFFSET(0xE0A96E0)
#define NMAALMIPIOI_KDGMEFEJMGJ_OFFSET UNITYSDK_OFFSET(0xE0A9660)
#define NMAALMIPIOI_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xE0A9560)
#define NMAALMIPIOI__CTOR_OFFSET UNITYSDK_OFFSET(0xE0A95B0)

inline static constexpr unsigned int NMAALMIPIOI_TypeDefinitionIndex = 70266;

class NMAALMIPIOI : public ::OFGBAENJIFM
{
public:
	// static const ::System::String* JANJOJNAKDI; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NMAALMIPIOI__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NMAALMIPIOI_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NMAALMIPIOI_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KDGMEFEJMGJ(::KDFKNJCECCD* AEJAMJDBHAM)
	{
		return ((::System::Void(*)(::PVOID, ::KDFKNJCECCD*))((::PBYTE)hIl2Cpp + NMAALMIPIOI_KDGMEFEJMGJ_OFFSET))(this, AEJAMJDBHAM);
	}

	static ::NMAALMIPIOI* KDGMEFEJMGJ_1(::KDFKNJCECCD* AEJAMJDBHAM, ::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::NMAALMIPIOI*(*)(::KDFKNJCECCD*, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NMAALMIPIOI_KDGMEFEJMGJ_1_OFFSET))(AEJAMJDBHAM, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	static ::System::Boolean CPLNCDIFJAE(::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NMAALMIPIOI_CPLNCDIFJAE_OFFSET))(FJHDNIKAKLO);
	}
};
