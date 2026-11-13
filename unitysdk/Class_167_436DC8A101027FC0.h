#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_167_436DC8A101027FC0_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1A1F8AB0)
#define CLASS_167_436DC8A101027FC0_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1A1F8680)
#define CLASS_167_436DC8A101027FC0_METHOD_OFFSET UNITYSDK_OFFSET(0x1A1F8D40)

inline static constexpr unsigned int Class_167_436DC8A101027FC0_TypeDefinitionIndex = 51519;

	class Class_167_436DC8A101027FC0 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_167_436DC8A101027FC0_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_167_436DC8A101027FC0_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_167_436DC8A101027FC0_METHOD_2_OFFSET))(a1);
		}

	};
