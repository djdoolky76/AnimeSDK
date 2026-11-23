#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define B32BFAA429008AE6_F97E71B06E086D4C_AUTOSCOPE_DISPOSE_OFFSET UNITYSDK_OFFSET(0x417AD70)
#define B32BFAA429008AE6_F97E71B06E086D4C_AUTOSCOPE__CTOR_OFFSET UNITYSDK_OFFSET(0x417ADA0)

namespace B32BFAA429008AE6
{
	inline static constexpr unsigned int F97E71B06E086D4C_AutoScope_TypeDefinitionIndex = 17648;

	struct alignas(4) F97E71B06E086D4C_AutoScope
	{
		::System::IntPtr m_Ptr; // 0x10

		::System::Void _ctor(::System::IntPtr A2D8D872AB2657CE)
		{
			return ((::System::Void(*)(::PVOID, ::System::IntPtr))((::PBYTE)hIl2Cpp + B32BFAA429008AE6_F97E71B06E086D4C_AUTOSCOPE__CTOR_OFFSET))(this, A2D8D872AB2657CE);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + B32BFAA429008AE6_F97E71B06E086D4C_AUTOSCOPE_DISPOSE_OFFSET))(this);
		}
	};
}
