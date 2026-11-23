#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A65A2E103B4AF1B3;
namespace System { class String; }

#define A65A2E103B4AF1B3_EFA8FE532AFBF83F_ABEC175CE49A6BC7_OFFSET UNITYSDK_OFFSET(0x39FB060)
#define A65A2E103B4AF1B3_EFA8FE532AFBF83F__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A65A2E103B4AF1B3_EFA8FE532AFBF83F_TypeDefinitionIndex = 11899;

class A65A2E103B4AF1B3_EFA8FE532AFBF83F : public ::System::Object
{
public:
	::A65A2E103B4AF1B3* A544919C800E2923; // 0x10
	::System::String* F0D3F87128A7C4CA; // 0x18
	::System::String* A9F10D340211E882; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A65A2E103B4AF1B3_EFA8FE532AFBF83F__CTOR_OFFSET))(this);
	}

	::System::Void ABEC175CE49A6BC7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A65A2E103B4AF1B3_EFA8FE532AFBF83F_ABEC175CE49A6BC7_OFFSET))(this);
	}
};
