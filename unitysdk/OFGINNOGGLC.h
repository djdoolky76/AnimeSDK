#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GIBMJLOJLKD.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIIncomeNumWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class MEKABAIJMNM_1;

#define OFGINNOGGLC_CBHKIKOPKAM_OFFSET UNITYSDK_OFFSET(0x1006EDD0)
#define OFGINNOGGLC_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x1006F000)
#define OFGINNOGGLC_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x1006EFB0)
#define OFGINNOGGLC_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1006EC80)
#define OFGINNOGGLC__CTOR_OFFSET UNITYSDK_OFFSET(0x1006EFF0)

inline static constexpr unsigned int OFGINNOGGLC_TypeDefinitionIndex = 73708;

class OFGINNOGGLC : public ::GIBMJLOJLKD
{
public:
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIIncomeNumWidgetController*>*>* BKDAMIAEKPD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGINNOGGLC__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFGINNOGGLC_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void ECNOGHHOPPF(::HNLACBJDCGI* MIALFKCCCPI, ::MoleMole::UIControlCollection* KMGKAIDEIBA)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFGINNOGGLC_ECNOGHHOPPF_OFFSET))(this, MIALFKCCCPI, KMGKAIDEIBA);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGINNOGGLC_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIIncomeNumWidgetController*>*>* CBHKIKOPKAM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIIncomeNumWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFGINNOGGLC_CBHKIKOPKAM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
