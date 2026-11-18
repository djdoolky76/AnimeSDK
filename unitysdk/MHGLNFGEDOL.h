#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class FGCOIBFFCHB;
class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }

#define MHGLNFGEDOL_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x15932BA0)
#define MHGLNFGEDOL_HDNDDACFKEC_OFFSET UNITYSDK_OFFSET(0x15932D00)
#define MHGLNFGEDOL_KGEBDLGBGNM_OFFSET UNITYSDK_OFFSET(0x15932B20)
#define MHGLNFGEDOL_LCGOOEBDBGN_OFFSET UNITYSDK_OFFSET(0x15932D10)
#define MHGLNFGEDOL_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x159329E0)
#define MHGLNFGEDOL__CTOR_OFFSET UNITYSDK_OFFSET(0x15932C70)

inline static constexpr unsigned int MHGLNFGEDOL_TypeDefinitionIndex = 85995;

class MHGLNFGEDOL : public ::IOOIHHOJOPI
{
public:
	::FGCOIBFFCHB* _COFKMGNJHIA_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGLNFGEDOL__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MHGLNFGEDOL_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGLNFGEDOL_EFKGNFCEENK_OFFSET))(this);
	}

	::System::Void KGEBDLGBGNM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGLNFGEDOL_KGEBDLGBGNM_OFFSET))(this);
	}

	::FGCOIBFFCHB* HDNDDACFKEC()
	{
		return ((::FGCOIBFFCHB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MHGLNFGEDOL_HDNDDACFKEC_OFFSET))(this);
	}

	::System::Void LCGOOEBDBGN(::FGCOIBFFCHB* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::FGCOIBFFCHB*))((::PBYTE)hIl2Cpp + MHGLNFGEDOL_LCGOOEBDBGN_OFFSET))(this, EGEGIMGMJHN);
	}
};
