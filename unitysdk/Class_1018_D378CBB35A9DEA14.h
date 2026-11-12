#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1018_D378CBB35A9DEA14_METHOD_1_OFFSET UNITYSDK_OFFSET(0x158A12B0)
#define CLASS_1018_D378CBB35A9DEA14_METHOD_2_OFFSET UNITYSDK_OFFSET(0x158A0EB0)
#define CLASS_1018_D378CBB35A9DEA14_METHOD_OFFSET UNITYSDK_OFFSET(0x158A1500)

inline static constexpr unsigned int Class_1018_D378CBB35A9DEA14_TypeDefinitionIndex = 52404;

	class Class_1018_D378CBB35A9DEA14 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1018_D378CBB35A9DEA14_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1018_D378CBB35A9DEA14_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1018_D378CBB35A9DEA14_METHOD_2_OFFSET))(a1);
		}

	};
