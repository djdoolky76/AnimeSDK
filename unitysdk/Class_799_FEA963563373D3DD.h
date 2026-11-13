#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_799_FEA963563373D3DD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BB65B30)
#define CLASS_799_FEA963563373D3DD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BB65730)
#define CLASS_799_FEA963563373D3DD_METHOD_OFFSET UNITYSDK_OFFSET(0x1BB65D80)

inline static constexpr unsigned int Class_799_FEA963563373D3DD_TypeDefinitionIndex = 52185;

	class Class_799_FEA963563373D3DD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_799_FEA963563373D3DD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_799_FEA963563373D3DD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_799_FEA963563373D3DD_METHOD_2_OFFSET))(a1);
		}

	};
