#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1009_CD7F454EE90A7375_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1589D970)
#define CLASS_1009_CD7F454EE90A7375_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1589D570)
#define CLASS_1009_CD7F454EE90A7375_METHOD_OFFSET UNITYSDK_OFFSET(0x1589DBA0)

inline static constexpr unsigned int Class_1009_CD7F454EE90A7375_TypeDefinitionIndex = 52395;

	class Class_1009_CD7F454EE90A7375 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1009_CD7F454EE90A7375_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1009_CD7F454EE90A7375_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1009_CD7F454EE90A7375_METHOD_2_OFFSET))(a1);
		}

	};
