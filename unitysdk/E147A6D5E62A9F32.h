#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A1D285BD12A63963.h"

#define E147A6D5E62A9F32_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x28FE2D0)
#define E147A6D5E62A9F32_F0BDA4C0F8857362_OFFSET UNITYSDK_OFFSET(0x28FE5B0)
#define E147A6D5E62A9F32__CTOR_1_OFFSET UNITYSDK_OFFSET(0x28FE530)
#define E147A6D5E62A9F32__CTOR_OFFSET UNITYSDK_OFFSET(0x28FE470)

inline static constexpr unsigned int E147A6D5E62A9F32_TypeDefinitionIndex = 19776;

class E147A6D5E62A9F32 : public ::A1D285BD12A63963
{
public:
	::System::IntPtr E432FC1D74EB921A; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E147A6D5E62A9F32__CTOR_OFFSET))(this);
	}

	::System::Void F0BDA4C0F8857362(::System::IntPtr AC0A5E8A4F485F1F)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + E147A6D5E62A9F32_F0BDA4C0F8857362_OFFSET))(this, AC0A5E8A4F485F1F);
	}

	::System::Void E8AF1E0387A100FA(::System::Boolean FB4A1BD5C4242BE9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E147A6D5E62A9F32_E8AF1E0387A100FA_OFFSET))(this, FB4A1BD5C4242BE9);
	}

	::System::Void _ctor_1(::System::IntPtr AC0A5E8A4F485F1F, ::System::Boolean A8CED94AB62D02E7)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + E147A6D5E62A9F32__CTOR_1_OFFSET))(this, AC0A5E8A4F485F1F, A8CED94AB62D02E7);
	}
};
