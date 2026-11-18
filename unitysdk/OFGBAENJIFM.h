#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class HNLACBJDCGI;
class KCOBNIDGPMM;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define OFGBAENJIFM_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0xFD75DB0)
#define OFGBAENJIFM_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0xFD75D50)
#define OFGBAENJIFM__CTOR_OFFSET UNITYSDK_OFFSET(0xFD75DA0)

inline static constexpr unsigned int OFGBAENJIFM_TypeDefinitionIndex = 69616;

class OFGBAENJIFM : public ::System::Object
{
public:
	::System::Collections::Generic::List_1<::KCOBNIDGPMM*>* BEBJBAIPGAN; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OFGBAENJIFM__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFGBAENJIFM_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void BBOMJDBNHIC(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + OFGBAENJIFM_BBOMJDBNHIC_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}
};
