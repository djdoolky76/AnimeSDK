#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A562B26E18EFF98F.h"

#define ADD99CDFAD465DD5_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x28FE890)
#define ADD99CDFAD465DD5_F0BDA4C0F8857362_OFFSET UNITYSDK_OFFSET(0x28FEB30)
#define ADD99CDFAD465DD5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x28FEA30)
#define ADD99CDFAD465DD5__CTOR_OFFSET UNITYSDK_OFFSET(0x28FEA90)

inline static constexpr unsigned int ADD99CDFAD465DD5_TypeDefinitionIndex = 19774;

class ADD99CDFAD465DD5 : public ::A562B26E18EFF98F
{
public:
	::System::IntPtr E432FC1D74EB921A; // 0x20

	::System::Void F0BDA4C0F8857362(::System::IntPtr AC0A5E8A4F485F1F)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + ADD99CDFAD465DD5_F0BDA4C0F8857362_OFFSET))(this, AC0A5E8A4F485F1F);
	}

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ADD99CDFAD465DD5__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::IntPtr AC0A5E8A4F485F1F, ::System::Boolean A8CED94AB62D02E7)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + ADD99CDFAD465DD5__CTOR_1_OFFSET))(this, AC0A5E8A4F485F1F, A8CED94AB62D02E7);
	}

	::System::Void E8AF1E0387A100FA(::System::Boolean FB4A1BD5C4242BE9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + ADD99CDFAD465DD5_E8AF1E0387A100FA_OFFSET))(this, FB4A1BD5C4242BE9);
	}
};
