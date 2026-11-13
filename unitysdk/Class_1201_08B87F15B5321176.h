#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1201_08B87F15B5321176_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BDC31C0)
#define CLASS_1201_08B87F15B5321176_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BDC2DC0)
#define CLASS_1201_08B87F15B5321176_METHOD_OFFSET UNITYSDK_OFFSET(0x1BDC33F0)

inline static constexpr unsigned int Class_1201_08B87F15B5321176_TypeDefinitionIndex = 52587;

	class Class_1201_08B87F15B5321176 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1201_08B87F15B5321176_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1201_08B87F15B5321176_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1201_08B87F15B5321176_METHOD_2_OFFSET))(a1);
		}

	};
