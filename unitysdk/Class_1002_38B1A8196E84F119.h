#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1002_38B1A8196E84F119_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149F5220)
#define CLASS_1002_38B1A8196E84F119_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149F4E50)
#define CLASS_1002_38B1A8196E84F119_METHOD_OFFSET UNITYSDK_OFFSET(0x149F5450)

inline static constexpr unsigned int Class_1002_38B1A8196E84F119_TypeDefinitionIndex = 51337;

	class Class_1002_38B1A8196E84F119 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1002_38B1A8196E84F119_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1002_38B1A8196E84F119_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1002_38B1A8196E84F119_METHOD_2_OFFSET))(a1);
		}

	};
