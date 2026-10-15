#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_405_70CB1AD4D641FE7E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148EAEE0)
#define CLASS_405_70CB1AD4D641FE7E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148EAAE0)
#define CLASS_405_70CB1AD4D641FE7E_METHOD_OFFSET UNITYSDK_OFFSET(0x148EB130)

inline static constexpr unsigned int Class_405_70CB1AD4D641FE7E_TypeDefinitionIndex = 50734;

	class Class_405_70CB1AD4D641FE7E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_405_70CB1AD4D641FE7E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_405_70CB1AD4D641FE7E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_405_70CB1AD4D641FE7E_METHOD_2_OFFSET))(a1);
		}

	};
