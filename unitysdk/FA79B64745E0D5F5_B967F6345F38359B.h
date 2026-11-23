#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/InteropServices/SafeHandle.h"

#define FA79B64745E0D5F5_B967F6345F38359B_A4555184A1656FFE_OFFSET UNITYSDK_OFFSET(0x3ECA610)
#define FA79B64745E0D5F5_B967F6345F38359B__CTOR_1_OFFSET UNITYSDK_OFFSET(0x3EF3890)
#define FA79B64745E0D5F5_B967F6345F38359B__CTOR_OFFSET UNITYSDK_OFFSET(0x3ECA600)

inline static constexpr unsigned int FA79B64745E0D5F5_B967F6345F38359B_TypeDefinitionIndex = 15220;

class FA79B64745E0D5F5_B967F6345F38359B : public ::System::Runtime::InteropServices::SafeHandle
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FA79B64745E0D5F5_B967F6345F38359B__CTOR_OFFSET))(this);
	}

	::System::Void _ctor_1(::System::IntPtr E38FD399E4DFEF27, ::System::Boolean F61E953F737E3C7A)
	{
		return ((::System::Void(*)(::PVOID, ::System::IntPtr, ::System::Boolean))((::PBYTE)hIl2Cpp + FA79B64745E0D5F5_B967F6345F38359B__CTOR_1_OFFSET))(this, E38FD399E4DFEF27, F61E953F737E3C7A);
	}

	::System::Boolean A4555184A1656FFE()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FA79B64745E0D5F5_B967F6345F38359B_A4555184A1656FFE_OFFSET))(this);
	}
};
