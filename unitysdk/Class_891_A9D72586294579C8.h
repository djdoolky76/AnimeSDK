#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_891_A9D72586294579C8_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149C9130)
#define CLASS_891_A9D72586294579C8_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149C8D30)
#define CLASS_891_A9D72586294579C8_METHOD_OFFSET UNITYSDK_OFFSET(0x149C9380)

	class Class_891_A9D72586294579C8 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_891_A9D72586294579C8_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_891_A9D72586294579C8_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_891_A9D72586294579C8_METHOD_2_OFFSET))(a1);
		}

	};
