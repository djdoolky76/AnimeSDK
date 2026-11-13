#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_525_0F5F20C8160A1C25_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1B556890)
#define CLASS_525_0F5F20C8160A1C25_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1B556490)
#define CLASS_525_0F5F20C8160A1C25_METHOD_OFFSET UNITYSDK_OFFSET(0x1B556AE0)

inline static constexpr unsigned int Class_525_0F5F20C8160A1C25_TypeDefinitionIndex = 51910;

	class Class_525_0F5F20C8160A1C25 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_525_0F5F20C8160A1C25_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_525_0F5F20C8160A1C25_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_525_0F5F20C8160A1C25_METHOD_2_OFFSET))(a1);
		}

	};
