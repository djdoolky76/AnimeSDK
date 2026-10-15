#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_211_19E58F9395DD93BC_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1595F0F0)
#define CLASS_211_19E58F9395DD93BC_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1595ECC0)
#define CLASS_211_19E58F9395DD93BC_METHOD_OFFSET UNITYSDK_OFFSET(0x1595F380)

inline static constexpr unsigned int Class_211_19E58F9395DD93BC_TypeDefinitionIndex = 50513;

	class Class_211_19E58F9395DD93BC : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_211_19E58F9395DD93BC_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_211_19E58F9395DD93BC_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_211_19E58F9395DD93BC_METHOD_2_OFFSET))(a1);
		}

	};
