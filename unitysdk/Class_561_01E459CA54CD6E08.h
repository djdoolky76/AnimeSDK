#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_561_01E459CA54CD6E08_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14945440)
#define CLASS_561_01E459CA54CD6E08_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14945040)
#define CLASS_561_01E459CA54CD6E08_METHOD_OFFSET UNITYSDK_OFFSET(0x14945690)

inline static constexpr unsigned int Class_561_01E459CA54CD6E08_TypeDefinitionIndex = 50895;

	class Class_561_01E459CA54CD6E08 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_561_01E459CA54CD6E08_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_561_01E459CA54CD6E08_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_561_01E459CA54CD6E08_METHOD_2_OFFSET))(a1);
		}

	};
