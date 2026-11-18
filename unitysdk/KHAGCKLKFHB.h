#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define KHAGCKLKFHB_APANJDNEJPM_OFFSET UNITYSDK_OFFSET(0x179098E0)
#define KHAGCKLKFHB_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x17909770)
#define KHAGCKLKFHB_JFNBMOEDJKH_OFFSET UNITYSDK_OFFSET(0x179098D0)
#define KHAGCKLKFHB_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x179096F0)
#define KHAGCKLKFHB_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x179095B0)
#define KHAGCKLKFHB__CTOR_OFFSET UNITYSDK_OFFSET(0x17909840)

inline static constexpr unsigned int KHAGCKLKFHB_TypeDefinitionIndex = 64256;

class KHAGCKLKFHB : public ::IOOIHHOJOPI
{
public:
	::FGCOIBFFCHB* _ALFLGOHLNFC_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAGCKLKFHB__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + KHAGCKLKFHB_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAGCKLKFHB_KGEBDLGBGNM_OFFSET))(this);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAGCKLKFHB_EFKGNFCEENK_OFFSET))(this);
	}

	::FGCOIBFFCHB* JFNBMOEDJKH()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + KHAGCKLKFHB_JFNBMOEDJKH_OFFSET))(this);
	}

	::System::Void APANJDNEJPM(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + KHAGCKLKFHB_APANJDNEJPM_OFFSET))(this, EGEGIMGMJHN);
	}
};
