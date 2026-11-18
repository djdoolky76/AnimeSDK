#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MEPFLCPKFFF_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x16C797E0)
#define MEPFLCPKFFF_KNAFDBOEEJO_OFFSET UNITYSDK_OFFSET(0x16C794C0)
#define MEPFLCPKFFF_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16C79350)
#define MEPFLCPKFFF__CTOR_OFFSET UNITYSDK_OFFSET(0x16C798B0)

inline static constexpr unsigned int MEPFLCPKFFF_TypeDefinitionIndex = 64787;

class MEPFLCPKFFF : public ::IOOIHHOJOPI
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* EAGFCELOBGH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPFLCPKFFF__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEPFLCPKFFF_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::System::Object*>* KNAFDBOEEJO(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MEPFLCPKFFF_KNAFDBOEEJO_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MEPFLCPKFFF_EFKGNFCEENK_OFFSET))(this);
	}
};
