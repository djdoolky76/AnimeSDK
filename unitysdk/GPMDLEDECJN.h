#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/CGDADMHCJEL.h"

#define GPMDLEDECJN_HBKJFHBMEMP_OFFSET UNITYSDK_OFFSET(0x16CDB670)
#define GPMDLEDECJN_KNLGIGBGGFH_OFFSET UNITYSDK_OFFSET(0x16CDB720)
#define GPMDLEDECJN_LGEAHHGPPOF_OFFSET UNITYSDK_OFFSET(0x16CDB7B0)
#define GPMDLEDECJN_NPOLNFDBOOD_OFFSET UNITYSDK_OFFSET(0x16CDB760)
#define GPMDLEDECJN_PKAFJHDJEDO_OFFSET UNITYSDK_OFFSET(0x16CDB6B0)
#define GPMDLEDECJN__CTOR_OFFSET UNITYSDK_OFFSET(0x16CDB7A0)

inline static constexpr unsigned int GPMDLEDECJN_TypeDefinitionIndex = 54185;

class GPMDLEDECJN : public ::System::Object
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMDLEDECJN__CTOR_OFFSET))(this);
	}

	::System::Boolean HBKJFHBMEMP()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMDLEDECJN_HBKJFHBMEMP_OFFSET))(this);
	}

	::CGDADMHCJEL PKAFJHDJEDO(::System::Single FNIOPKPHDEH)
	{
		return ((::CGDADMHCJEL(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + GPMDLEDECJN_PKAFJHDJEDO_OFFSET))(this, FNIOPKPHDEH);
	}

	::System::Void KNLGIGBGGFH()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMDLEDECJN_KNLGIGBGGFH_OFFSET))(this);
	}

	::System::Void NPOLNFDBOOD()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMDLEDECJN_NPOLNFDBOOD_OFFSET))(this);
	}

	::System::Void LGEAHHGPPOF()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GPMDLEDECJN_LGEAHHGPPOF_OFFSET))(this);
	}
};
