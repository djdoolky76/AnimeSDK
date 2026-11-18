#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define GDJJGHEEEFJ_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x13DC01E0)
#define GDJJGHEEEFJ_KNAFDBOEEJO_OFFSET UNITYSDK_OFFSET(0x13DBFEC0)
#define GDJJGHEEEFJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x13DBFD50)
#define GDJJGHEEEFJ__CTOR_OFFSET UNITYSDK_OFFSET(0x13DC02B0)

inline static constexpr unsigned int GDJJGHEEEFJ_TypeDefinitionIndex = 68948;

class GDJJGHEEEFJ : public ::IOOIHHOJOPI
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* EAGFCELOBGH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJJGHEEEFJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDJJGHEEEFJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::System::Object*>* KNAFDBOEEJO(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + GDJJGHEEEFJ_KNAFDBOEEJO_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GDJJGHEEEFJ_EFKGNFCEENK_OFFSET))(this);
	}
};
