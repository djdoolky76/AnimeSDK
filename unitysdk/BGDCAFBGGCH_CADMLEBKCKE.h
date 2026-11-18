#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DBPGIOEACCH;

#define BGDCAFBGGCH_CADMLEBKCKE_LIDNPLMPHAL_OFFSET UNITYSDK_OFFSET(0x10DD6C30)
#define BGDCAFBGGCH_CADMLEBKCKE__CTOR_OFFSET UNITYSDK_OFFSET(0x10DD6C20)

inline static constexpr unsigned int BGDCAFBGGCH_CADMLEBKCKE_TypeDefinitionIndex = 69921;

class BGDCAFBGGCH_CADMLEBKCKE : public ::System::Object
{
public:
	::DBPGIOEACCH* LJBPECKCCEA; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BGDCAFBGGCH_CADMLEBKCKE__CTOR_OFFSET))(this);
	}

	::System::Void LIDNPLMPHAL(::System::UInt32 GFOPLDDFDIA, ::System::UInt32 OGCCFFDGKII)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + BGDCAFBGGCH_CADMLEBKCKE_LIDNPLMPHAL_OFFSET))(this, GFOPLDDFDIA, OGCCFFDGKII);
	}
};
