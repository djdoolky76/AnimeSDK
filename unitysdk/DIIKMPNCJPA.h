#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/LFDDLEHKGIK.h"
#include "unitysdk/Share/EUIType.h"

class GECKFNANGKB;
class HPGBIDMABJP;
namespace MoleMole { class UIHollowMainPageController; }
namespace System { class Action; }

#define DIIKMPNCJPA_DLIJKJHELGB_OFFSET UNITYSDK_OFFSET(0x15A48C90)
#define DIIKMPNCJPA_ECNOGHHOPPF_OFFSET UNITYSDK_OFFSET(0x15A48990)
#define DIIKMPNCJPA_GNADKLDHLKO_OFFSET UNITYSDK_OFFSET(0x15A48060)
#define DIIKMPNCJPA_HNDGJKPNIHA_OFFSET UNITYSDK_OFFSET(0x15A47F80)
#define DIIKMPNCJPA_IFHNMAGGFAE_OFFSET UNITYSDK_OFFSET(0x15A48050)
#define DIIKMPNCJPA_JJNCHDAFCCP_OFFSET UNITYSDK_OFFSET(0x15A48A20)
#define DIIKMPNCJPA_JLCDPAPEHGD_OFFSET UNITYSDK_OFFSET(0x15A48B60)
#define DIIKMPNCJPA_OJENCMOGDKL_OFFSET UNITYSDK_OFFSET(0x15A47D90)
#define DIIKMPNCJPA__CTOR_OFFSET UNITYSDK_OFFSET(0x15A47FD0)

inline static constexpr unsigned int DIIKMPNCJPA_TypeDefinitionIndex = 87539;

class DIIKMPNCJPA : public ::LFDDLEHKGIK
{
public:
	::GECKFNANGKB* PHBBDGJLLGE; // 0x40
	::HPGBIDMABJP* KDMABPELCGN; // 0x48
	::MoleMole::UIHollowMainPageController* MACHGCHBMBO; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIKMPNCJPA__CTOR_OFFSET))(this);
	}

	::System::Void OJENCMOGDKL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIKMPNCJPA_OJENCMOGDKL_OFFSET))(this);
	}

	::System::Void HNDGJKPNIHA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIKMPNCJPA_HNDGJKPNIHA_OFFSET))(this);
	}

	::System::Void IFHNMAGGFAE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIKMPNCJPA_IFHNMAGGFAE_OFFSET))(this);
	}

	::System::Void GNADKLDHLKO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIKMPNCJPA_GNADKLDHLKO_OFFSET))(this);
	}

	::System::Void ECNOGHHOPPF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DIIKMPNCJPA_ECNOGHHOPPF_OFFSET))(this);
	}

	::System::Void JJNCHDAFCCP(::Share::EUIType JAFKJKEIHHI)
	{
		return ((::System::Void(*)(::PVOID, ::Share::EUIType))((::PBYTE)hIl2Cpp + DIIKMPNCJPA_JJNCHDAFCCP_OFFSET))(this, JAFKJKEIHHI);
	}

	::System::Void JLCDPAPEHGD(::Share::EUIType JAFKJKEIHHI)
	{
		return ((::System::Void(*)(::PVOID, ::Share::EUIType))((::PBYTE)hIl2Cpp + DIIKMPNCJPA_JLCDPAPEHGD_OFFSET))(this, JAFKJKEIHHI);
	}

	::System::Void DLIJKJHELGB(::System::Action* BECHLKNFEOA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + DIIKMPNCJPA_DLIJKJHELGB_OFFSET))(this, BECHLKNFEOA);
	}
};
