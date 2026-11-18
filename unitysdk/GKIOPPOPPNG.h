#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GKIOPPOPPNG_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x10FE71C0)
#define GKIOPPOPPNG_KNAFDBOEEJO_OFFSET UNITYSDK_OFFSET(0x10FE6EA0)
#define GKIOPPOPPNG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x10FE6D30)
#define GKIOPPOPPNG__CTOR_OFFSET UNITYSDK_OFFSET(0x10FE7290)

inline static constexpr unsigned int GKIOPPOPPNG_TypeDefinitionIndex = 71557;

class GKIOPPOPPNG : public ::IOOIHHOJOPI
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* EAGFCELOBGH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIOPPOPPNG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKIOPPOPPNG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::System::Object*>* KNAFDBOEEJO(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GKIOPPOPPNG_KNAFDBOEEJO_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GKIOPPOPPNG_EFKGNFCEENK_OFFSET))(this);
	}
};
