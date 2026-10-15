#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_299_C6A43B039024DE27_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148CC780)
#define CLASS_299_C6A43B039024DE27_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148CC380)
#define CLASS_299_C6A43B039024DE27_METHOD_OFFSET UNITYSDK_OFFSET(0x148CC9D0)

inline static constexpr unsigned int Class_299_C6A43B039024DE27_TypeDefinitionIndex = 50628;

	class Class_299_C6A43B039024DE27 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_299_C6A43B039024DE27_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_299_C6A43B039024DE27_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_299_C6A43B039024DE27_METHOD_2_OFFSET))(a1);
		}

	};
