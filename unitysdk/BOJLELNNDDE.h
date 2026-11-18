#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/JGLIFHIAIEH.h"
#include "unitysdk/System/Object.h"

#define BOJLELNNDDE_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x1D68E2E0)
#define BOJLELNNDDE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D68E2D0)

inline static constexpr unsigned int BOJLELNNDDE_TypeDefinitionIndex = 94178;

class BOJLELNNDDE : public ::System::Object
{
public:
	::System::UInt32 DPGCKBEJLJD; // 0x10
	::JGLIFHIAIEH CEKEJNGJKLD; // 0x14
	::System::Single IOPHPCGGCNG; // 0x1C
	::JGLIFHIAIEH PPAHLMKPHIK; // 0x20
	::System::Single JOLJALOGIIN; // 0x28
	::System::Single EKLNMNNOMLI; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJLELNNDDE__CTOR_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BOJLELNNDDE_NPOLNFDBOOD_OFFSET))(this);
	}
};
