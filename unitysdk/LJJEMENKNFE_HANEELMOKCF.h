#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define LJJEMENKNFE_HANEELMOKCF_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x12A61E60)
#define LJJEMENKNFE_HANEELMOKCF_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x12A61F00)
#define LJJEMENKNFE_HANEELMOKCF__CTOR_OFFSET UNITYSDK_OFFSET(0x12A61E50)

inline static constexpr unsigned int LJJEMENKNFE_HANEELMOKCF_TypeDefinitionIndex = 48787;

class LJJEMENKNFE_HANEELMOKCF : public ::System::Object
{
public:
	::HOCDHMEPPEG AJHFDMLOGIF; // 0x10
	::HOCDHMEPPEG DOHGKLMAIJA; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJEMENKNFE_HANEELMOKCF__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJEMENKNFE_HANEELMOKCF_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LJJEMENKNFE_HANEELMOKCF_LIDNPLMPHAL_OFFSET))(this);
	}
};
