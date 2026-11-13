#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_412_1C4590754ED23855_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1B518E20)
#define CLASS_412_1C4590754ED23855_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1B518A20)
#define CLASS_412_1C4590754ED23855_METHOD_OFFSET UNITYSDK_OFFSET(0x1B519070)

inline static constexpr unsigned int Class_412_1C4590754ED23855_TypeDefinitionIndex = 51792;

	class Class_412_1C4590754ED23855 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_412_1C4590754ED23855_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_412_1C4590754ED23855_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_412_1C4590754ED23855_METHOD_2_OFFSET))(a1);
		}

	};
