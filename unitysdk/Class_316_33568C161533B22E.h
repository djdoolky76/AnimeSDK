#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_316_33568C161533B22E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1796C8D0)
#define CLASS_316_33568C161533B22E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1796C4D0)
#define CLASS_316_33568C161533B22E_METHOD_OFFSET UNITYSDK_OFFSET(0x1796CB20)

inline static constexpr unsigned int Class_316_33568C161533B22E_TypeDefinitionIndex = 51696;

	class Class_316_33568C161533B22E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_316_33568C161533B22E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_316_33568C161533B22E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_316_33568C161533B22E_METHOD_2_OFFSET))(a1);
		}

	};
