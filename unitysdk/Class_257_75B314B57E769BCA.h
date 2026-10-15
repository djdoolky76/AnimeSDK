#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_257_75B314B57E769BCA_METHOD_1_OFFSET UNITYSDK_OFFSET(0xB852980)
#define CLASS_257_75B314B57E769BCA_METHOD_2_OFFSET UNITYSDK_OFFSET(0xB852550)
#define CLASS_257_75B314B57E769BCA_METHOD_OFFSET UNITYSDK_OFFSET(0xB852C10)

inline static constexpr unsigned int Class_257_75B314B57E769BCA_TypeDefinitionIndex = 50570;

	class Class_257_75B314B57E769BCA : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_257_75B314B57E769BCA_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_257_75B314B57E769BCA_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_257_75B314B57E769BCA_METHOD_2_OFFSET))(a1);
		}

	};
