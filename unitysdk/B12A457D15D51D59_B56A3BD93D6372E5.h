#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A04FB906869DCF3A;
namespace System { class Action; }
namespace System { class String; }

#define B12A457D15D51D59_B56A3BD93D6372E5_E53A80012CBB753E_OFFSET UNITYSDK_OFFSET(0x1F66720)
#define B12A457D15D51D59_B56A3BD93D6372E5__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B12A457D15D51D59_B56A3BD93D6372E5_TypeDefinitionIndex = 7811;

class B12A457D15D51D59_B56A3BD93D6372E5 : public ::System::Object
{
public:
	::System::String* B383F0530E7FBDBD; // 0x10
	::System::String* E7F13465F7E064E1; // 0x18
	::System::Action* A9AD4CF79441A92B; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B12A457D15D51D59_B56A3BD93D6372E5__CTOR_OFFSET))(this);
	}

	::System::Void E53A80012CBB753E(::A04FB906869DCF3A* F9ADA718944F49ED)
	{
		return ((::System::Void(*)(::PVOID, ::A04FB906869DCF3A*))((::PBYTE)hIl2Cpp + B12A457D15D51D59_B56A3BD93D6372E5_E53A80012CBB753E_OFFSET))(this, F9ADA718944F49ED);
	}
};
