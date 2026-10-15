#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_431_3971EC8FDD1545B2_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14900E40)
#define CLASS_431_3971EC8FDD1545B2_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14900A40)
#define CLASS_431_3971EC8FDD1545B2_METHOD_OFFSET UNITYSDK_OFFSET(0x14901090)

inline static constexpr unsigned int Class_431_3971EC8FDD1545B2_TypeDefinitionIndex = 50760;

	class Class_431_3971EC8FDD1545B2 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_431_3971EC8FDD1545B2_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_431_3971EC8FDD1545B2_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_431_3971EC8FDD1545B2_METHOD_2_OFFSET))(a1);
		}

	};
