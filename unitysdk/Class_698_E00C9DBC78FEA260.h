#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_698_E00C9DBC78FEA260_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BB3DB60)
#define CLASS_698_E00C9DBC78FEA260_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BB3D760)
#define CLASS_698_E00C9DBC78FEA260_METHOD_OFFSET UNITYSDK_OFFSET(0x1BB3DD90)

inline static constexpr unsigned int Class_698_E00C9DBC78FEA260_TypeDefinitionIndex = 52084;

	class Class_698_E00C9DBC78FEA260 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_698_E00C9DBC78FEA260_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_698_E00C9DBC78FEA260_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_698_E00C9DBC78FEA260_METHOD_2_OFFSET))(a1);
		}

	};
