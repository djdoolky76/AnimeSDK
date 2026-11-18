#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DBPGIOEACCH;

#define BGDCAFBGGCH_MDPOLBMHBPI_AAHMACBDCPN_OFFSET UNITYSDK_OFFSET(0x12D2B0A0)
#define BGDCAFBGGCH_MDPOLBMHBPI__CTOR_OFFSET UNITYSDK_OFFSET(0x12D2B090)

inline static constexpr unsigned int BGDCAFBGGCH_MDPOLBMHBPI_TypeDefinitionIndex = 69923;

class BGDCAFBGGCH_MDPOLBMHBPI : public ::System::Object
{
public:
	::DBPGIOEACCH* LJBPECKCCEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDCAFBGGCH_MDPOLBMHBPI__CTOR_OFFSET))(this);
	}

	::System::Void AAHMACBDCPN(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 OGCCFFDGKII)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BGDCAFBGGCH_MDPOLBMHBPI_AAHMACBDCPN_OFFSET))(this, GFOPLDDFDIA, OGCCFFDGKII);
	}
};
