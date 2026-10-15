#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_38_AA331014C4954896_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148B7B60)
#define CLASS_38_AA331014C4954896_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148B7760)
#define CLASS_38_AA331014C4954896_METHOD_OFFSET UNITYSDK_OFFSET(0x148B7D90)

inline static constexpr unsigned int Class_38_AA331014C4954896_TypeDefinitionIndex = 50333;

	class Class_38_AA331014C4954896 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_38_AA331014C4954896_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_38_AA331014C4954896_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_38_AA331014C4954896_METHOD_2_OFFSET))(a1);
		}

	};
