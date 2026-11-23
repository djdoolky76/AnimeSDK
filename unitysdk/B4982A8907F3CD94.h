#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define B4982A8907F3CD94_B9929595266D17F1_OFFSET UNITYSDK_OFFSET(0x21910C0)
#define B4982A8907F3CD94_BAFABD02A776AD32_OFFSET UNITYSDK_OFFSET(0x2190F50)
#define B4982A8907F3CD94_E19848CD31FA2DF7_OFFSET UNITYSDK_OFFSET(0x2191150)
#define B4982A8907F3CD94_EB5521D9D4269C97_OFFSET UNITYSDK_OFFSET(0x21911E0)

inline static constexpr unsigned int B4982A8907F3CD94_TypeDefinitionIndex = 8769;

class B4982A8907F3CD94 : public ::System::Object
{
public:
	static ::System::UInt32 B9929595266D17F1()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + B4982A8907F3CD94_B9929595266D17F1_OFFSET))();
	}

	static ::System::String* BAFABD02A776AD32()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + B4982A8907F3CD94_BAFABD02A776AD32_OFFSET))();
	}

	static ::System::String* EB5521D9D4269C97()
	{
		return ((::System::String*(*)())((::PBYTE)hIl2Cpp + B4982A8907F3CD94_EB5521D9D4269C97_OFFSET))();
	}

	static ::System::UInt32 E19848CD31FA2DF7()
	{
		return ((::System::UInt32(*)())((::PBYTE)hIl2Cpp + B4982A8907F3CD94_E19848CD31FA2DF7_OFFSET))();
	}
};
