#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1028_200155FC29455AAD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BE47DA0)
#define CLASS_1028_200155FC29455AAD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BE479A0)
#define CLASS_1028_200155FC29455AAD_METHOD_OFFSET UNITYSDK_OFFSET(0x1BE47FD0)

inline static constexpr unsigned int Class_1028_200155FC29455AAD_TypeDefinitionIndex = 52414;

	class Class_1028_200155FC29455AAD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1028_200155FC29455AAD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1028_200155FC29455AAD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1028_200155FC29455AAD_METHOD_2_OFFSET))(a1);
		}

	};
