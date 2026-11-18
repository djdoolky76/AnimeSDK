#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define GFCDOHHPNNM_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x10FD1EF0)
#define GFCDOHHPNNM_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x10FD1E60)
#define GFCDOHHPNNM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10FD1D20)
#define GFCDOHHPNNM__CTOR_OFFSET UNITYSDK_OFFSET(0x10FD1EE0)

inline static constexpr unsigned int GFCDOHHPNNM_TypeDefinitionIndex = 88659;

class GFCDOHHPNNM : public ::GIBMJLOJLKD
{
public:
	::FGCOIBFFCHB* JNIAEBKPLBP; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCDOHHPNNM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GFCDOHHPNNM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GFCDOHHPNNM_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GFCDOHHPNNM_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}
};
