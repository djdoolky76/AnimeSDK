#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_370_8115836EF47108EF_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148DD060)
#define CLASS_370_8115836EF47108EF_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148DCC60)
#define CLASS_370_8115836EF47108EF_METHOD_OFFSET UNITYSDK_OFFSET(0x148DD2B0)

inline static constexpr unsigned int Class_370_8115836EF47108EF_TypeDefinitionIndex = 50699;

	class Class_370_8115836EF47108EF : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_370_8115836EF47108EF_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_370_8115836EF47108EF_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_370_8115836EF47108EF_METHOD_2_OFFSET))(a1);
		}

	};
