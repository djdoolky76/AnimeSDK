#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIBossChallengeBadgeWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class CBCLGFEGHLJ_1;

#define POKFKHEABHH_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x194BDBD0)
#define POKFKHEABHH_LFKGAJGNOEE_OFFSET UNITYSDK_OFFSET(0x194BD9F0)
#define POKFKHEABHH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x194BD880)
#define POKFKHEABHH__CTOR_OFFSET UNITYSDK_OFFSET(0x194BDCA0)

inline static constexpr unsigned int POKFKHEABHH_TypeDefinitionIndex = 88569;

class POKFKHEABHH : public ::IOOIHHOJOPI
{
public:
	::System::Collections::Generic::List_1<::CBCLGFEGHLJ_1<::MoleMole::UIBossChallengeBadgeWidgetController*>*>* ANLAMLCPPBP; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKFKHEABHH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POKFKHEABHH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + POKFKHEABHH_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::CBCLGFEGHLJ_1<::MoleMole::UIBossChallengeBadgeWidgetController*>*>* LFKGAJGNOEE(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::CBCLGFEGHLJ_1<::MoleMole::UIBossChallengeBadgeWidgetController*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + POKFKHEABHH_LFKGAJGNOEE_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
