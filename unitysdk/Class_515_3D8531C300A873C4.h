#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_515_3D8531C300A873C4_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14933040)
#define CLASS_515_3D8531C300A873C4_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14932C40)
#define CLASS_515_3D8531C300A873C4_METHOD_OFFSET UNITYSDK_OFFSET(0x14933290)

inline static constexpr unsigned int Class_515_3D8531C300A873C4_TypeDefinitionIndex = 50849;

	class Class_515_3D8531C300A873C4 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_515_3D8531C300A873C4_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_515_3D8531C300A873C4_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_515_3D8531C300A873C4_METHOD_2_OFFSET))(a1);
		}

	};
