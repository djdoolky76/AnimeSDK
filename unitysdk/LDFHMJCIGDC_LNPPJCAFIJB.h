#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define LDFHMJCIGDC_LNPPJCAFIJB_COICHOCDAKN_OFFSET UNITYSDK_OFFSET(0x1A2EDB20)
#define LDFHMJCIGDC_LNPPJCAFIJB__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2EDB10)

inline static constexpr unsigned int LDFHMJCIGDC_LNPPJCAFIJB_TypeDefinitionIndex = 49144;

class LDFHMJCIGDC_LNPPJCAFIJB : public ::System::Object
{
public:
	::System::UInt32 KOHMMEGHGGL; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_LNPPJCAFIJB__CTOR_OFFSET))(this);
	}

	::System::Boolean COICHOCDAKN(::System::UInt32 HAAEBCOBKFF)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + LDFHMJCIGDC_LNPPJCAFIJB_COICHOCDAKN_OFFSET))(this, HAAEBCOBKFF);
	}
};
