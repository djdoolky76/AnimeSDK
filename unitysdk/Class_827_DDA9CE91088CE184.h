#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_827_DDA9CE91088CE184_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149A40D0)
#define CLASS_827_DDA9CE91088CE184_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149A3CD0)
#define CLASS_827_DDA9CE91088CE184_METHOD_OFFSET UNITYSDK_OFFSET(0x149A4320)

inline static constexpr unsigned int Class_827_DDA9CE91088CE184_TypeDefinitionIndex = 51162;

	class Class_827_DDA9CE91088CE184 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_827_DDA9CE91088CE184_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_827_DDA9CE91088CE184_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_827_DDA9CE91088CE184_METHOD_2_OFFSET))(a1);
		}

	};
