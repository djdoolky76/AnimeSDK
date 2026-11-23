#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class A04FB906869DCF3A;
namespace System { class Action; }
namespace System { class String; }

#define B12A457D15D51D59_F0C32B0E8DC70ADE_AFB50B70C392CFEF_OFFSET UNITYSDK_OFFSET(0x1F667C0)
#define B12A457D15D51D59_F0C32B0E8DC70ADE__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

inline static constexpr unsigned int B12A457D15D51D59_F0C32B0E8DC70ADE_TypeDefinitionIndex = 7812;

class B12A457D15D51D59_F0C32B0E8DC70ADE : public ::System::Object
{
public:
	::System::String* B383F0530E7FBDBD; // 0x10
	::System::String* E7F13465F7E064E1; // 0x18
	::System::Action* A9AD4CF79441A92B; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B12A457D15D51D59_F0C32B0E8DC70ADE__CTOR_OFFSET))(this);
	}

	::System::Void AFB50B70C392CFEF(::A04FB906869DCF3A* B37DE1921D9E9747)
	{
		return ((::System::Void(*)(::PVOID, ::A04FB906869DCF3A*))((::PBYTE)hIl2Cpp + B12A457D15D51D59_F0C32B0E8DC70ADE_AFB50B70C392CFEF_OFFSET))(this, B37DE1921D9E9747);
	}
};
