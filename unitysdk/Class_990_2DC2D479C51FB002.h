#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_990_2DC2D479C51FB002_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149E4C50)
#define CLASS_990_2DC2D479C51FB002_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149E4850)
#define CLASS_990_2DC2D479C51FB002_METHOD_OFFSET UNITYSDK_OFFSET(0x149E4EA0)

inline static constexpr unsigned int Class_990_2DC2D479C51FB002_TypeDefinitionIndex = 51325;

	class Class_990_2DC2D479C51FB002 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_990_2DC2D479C51FB002_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_990_2DC2D479C51FB002_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_990_2DC2D479C51FB002_METHOD_2_OFFSET))(a1);
		}

	};
