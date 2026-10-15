#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_712_395BED0909828222_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14982220)
#define CLASS_712_395BED0909828222_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14981E20)
#define CLASS_712_395BED0909828222_METHOD_OFFSET UNITYSDK_OFFSET(0x14982470)

inline static constexpr unsigned int Class_712_395BED0909828222_TypeDefinitionIndex = 51047;

	class Class_712_395BED0909828222 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_712_395BED0909828222_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_712_395BED0909828222_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_712_395BED0909828222_METHOD_2_OFFSET))(a1);
		}

	};
