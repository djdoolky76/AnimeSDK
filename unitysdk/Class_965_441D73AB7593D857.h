#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_965_441D73AB7593D857_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1588C190)
#define CLASS_965_441D73AB7593D857_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1588BD90)
#define CLASS_965_441D73AB7593D857_METHOD_OFFSET UNITYSDK_OFFSET(0x1588C3E0)

inline static constexpr unsigned int Class_965_441D73AB7593D857_TypeDefinitionIndex = 52351;

	class Class_965_441D73AB7593D857 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_965_441D73AB7593D857_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_965_441D73AB7593D857_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_965_441D73AB7593D857_METHOD_2_OFFSET))(a1);
		}

	};
