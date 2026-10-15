#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_940_969210B957BF22C9_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149D0E70)
#define CLASS_940_969210B957BF22C9_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149D0A70)
#define CLASS_940_969210B957BF22C9_METHOD_OFFSET UNITYSDK_OFFSET(0x149D10C0)

inline static constexpr unsigned int Class_940_969210B957BF22C9_TypeDefinitionIndex = 51275;

	class Class_940_969210B957BF22C9 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_940_969210B957BF22C9_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_940_969210B957BF22C9_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_940_969210B957BF22C9_METHOD_2_OFFSET))(a1);
		}

	};
