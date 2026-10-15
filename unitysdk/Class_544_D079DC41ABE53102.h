#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_544_D079DC41ABE53102_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1493E800)
#define CLASS_544_D079DC41ABE53102_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1493E400)
#define CLASS_544_D079DC41ABE53102_METHOD_OFFSET UNITYSDK_OFFSET(0x1493EA50)

inline static constexpr unsigned int Class_544_D079DC41ABE53102_TypeDefinitionIndex = 50878;

	class Class_544_D079DC41ABE53102 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_544_D079DC41ABE53102_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_544_D079DC41ABE53102_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_544_D079DC41ABE53102_METHOD_2_OFFSET))(a1);
		}

	};
