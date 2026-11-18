#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class GCIMMDDIFBJ;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define JJGELCBGCOG_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x1945EE70)
#define JJGELCBGCOG_HMIPPEIFHEJ_OFFSET UNITYSDK_OFFSET(0x1945EFD0)
#define JJGELCBGCOG_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x1945EDB0)
#define JJGELCBGCOG_OOKLIMNOHIK_OFFSET UNITYSDK_OFFSET(0x1945EFE0)
#define JJGELCBGCOG__CTOR_OFFSET UNITYSDK_OFFSET(0x1945EF40)

inline static constexpr unsigned int JJGELCBGCOG_TypeDefinitionIndex = 83455;

class JJGELCBGCOG : public ::IOOIHHOJOPI
{
public:
	::GCIMMDDIFBJ* _KDEAFKIIKPH_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGELCBGCOG__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + JJGELCBGCOG_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::GCIMMDDIFBJ* HMIPPEIFHEJ()
	{
		return ((::GCIMMDDIFBJ*(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGELCBGCOG_HMIPPEIFHEJ_OFFSET))(this);
	}

	::System::Void OOKLIMNOHIK(::GCIMMDDIFBJ* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::GCIMMDDIFBJ*))((::PBYTE)hIl2Cpp + JJGELCBGCOG_OOKLIMNOHIK_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + JJGELCBGCOG_EFKGNFCEENK_OFFSET))(this);
	}
};
