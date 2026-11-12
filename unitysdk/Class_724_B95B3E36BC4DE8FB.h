#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_724_B95B3E36BC4DE8FB_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1582C900)
#define CLASS_724_B95B3E36BC4DE8FB_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1582C500)
#define CLASS_724_B95B3E36BC4DE8FB_METHOD_OFFSET UNITYSDK_OFFSET(0x1582CB50)

inline static constexpr unsigned int Class_724_B95B3E36BC4DE8FB_TypeDefinitionIndex = 52110;

	class Class_724_B95B3E36BC4DE8FB : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_724_B95B3E36BC4DE8FB_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_724_B95B3E36BC4DE8FB_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_724_B95B3E36BC4DE8FB_METHOD_2_OFFSET))(a1);
		}

	};
