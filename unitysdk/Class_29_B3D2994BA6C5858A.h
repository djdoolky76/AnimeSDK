#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_29_B3D2994BA6C5858A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x10F00870)
#define CLASS_29_B3D2994BA6C5858A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x10F004A0)
#define CLASS_29_B3D2994BA6C5858A_METHOD_OFFSET UNITYSDK_OFFSET(0x10F00AA0)

inline static constexpr unsigned int Class_29_B3D2994BA6C5858A_TypeDefinitionIndex = 51359;

	class Class_29_B3D2994BA6C5858A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_29_B3D2994BA6C5858A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_29_B3D2994BA6C5858A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_29_B3D2994BA6C5858A_METHOD_2_OFFSET))(a1);
		}

	};
