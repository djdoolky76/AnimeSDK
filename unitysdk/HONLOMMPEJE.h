#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/MoleMole/LightbarPresetEntry.h"

#define HONLOMMPEJE_MPOHGONLNCC_OFFSET UNITYSDK_OFFSET(0x12E934C0)
#define HONLOMMPEJE__CTOR_OFFSET UNITYSDK_OFFSET(0x12E934A0)

inline static constexpr unsigned int HONLOMMPEJE_TypeDefinitionIndex = 79471;

class HONLOMMPEJE : public ::System::Object
{
public:
	::System::Single ALJOPMIFICA; // 0x10
	::System::Single PCPCPJKEGDF; // 0x14
	::System::Single FNMHMEFPDJJ; // 0x18
	::System::Single DPFAGAGPDAB; // 0x1C
	::System::Single JOLPKFPKPNP; // 0x20
	::System::Single CAGMOEKHFPI; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + HONLOMMPEJE__CTOR_OFFSET))(this);
	}

	::System::Void MPOHGONLNCC(::MoleMole::LightbarPresetEntry AAIJGGIEOGK)
	{
		return ((::System::Void(*)(::PVOID, ::MoleMole::LightbarPresetEntry))((::PBYTE)hIl2Cpp + HONLOMMPEJE_MPOHGONLNCC_OFFSET))(this, AAIJGGIEOGK);
	}
};
