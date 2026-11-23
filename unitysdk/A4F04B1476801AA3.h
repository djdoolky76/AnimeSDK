#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A1D285BD12A63963.h"

#define A4F04B1476801AA3_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x28FD690)
#define A4F04B1476801AA3_F0BDA4C0F8857362_OFFSET UNITYSDK_OFFSET(0x28FD970)
#define A4F04B1476801AA3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x28FD8B0)
#define A4F04B1476801AA3__CTOR_OFFSET UNITYSDK_OFFSET(0x28FD830)

inline static constexpr unsigned int A4F04B1476801AA3_TypeDefinitionIndex = 19757;

class A4F04B1476801AA3 : public ::A1D285BD12A63963
{
public:
	::System::IntPtr E432FC1D74EB921A; // 0x28

	::System::Void _ctor(::System::IntPtr AC0A5E8A4F485F1F, ::System::Boolean A8CED94AB62D02E7)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + A4F04B1476801AA3__CTOR_OFFSET))(this, AC0A5E8A4F485F1F, A8CED94AB62D02E7);
	}

	::System::Void E8AF1E0387A100FA(::System::Boolean FB4A1BD5C4242BE9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A4F04B1476801AA3_E8AF1E0387A100FA_OFFSET))(this, FB4A1BD5C4242BE9);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A4F04B1476801AA3__CTOR_1_OFFSET))(this);
	}

	::System::Void F0BDA4C0F8857362(::System::IntPtr AC0A5E8A4F485F1F)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + A4F04B1476801AA3_F0BDA4C0F8857362_OFFSET))(this, AC0A5E8A4F485F1F);
	}
};
