#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1287_DE13C6F05861502F_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A5C800)
#define CLASS_1287_DE13C6F05861502F_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A5C400)
#define CLASS_1287_DE13C6F05861502F_METHOD_OFFSET UNITYSDK_OFFSET(0x14A5CA50)

inline static constexpr unsigned int Class_1287_DE13C6F05861502F_TypeDefinitionIndex = 51622;

	class Class_1287_DE13C6F05861502F : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1287_DE13C6F05861502F_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1287_DE13C6F05861502F_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1287_DE13C6F05861502F_METHOD_2_OFFSET))(a1);
		}

	};
