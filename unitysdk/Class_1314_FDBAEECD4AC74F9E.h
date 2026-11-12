#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1314_FDBAEECD4AC74F9E_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15970280)
#define CLASS_1314_FDBAEECD4AC74F9E_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1596FE80)
#define CLASS_1314_FDBAEECD4AC74F9E_METHOD_OFFSET UNITYSDK_OFFSET(0x159704B0)

inline static constexpr unsigned int Class_1314_FDBAEECD4AC74F9E_TypeDefinitionIndex = 52700;

	class Class_1314_FDBAEECD4AC74F9E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1314_FDBAEECD4AC74F9E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1314_FDBAEECD4AC74F9E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1314_FDBAEECD4AC74F9E_METHOD_2_OFFSET))(a1);
		}

	};
