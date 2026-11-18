#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }

#define DIKMFDEKFMJ_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x16BA1BF0)
#define DIKMFDEKFMJ_IADKMLACDMD_OFFSET UNITYSDK_OFFSET(0x16BA1D60)
#define DIKMFDEKFMJ_JENHIJPKEKG_OFFSET UNITYSDK_OFFSET(0x16BA1D50)
#define DIKMFDEKFMJ_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x16BA1B50)
#define DIKMFDEKFMJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16BA1CC0)

inline static constexpr unsigned int DIKMFDEKFMJ_TypeDefinitionIndex = 85890;

class DIKMFDEKFMJ : public ::IOOIHHOJOPI
{
public:
	::MonoUITableScrollV2* _LPOKKPODLGO_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKMFDEKFMJ__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + DIKMFDEKFMJ_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::MonoUITableScrollV2* JENHIJPKEKG()
	{
		return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKMFDEKFMJ_JENHIJPKEKG_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIKMFDEKFMJ_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void IADKMLACDMD(::MonoUITableScrollV2* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2*))((::PBYTE)hIl2Cpp + DIKMFDEKFMJ_IADKMLACDMD_OFFSET))(this, EGEGIMGMJHN);
	}
};
