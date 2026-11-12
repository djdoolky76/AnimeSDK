#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1280_3437D24F1F921136_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15960B80)
#define CLASS_1280_3437D24F1F921136_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15960780)
#define CLASS_1280_3437D24F1F921136_METHOD_OFFSET UNITYSDK_OFFSET(0x15960DB0)

inline static constexpr unsigned int Class_1280_3437D24F1F921136_TypeDefinitionIndex = 52666;

	class Class_1280_3437D24F1F921136 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1280_3437D24F1F921136_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1280_3437D24F1F921136_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1280_3437D24F1F921136_METHOD_2_OFFSET))(a1);
		}

	};
