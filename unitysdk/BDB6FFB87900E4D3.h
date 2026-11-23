#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A1D285BD12A63963.h"

#define BDB6FFB87900E4D3_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x28FD9D0)
#define BDB6FFB87900E4D3_F0BDA4C0F8857362_OFFSET UNITYSDK_OFFSET(0x28FDCB0)
#define BDB6FFB87900E4D3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x28FDC30)
#define BDB6FFB87900E4D3__CTOR_OFFSET UNITYSDK_OFFSET(0x28FDB70)

inline static constexpr unsigned int BDB6FFB87900E4D3_TypeDefinitionIndex = 19725;

class BDB6FFB87900E4D3 : public ::A1D285BD12A63963
{
public:
	::System::IntPtr E432FC1D74EB921A; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BDB6FFB87900E4D3__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::IntPtr AC0A5E8A4F485F1F, ::System::Boolean A8CED94AB62D02E7)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + BDB6FFB87900E4D3__CTOR_1_OFFSET))(this, AC0A5E8A4F485F1F, A8CED94AB62D02E7);
	}

	::System::Void E8AF1E0387A100FA(::System::Boolean FB4A1BD5C4242BE9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + BDB6FFB87900E4D3_E8AF1E0387A100FA_OFFSET))(this, FB4A1BD5C4242BE9);
	}

	::System::Void F0BDA4C0F8857362(::System::IntPtr AC0A5E8A4F485F1F)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + BDB6FFB87900E4D3_F0BDA4C0F8857362_OFFSET))(this, AC0A5E8A4F485F1F);
	}
};
