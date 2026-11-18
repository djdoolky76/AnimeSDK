#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define IJFDNCNPBKJ_FHGHPJJMODJ_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x16A9FD10)
#define IJFDNCNPBKJ_FHGHPJJMODJ_HOFIFAEOLBM_OFFSET UNITYSDK_OFFSET(0x16A9FC70)
#define IJFDNCNPBKJ_FHGHPJJMODJ_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x16A9FBD0)
#define IJFDNCNPBKJ_FHGHPJJMODJ__CTOR_OFFSET UNITYSDK_OFFSET(0x16A9FBC0)

inline static constexpr unsigned int IJFDNCNPBKJ_FHGHPJJMODJ_TypeDefinitionIndex = 85998;

class IJFDNCNPBKJ_FHGHPJJMODJ : public ::System::Object
{
public:
	::HOCDHMEPPEG IDBMCHCEHIO; // 0x10
	::HOCDHMEPPEG AJHFDMLOGIF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFDNCNPBKJ_FHGHPJJMODJ__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFDNCNPBKJ_FHGHPJJMODJ_LIDNPLMPHAL_OFFSET))(this);
	}

	::System::Void HOFIFAEOLBM()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFDNCNPBKJ_FHGHPJJMODJ_HOFIFAEOLBM_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IJFDNCNPBKJ_FHGHPJJMODJ_AAHMACBDCPN_OFFSET))(this);
	}
};
