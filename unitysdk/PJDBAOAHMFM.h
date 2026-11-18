#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class ADJHBNPPGEE_1;

#define PJDBAOAHMFM_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x14BA0A60)
#define PJDBAOAHMFM_NFFCAHHMMFM_OFFSET UNITYSDK_OFFSET(0x14BA0870)
#define PJDBAOAHMFM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x14BA0700)
#define PJDBAOAHMFM__CTOR_OFFSET UNITYSDK_OFFSET(0x14BA0B30)

inline static constexpr unsigned int PJDBAOAHMFM_TypeDefinitionIndex = 40388;

class PJDBAOAHMFM : public ::IOOIHHOJOPI
{
public:
	::System::Collections::Generic::List_1<::ADJHBNPPGEE_1<::System::Object*>*>* BMLOKMGDNLG; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDBAOAHMFM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJDBAOAHMFM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PJDBAOAHMFM_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::ADJHBNPPGEE_1<::System::Object*>*>* NFFCAHHMMFM(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::ADJHBNPPGEE_1<::System::Object*>*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + PJDBAOAHMFM_NFFCAHHMMFM_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
