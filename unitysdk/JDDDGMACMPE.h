#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define JDDDGMACMPE_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1382FE60)
#define JDDDGMACMPE_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1382FDB0)
#define JDDDGMACMPE_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1382FC50)
#define JDDDGMACMPE__CTOR_OFFSET UNITYSDK_OFFSET(0x1382FE50)

inline static constexpr unsigned int JDDDGMACMPE_TypeDefinitionIndex = 63054;

class JDDDGMACMPE : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* KEGPCGIAJAI; // 0x18
	::FGCOIBFFCHB* FFJNKJCMCCC; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDDGMACMPE__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JDDDGMACMPE_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JDDDGMACMPE_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JDDDGMACMPE_KGEBDLGBGNM_OFFSET))(this);
	}
};
