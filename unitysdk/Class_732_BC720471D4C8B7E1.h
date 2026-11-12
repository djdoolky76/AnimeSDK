#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_732_BC720471D4C8B7E1_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1582FC00)
#define CLASS_732_BC720471D4C8B7E1_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1582F800)
#define CLASS_732_BC720471D4C8B7E1_METHOD_OFFSET UNITYSDK_OFFSET(0x1582FE50)

inline static constexpr unsigned int Class_732_BC720471D4C8B7E1_TypeDefinitionIndex = 52118;

	class Class_732_BC720471D4C8B7E1 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_732_BC720471D4C8B7E1_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_732_BC720471D4C8B7E1_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_732_BC720471D4C8B7E1_METHOD_2_OFFSET))(a1);
		}

	};
