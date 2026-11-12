#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1336_03F5313DCA24E440_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1597EC00)
#define CLASS_1336_03F5313DCA24E440_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1597E800)
#define CLASS_1336_03F5313DCA24E440_METHOD_OFFSET UNITYSDK_OFFSET(0x1597EE50)

inline static constexpr unsigned int Class_1336_03F5313DCA24E440_TypeDefinitionIndex = 52725;

	class Class_1336_03F5313DCA24E440 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1336_03F5313DCA24E440_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1336_03F5313DCA24E440_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1336_03F5313DCA24E440_METHOD_2_OFFSET))(a1);
		}

	};
