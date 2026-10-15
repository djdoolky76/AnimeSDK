#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_850_EF006C84EAD7A143_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149AD310)
#define CLASS_850_EF006C84EAD7A143_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149ACF10)
#define CLASS_850_EF006C84EAD7A143_METHOD_OFFSET UNITYSDK_OFFSET(0x149AD560)

inline static constexpr unsigned int Class_850_EF006C84EAD7A143_TypeDefinitionIndex = 51185;

	class Class_850_EF006C84EAD7A143 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_850_EF006C84EAD7A143_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_850_EF006C84EAD7A143_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_850_EF006C84EAD7A143_METHOD_2_OFFSET))(a1);
		}

	};
