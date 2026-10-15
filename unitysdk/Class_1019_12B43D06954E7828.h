#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1019_12B43D06954E7828_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149FBE40)
#define CLASS_1019_12B43D06954E7828_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149FBA40)
#define CLASS_1019_12B43D06954E7828_METHOD_OFFSET UNITYSDK_OFFSET(0x149FC090)

inline static constexpr unsigned int Class_1019_12B43D06954E7828_TypeDefinitionIndex = 51354;

	class Class_1019_12B43D06954E7828 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1019_12B43D06954E7828_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1019_12B43D06954E7828_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1019_12B43D06954E7828_METHOD_2_OFFSET))(a1);
		}

	};
