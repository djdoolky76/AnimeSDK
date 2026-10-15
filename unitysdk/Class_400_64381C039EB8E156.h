#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_400_64381C039EB8E156_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148E8F00)
#define CLASS_400_64381C039EB8E156_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148E8B00)
#define CLASS_400_64381C039EB8E156_METHOD_OFFSET UNITYSDK_OFFSET(0x148E9150)

inline static constexpr unsigned int Class_400_64381C039EB8E156_TypeDefinitionIndex = 50729;

	class Class_400_64381C039EB8E156 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_400_64381C039EB8E156_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_400_64381C039EB8E156_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_400_64381C039EB8E156_METHOD_2_OFFSET))(a1);
		}

	};
