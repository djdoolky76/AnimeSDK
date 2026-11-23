#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A65A2E103B4AF1B3;
namespace MiHoYo::SDK { template <typename T> class CallbackModel_1; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define A65A2E103B4AF1B3_E8CDE6BA8DD6974B_A5107D71C32B5D2B_OFFSET UNITYSDK_OFFSET(0x39FABA0)
#define A65A2E103B4AF1B3_E8CDE6BA8DD6974B_A839AD008FC045E0_OFFSET UNITYSDK_OFFSET(0x39FAA40)
#define A65A2E103B4AF1B3_E8CDE6BA8DD6974B_FBDCD037682E3BCE_OFFSET UNITYSDK_OFFSET(0x39FA710)
#define A65A2E103B4AF1B3_E8CDE6BA8DD6974B__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int A65A2E103B4AF1B3_E8CDE6BA8DD6974B_TypeDefinitionIndex = 11896;

class A65A2E103B4AF1B3_E8CDE6BA8DD6974B : public ::System::Object
{
public:
	::A65A2E103B4AF1B3* A544919C800E2923; // 0x10
	::System::Action_1<::MiHoYo::SDK::CallbackModel_1<::System::String*>*>* E04D2BE64FCE9814; // 0x18
	::System::Action_1<::System::Boolean>* FC1BFCAB993D006C; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A65A2E103B4AF1B3_E8CDE6BA8DD6974B__CTOR_OFFSET))(this);
	}

	::System::Void FBDCD037682E3BCE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A65A2E103B4AF1B3_E8CDE6BA8DD6974B_FBDCD037682E3BCE_OFFSET))(this);
	}

	::System::Void A5107D71C32B5D2B(::System::Boolean ECA0A9EE9921E82B)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A65A2E103B4AF1B3_E8CDE6BA8DD6974B_A5107D71C32B5D2B_OFFSET))(this, ECA0A9EE9921E82B);
	}

	::System::Void A839AD008FC045E0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A65A2E103B4AF1B3_E8CDE6BA8DD6974B_A839AD008FC045E0_OFFSET))(this);
	}
};
