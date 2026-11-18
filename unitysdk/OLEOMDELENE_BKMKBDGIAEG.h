#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class OLEOMDELENE;

#define OLEOMDELENE_BKMKBDGIAEG_DKGPAODNGLA_OFFSET UNITYSDK_OFFSET(0x11B42710)
#define OLEOMDELENE_BKMKBDGIAEG_LPHELLAEFLP_OFFSET UNITYSDK_OFFSET(0x11B42830)
#define OLEOMDELENE_BKMKBDGIAEG__CTOR_OFFSET UNITYSDK_OFFSET(0x11B40FC0)

inline static constexpr unsigned int OLEOMDELENE_BKMKBDGIAEG_TypeDefinitionIndex = 61060;

class OLEOMDELENE_BKMKBDGIAEG : public ::System::Object
{
public:
	::OLEOMDELENE* KLHPEBKNIFB; // 0x10
	::System::Int32 LGBHOFGBGHC; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEOMDELENE_BKMKBDGIAEG__CTOR_OFFSET))(this);
	}

	::System::Void DKGPAODNGLA(::System::Int32 JHFKDGBCOBA)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + OLEOMDELENE_BKMKBDGIAEG_DKGPAODNGLA_OFFSET))(this, JHFKDGBCOBA);
	}

	::System::Void LPHELLAEFLP()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OLEOMDELENE_BKMKBDGIAEG_LPHELLAEFLP_OFFSET))(this);
	}
};
