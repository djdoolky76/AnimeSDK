#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1038_7F1A73CEE2840D3F_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A03760)
#define CLASS_1038_7F1A73CEE2840D3F_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A03360)
#define CLASS_1038_7F1A73CEE2840D3F_METHOD_OFFSET UNITYSDK_OFFSET(0x14A039B0)

inline static constexpr unsigned int Class_1038_7F1A73CEE2840D3F_TypeDefinitionIndex = 51373;

	class Class_1038_7F1A73CEE2840D3F : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1038_7F1A73CEE2840D3F_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1038_7F1A73CEE2840D3F_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1038_7F1A73CEE2840D3F_METHOD_2_OFFSET))(a1);
		}

	};
