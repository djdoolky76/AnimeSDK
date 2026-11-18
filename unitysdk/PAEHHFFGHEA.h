#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigShaderCustomBase; }
namespace System { class String; }

#define PAEHHFFGHEA_APCKPKCNFJE_OFFSET UNITYSDK_OFFSET(0x13A807E0)
#define PAEHHFFGHEA_COPIDBEMEIE_OFFSET UNITYSDK_OFFSET(0x13A808B0)
#define PAEHHFFGHEA_DOKDDGPMCND_OFFSET UNITYSDK_OFFSET(0x13A80A20)
#define PAEHHFFGHEA_FGDIFNPDELP_OFFSET UNITYSDK_OFFSET(0x13A809D0)
#define PAEHHFFGHEA_FHAKLKKIPHG_OFFSET UNITYSDK_OFFSET(0x13A808C0)
#define PAEHHFFGHEA_IIPHHHLPPJO_OFFSET UNITYSDK_OFFSET(0x13A805F0)
#define PAEHHFFGHEA_JAKBDOFCKAC_OFFSET UNITYSDK_OFFSET(0x13A804F0)
#define PAEHHFFGHEA_MDMEOOCDLAI_OFFSET UNITYSDK_OFFSET(0x13A808A0)
#define PAEHHFFGHEA_MGOFLMMDHCO_OFFSET UNITYSDK_OFFSET(0x13A80970)
#define PAEHHFFGHEA_NDEIMLEMLHA_OFFSET UNITYSDK_OFFSET(0x13A80900)
#define PAEHHFFGHEA_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x13A804A0)
#define PAEHHFFGHEA_OENOEFBECOA_OFFSET UNITYSDK_OFFSET(0x13A80840)
#define PAEHHFFGHEA_OKJCHFGIKBH_OFFSET UNITYSDK_OFFSET(0x13A80650)
#define PAEHHFFGHEA_OPIAMPMCMFA_OFFSET UNITYSDK_OFFSET(0x13A80550)
#define PAEHHFFGHEA__CTOR_OFFSET UNITYSDK_OFFSET(0x13A80450)

inline static constexpr unsigned int PAEHHFFGHEA_TypeDefinitionIndex = 82803;

class PAEHHFFGHEA : public ::System::Object
{
public:
	::MoleMole::Config::ConfigShaderCustomBase* CEJENBBHBBG; // 0x10
	::System::String* OILFMIPCKMH; // 0x18
	::System::Single GPDCBHEPDGL; // 0x20
	::System::UInt32 NFNFLAAAIIG; // 0x24
	::System::Boolean BBKPDBFFCII; // 0x28
	::System::Boolean PNFLIAAKFDF; // 0x29

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEHHFFGHEA__CTOR_OFFSET))(this);
	}

	::System::Void JAKBDOFCKAC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEHHFFGHEA_JAKBDOFCKAC_OFFSET))(this);
	}

	::System::Void OPIAMPMCMFA(::MoleMole::Config::ConfigShaderCustomBase* EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigShaderCustomBase*))((::PBYTE)hIl2Cpp + PAEHHFFGHEA_OPIAMPMCMFA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Int32 APCKPKCNFJE()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEHHFFGHEA_APCKPKCNFJE_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEHHFFGHEA_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Boolean IIPHHHLPPJO()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEHHFFGHEA_IIPHHHLPPJO_OFFSET))(this);
	}

	::System::Void OENOEFBECOA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEHHFFGHEA_OENOEFBECOA_OFFSET))(this);
	}

	::System::Boolean MDMEOOCDLAI()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEHHFFGHEA_MDMEOOCDLAI_OFFSET))(this);
	}

	::MoleMole::Config::ConfigShaderCustomBase* COPIDBEMEIE()
	{
		return ((::MoleMole::Config::ConfigShaderCustomBase*(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEHHFFGHEA_COPIDBEMEIE_OFFSET))(this);
	}

	::System::Void FHAKLKKIPHG()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEHHFFGHEA_FHAKLKKIPHG_OFFSET))(this);
	}

	::System::Void OKJCHFGIKBH(::System::Single PMNLNNGEIFM)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PAEHHFFGHEA_OKJCHFGIKBH_OFFSET))(this, PMNLNNGEIFM);
	}

	::System::Void NDEIMLEMLHA(::System::Boolean EGEGIMGMJHN)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + PAEHHFFGHEA_NDEIMLEMLHA_OFFSET))(this, EGEGIMGMJHN);
	}

	::System::Void MGOFLMMDHCO()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEHHFFGHEA_MGOFLMMDHCO_OFFSET))(this);
	}

	::System::Boolean FGDIFNPDELP(::System::UInt32 NJNCGJLHLKC)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + PAEHHFFGHEA_FGDIFNPDELP_OFFSET))(this, NJNCGJLHLKC);
	}

	::System::Boolean DOKDDGPMCND()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PAEHHFFGHEA_DOKDDGPMCND_OFFSET))(this);
	}
};
