#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define OMKFNPNJEKN_DLPKIHNOEEP_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0xE163E70)
#define OMKFNPNJEKN_DLPKIHNOEEP_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0xE163F10)
#define OMKFNPNJEKN_DLPKIHNOEEP__CTOR_OFFSET UNITYSDK_OFFSET(0xE163E60)

inline static constexpr unsigned int OMKFNPNJEKN_DLPKIHNOEEP_TypeDefinitionIndex = 86989;

class OMKFNPNJEKN_DLPKIHNOEEP : public ::System::Object
{
public:
	::HOCDHMEPPEG IBGCCDMAKLL; // 0x10
	::HOCDHMEPPEG NAJFKABGKKF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKFNPNJEKN_DLPKIHNOEEP__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKFNPNJEKN_DLPKIHNOEEP_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMKFNPNJEKN_DLPKIHNOEEP_LIDNPLMPHAL_OFFSET))(this);
	}
};
