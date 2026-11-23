#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class AC6F35A8B50F1B37;
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define B06226C3DAB5DBC8_A85713D2AB204F33_E9A68E0083984F7A_OFFSET UNITYSDK_OFFSET(0x1BFCDA0)
#define B06226C3DAB5DBC8_A85713D2AB204F33__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B06226C3DAB5DBC8_A85713D2AB204F33_TypeDefinitionIndex = 289;

class B06226C3DAB5DBC8_A85713D2AB204F33 : public ::System::Object
{
public:
	::System::Collections::Generic::Dictionary_2<::System::UInt32, ::AC6F35A8B50F1B37*>* F7546E75F13E8F1A; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B06226C3DAB5DBC8_A85713D2AB204F33__CTOR_OFFSET))(this);
	}

	::System::Int32 E9A68E0083984F7A(::System::UInt32 BB8C609F76620E45, ::System::UInt32 A0A0D02932F12CFD)
	{
		return ((::System::Int32(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + B06226C3DAB5DBC8_A85713D2AB204F33_E9A68E0083984F7A_OFFSET))(this, BB8C609F76620E45, A0A0D02932F12CFD);
	}
};
