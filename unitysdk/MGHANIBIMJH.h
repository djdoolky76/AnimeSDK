#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/IOOIHHOJOPI.h"

class HNLACBJDCGI;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }

#define MGHANIBIMJH_AKGJJPHAKAE_OFFSET UNITYSDK_OFFSET(0x177BBE60)
#define MGHANIBIMJH_BEPOJOBMILF_OFFSET UNITYSDK_OFFSET(0x177BBE70)
#define MGHANIBIMJH_EFKGNFCEENK_OFFSET UNITYSDK_OFFSET(0x177BBD00)
#define MGHANIBIMJH_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x177BBC60)
#define MGHANIBIMJH__CTOR_OFFSET UNITYSDK_OFFSET(0x177BBDD0)

inline static constexpr unsigned int MGHANIBIMJH_TypeDefinitionIndex = 62548;

class MGHANIBIMJH : public ::IOOIHHOJOPI
{
public:
	::MoleMole::UIGeneralButtonController* _MBLEANBFODC_k__BackingField; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHANIBIMJH__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL(::HNLACBJDCGI* JMJGHFAOMNH, ::MoleMole::UIControlCollection* FJHDNIKAKLO)
	{
		return ((::System::Void(*)(::PVOID, ::HNLACBJDCGI*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + MGHANIBIMJH_OJENCMOGDKL_OFFSET))(this, JMJGHFAOMNH, FJHDNIKAKLO);
	}

	::MoleMole::UIGeneralButtonController* AKGJJPHAKAE()
	{
		return ((::MoleMole::UIGeneralButtonController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHANIBIMJH_AKGJJPHAKAE_OFFSET))(this);
	}

	::System::Void BEPOJOBMILF(::MoleMole::UIGeneralButtonController* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralButtonController*))((::PBYTE)hIl2Cpp + MGHANIBIMJH_BEPOJOBMILF_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void EFKGNFCEENK()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MGHANIBIMJH_EFKGNFCEENK_OFFSET))(this);
	}
};
