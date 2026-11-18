#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/DCNGDMKEFIB.h"

class HNLACBJDCGI;
class KCOBNIDGPMM;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define IOOIHHOJOPI_BBOMJDBNHIC_OFFSET UNITYSDK_OFFSET(0x153C8F80)
#define IOOIHHOJOPI_BJANDJKKNCD_OFFSET UNITYSDK_OFFSET(0x153C8C90)
#define IOOIHHOJOPI_CMFOIAAGPFL_OFFSET UNITYSDK_OFFSET(0x153C8F70)
#define IOOIHHOJOPI__CTOR_OFFSET UNITYSDK_OFFSET(0x15387660)

inline static constexpr unsigned int IOOIHHOJOPI_TypeDefinitionIndex = 79759;

class IOOIHHOJOPI : public ::DCNGDMKEFIB
{
public:
	::System::Collections::Generic::List_1<::KCOBNIDGPMM*>* BEBJBAIPGAN; // 0x18
	::System::Collections::Generic::List_1<::DCNGDMKEFIB*>* NPDKHELCCMJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOIHHOJOPI__CTOR_OFFSET))(this);
	}

	::System::Void BJANDJKKNCD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOIHHOJOPI_BJANDJKKNCD_OFFSET))(this);
	}

	::System::Void CMFOIAAGPFL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IOOIHHOJOPI_CMFOIAAGPFL_OFFSET))(this);
	}

	::System::Void BBOMJDBNHIC(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + IOOIHHOJOPI_BBOMJDBNHIC_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}
};
