#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define FBEJGIAPCBD_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x161735A0)
#define FBEJGIAPCBD_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x16173490)
#define FBEJGIAPCBD_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16173310)
#define FBEJGIAPCBD__CTOR_OFFSET UNITYSDK_OFFSET(0x16173590)

inline static constexpr unsigned int FBEJGIAPCBD_TypeDefinitionIndex = 90755;

class FBEJGIAPCBD : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* HBHNPKPPKFE; // 0x18
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x20
	::FGCOIBFFCHB* BKDGGCFMIPD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEJGIAPCBD__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBEJGIAPCBD_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FBEJGIAPCBD_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + FBEJGIAPCBD_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
