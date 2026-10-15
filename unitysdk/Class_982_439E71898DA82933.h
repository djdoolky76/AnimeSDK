#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_982_439E71898DA82933_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149ED350)
#define CLASS_982_439E71898DA82933_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149ECF50)
#define CLASS_982_439E71898DA82933_METHOD_OFFSET UNITYSDK_OFFSET(0x149ED5A0)

inline static constexpr unsigned int Class_982_439E71898DA82933_TypeDefinitionIndex = 51317;

	class Class_982_439E71898DA82933 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_982_439E71898DA82933_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_982_439E71898DA82933_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_982_439E71898DA82933_METHOD_2_OFFSET))(a1);
		}

	};
