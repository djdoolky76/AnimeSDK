#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_930_449878AB1D079BE1_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149CCF50)
#define CLASS_930_449878AB1D079BE1_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149CCB50)
#define CLASS_930_449878AB1D079BE1_METHOD_OFFSET UNITYSDK_OFFSET(0x149CD180)

inline static constexpr unsigned int Class_930_449878AB1D079BE1_TypeDefinitionIndex = 51265;

	class Class_930_449878AB1D079BE1 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_930_449878AB1D079BE1_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_930_449878AB1D079BE1_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_930_449878AB1D079BE1_METHOD_2_OFFSET))(a1);
		}

	};
