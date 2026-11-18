#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define KCGLAFOFFCM_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x157DEC00)
#define KCGLAFOFFCM_KNAFDBOEEJO_OFFSET UNITYSDK_OFFSET(0x157DE8E0)
#define KCGLAFOFFCM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x157DE770)
#define KCGLAFOFFCM__CTOR_OFFSET UNITYSDK_OFFSET(0x157DECD0)

inline static constexpr unsigned int KCGLAFOFFCM_TypeDefinitionIndex = 90826;

class KCGLAFOFFCM : public ::IOOIHHOJOPI
{
public:
	::System::Collections::Generic::List_1<::System::Object*>* EAGFCELOBGH; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGLAFOFFCM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCGLAFOFFCM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Collections::Generic::List_1<::System::Object*>* KNAFDBOEEJO(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* GCAOGFBGMMH)
	{
		return ((::System::Collections::Generic::List_1<::System::Object*>*(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KCGLAFOFFCM_KNAFDBOEEJO_OFFSET))(this, JMJGHFAOMNH, GCAOGFBGMMH);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KCGLAFOFFCM_EFKGNFCEENK_OFFSET))(this);
	}
};
