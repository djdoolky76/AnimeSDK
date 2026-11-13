#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_374_824D3758BCA99323_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1B509C80)
#define CLASS_374_824D3758BCA99323_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1B509880)
#define CLASS_374_824D3758BCA99323_METHOD_OFFSET UNITYSDK_OFFSET(0x1B509ED0)

inline static constexpr unsigned int Class_374_824D3758BCA99323_TypeDefinitionIndex = 51754;

	class Class_374_824D3758BCA99323 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_374_824D3758BCA99323_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_374_824D3758BCA99323_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_374_824D3758BCA99323_METHOD_2_OFFSET))(a1);
		}

	};
