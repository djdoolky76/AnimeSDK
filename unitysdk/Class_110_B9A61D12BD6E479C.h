#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_110_B9A61D12BD6E479C_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1709D6B0)
#define CLASS_110_B9A61D12BD6E479C_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1709D280)
#define CLASS_110_B9A61D12BD6E479C_METHOD_OFFSET UNITYSDK_OFFSET(0x1709D940)

inline static constexpr unsigned int Class_110_B9A61D12BD6E479C_TypeDefinitionIndex = 51462;

	class Class_110_B9A61D12BD6E479C : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_110_B9A61D12BD6E479C_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_110_B9A61D12BD6E479C_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_110_B9A61D12BD6E479C_METHOD_2_OFFSET))(a1);
		}

	};
