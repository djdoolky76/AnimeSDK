#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NGBOKKALNFA_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x11F737F0)
#define NGBOKKALNFA_KNAFDBOEEJO_OFFSET UNITYSDK_OFFSET(0x11F734D0)
#define NGBOKKALNFA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x11F73360)
#define NGBOKKALNFA__CTOR_OFFSET UNITYSDK_OFFSET(0x11F738C0)

inline static constexpr unsigned int NGBOKKALNFA_TypeDefinitionIndex = 91975;

class NGBOKKALNFA : public ::IOOIHHOJOPI
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* EAGFCELOBGH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBOKKALNFA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGBOKKALNFA_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NGBOKKALNFA_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::System::Object*>* KNAFDBOEEJO(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + NGBOKKALNFA_KNAFDBOEEJO_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}
};
