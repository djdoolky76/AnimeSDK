#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define EKJBDKGCJIK_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1426CAE0)
#define EKJBDKGCJIK_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1426CA10)
#define EKJBDKGCJIK_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1426C8D0)
#define EKJBDKGCJIK__CTOR_OFFSET UNITYSDK_OFFSET(0x1426CAD0)

inline static constexpr unsigned int EKJBDKGCJIK_TypeDefinitionIndex = 56244;

class EKJBDKGCJIK : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* IAPKABMDJNF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJBDKGCJIK__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKJBDKGCJIK_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + EKJBDKGCJIK_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EKJBDKGCJIK_KGEBDLGBGNM_OFFSET))(this);
	}
};
