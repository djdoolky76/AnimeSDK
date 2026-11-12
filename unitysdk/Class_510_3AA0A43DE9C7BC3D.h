#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_510_3AA0A43DE9C7BC3D_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157D6B00)
#define CLASS_510_3AA0A43DE9C7BC3D_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157D6700)
#define CLASS_510_3AA0A43DE9C7BC3D_METHOD_OFFSET UNITYSDK_OFFSET(0x157D6D50)

inline static constexpr unsigned int Class_510_3AA0A43DE9C7BC3D_TypeDefinitionIndex = 51895;

	class Class_510_3AA0A43DE9C7BC3D : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_510_3AA0A43DE9C7BC3D_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_510_3AA0A43DE9C7BC3D_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_510_3AA0A43DE9C7BC3D_METHOD_2_OFFSET))(a1);
		}

	};
