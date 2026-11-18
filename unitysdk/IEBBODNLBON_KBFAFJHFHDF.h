#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HOCDHMEPPEG.h"
#include "unitysdk/System/Object.h"

#define IEBBODNLBON_KBFAFJHFHDF_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x1539FA20)
#define IEBBODNLBON_KBFAFJHFHDF_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x1539FAC0)
#define IEBBODNLBON_KBFAFJHFHDF__CTOR_OFFSET UNITYSDK_OFFSET(0x1539FA10)

inline static constexpr unsigned int IEBBODNLBON_KBFAFJHFHDF_TypeDefinitionIndex = 55665;

class IEBBODNLBON_KBFAFJHFHDF : public ::System::Object
{
public:
	::HOCDHMEPPEG DOHGKLMAIJA; // 0x10
	::HOCDHMEPPEG AJHFDMLOGIF; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBBODNLBON_KBFAFJHFHDF__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBBODNLBON_KBFAFJHFHDF_AAHMACBDCPN_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IEBBODNLBON_KBFAFJHFHDF_LIDNPLMPHAL_OFFSET))(this);
	}
};
