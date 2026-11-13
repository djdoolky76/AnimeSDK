#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_82_5B1AAD1F0CD71CA7_METHOD_1_OFFSET UNITYSDK_OFFSET(0x18E7B990)
#define CLASS_82_5B1AAD1F0CD71CA7_METHOD_2_OFFSET UNITYSDK_OFFSET(0x18E7B560)
#define CLASS_82_5B1AAD1F0CD71CA7_METHOD_OFFSET UNITYSDK_OFFSET(0x18E7BC20)

inline static constexpr unsigned int Class_82_5B1AAD1F0CD71CA7_TypeDefinitionIndex = 51434;

	class Class_82_5B1AAD1F0CD71CA7 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_82_5B1AAD1F0CD71CA7_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_82_5B1AAD1F0CD71CA7_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_82_5B1AAD1F0CD71CA7_METHOD_2_OFFSET))(a1);
		}

	};
