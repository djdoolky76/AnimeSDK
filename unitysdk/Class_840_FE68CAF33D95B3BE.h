#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_840_FE68CAF33D95B3BE_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BB75F30)
#define CLASS_840_FE68CAF33D95B3BE_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BB75B30)
#define CLASS_840_FE68CAF33D95B3BE_METHOD_OFFSET UNITYSDK_OFFSET(0x1BB76180)

inline static constexpr unsigned int Class_840_FE68CAF33D95B3BE_TypeDefinitionIndex = 52226;

	class Class_840_FE68CAF33D95B3BE : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_840_FE68CAF33D95B3BE_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_840_FE68CAF33D95B3BE_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_840_FE68CAF33D95B3BE_METHOD_2_OFFSET))(a1);
		}

	};
