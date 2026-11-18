#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define DPOAKGKGMOD_GONCNKMOJGL_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x10625180)
#define DPOAKGKGMOD_GONCNKMOJGL_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x10625220)
#define DPOAKGKGMOD_GONCNKMOJGL__CTOR_OFFSET UNITYSDK_OFFSET(0x10625170)

inline static constexpr unsigned int DPOAKGKGMOD_GONCNKMOJGL_TypeDefinitionIndex = 73172;

class DPOAKGKGMOD_GONCNKMOJGL : public ::System::Object
{
public:
	::HOCDHMEPPEG AJHFDMLOGIF; // 0x10
	::HOCDHMEPPEG DOHGKLMAIJA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOAKGKGMOD_GONCNKMOJGL__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOAKGKGMOD_GONCNKMOJGL_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DPOAKGKGMOD_GONCNKMOJGL_LIDNPLMPHAL_OFFSET))(this);
	}
};
