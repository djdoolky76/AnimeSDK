#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A1D285BD12A63963.h"

#define A20475EC5BA2FA27_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x28FAB10)
#define A20475EC5BA2FA27_F0BDA4C0F8857362_OFFSET UNITYSDK_OFFSET(0x28FADF0)
#define A20475EC5BA2FA27__CTOR_1_OFFSET UNITYSDK_OFFSET(0x28FACB0)
#define A20475EC5BA2FA27__CTOR_OFFSET UNITYSDK_OFFSET(0x28FAD70)

inline static constexpr unsigned int A20475EC5BA2FA27_TypeDefinitionIndex = 19756;

class A20475EC5BA2FA27 : public ::A1D285BD12A63963
{
public:
	::System::IntPtr E432FC1D74EB921A; // 0x28

	::System::Void E8AF1E0387A100FA(::System::Boolean FB4A1BD5C4242BE9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + A20475EC5BA2FA27_E8AF1E0387A100FA_OFFSET))(this, FB4A1BD5C4242BE9);
	}

	::System::Void F0BDA4C0F8857362(::System::IntPtr AC0A5E8A4F485F1F)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + A20475EC5BA2FA27_F0BDA4C0F8857362_OFFSET))(this, AC0A5E8A4F485F1F);
	}

	::System::Void _ctor(::System::IntPtr AC0A5E8A4F485F1F, ::System::Boolean A8CED94AB62D02E7)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + A20475EC5BA2FA27__CTOR_OFFSET))(this, AC0A5E8A4F485F1F, A8CED94AB62D02E7);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + A20475EC5BA2FA27__CTOR_1_OFFSET))(this);
	}
};
