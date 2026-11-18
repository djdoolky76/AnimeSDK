#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIIncomeNumWidgetController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class MEKABAIJMNM_1;

#define HHEAEFMOLFO_CBHKIKOPKAM_OFFSET UNITYSDK_OFFSET(0x16F37170)
#define HHEAEFMOLFO_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x16F37350)
#define HHEAEFMOLFO_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16F37000)
#define HHEAEFMOLFO__CTOR_OFFSET UNITYSDK_OFFSET(0x16F37420)

inline static constexpr unsigned int HHEAEFMOLFO_TypeDefinitionIndex = 79467;

class HHEAEFMOLFO : public ::IOOIHHOJOPI
{
public:
	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIIncomeNumWidgetController*>*>* BKDAMIAEKPD; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEAEFMOLFO__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHEAEFMOLFO_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIIncomeNumWidgetController*>*>* CBHKIKOPKAM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::MEKABAIJMNM_1<::MoleMole::UIIncomeNumWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + HHEAEFMOLFO_CBHKIKOPKAM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HHEAEFMOLFO_EFKGNFCEENK_OFFSET))(this);
	}
};
