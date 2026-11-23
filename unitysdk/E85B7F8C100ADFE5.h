#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/A562B26E18EFF98F.h"

#define E85B7F8C100ADFE5_E8AF1E0387A100FA_OFFSET UNITYSDK_OFFSET(0x28FAE50)
#define E85B7F8C100ADFE5_F0BDA4C0F8857362_OFFSET UNITYSDK_OFFSET(0x28FB0F0)
#define E85B7F8C100ADFE5__CTOR_1_OFFSET UNITYSDK_OFFSET(0x28FAFF0)
#define E85B7F8C100ADFE5__CTOR_OFFSET UNITYSDK_OFFSET(0x28FB090)

inline static constexpr unsigned int E85B7F8C100ADFE5_TypeDefinitionIndex = 19728;

class E85B7F8C100ADFE5 : public ::A562B26E18EFF98F
{
public:
	::System::IntPtr E432FC1D74EB921A; // 0x20

	::System::Void F0BDA4C0F8857362(::System::IntPtr AC0A5E8A4F485F1F)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + E85B7F8C100ADFE5_F0BDA4C0F8857362_OFFSET))(this, AC0A5E8A4F485F1F);
	}

	::System::Void E8AF1E0387A100FA(::System::Boolean FB4A1BD5C4242BE9)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + E85B7F8C100ADFE5_E8AF1E0387A100FA_OFFSET))(this, FB4A1BD5C4242BE9);
	}

	::System::Void _ctor(::System::IntPtr AC0A5E8A4F485F1F, ::System::Boolean A8CED94AB62D02E7)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + E85B7F8C100ADFE5__CTOR_OFFSET))(this, AC0A5E8A4F485F1F, A8CED94AB62D02E7);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + E85B7F8C100ADFE5__CTOR_1_OFFSET))(this);
	}
};
