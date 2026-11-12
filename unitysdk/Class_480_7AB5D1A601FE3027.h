#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_480_7AB5D1A601FE3027_METHOD_1_OFFSET UNITYSDK_OFFSET(0x157BA0D0)
#define CLASS_480_7AB5D1A601FE3027_METHOD_2_OFFSET UNITYSDK_OFFSET(0x157B9CD0)
#define CLASS_480_7AB5D1A601FE3027_METHOD_OFFSET UNITYSDK_OFFSET(0x157BA320)

inline static constexpr unsigned int Class_480_7AB5D1A601FE3027_TypeDefinitionIndex = 51860;

	class Class_480_7AB5D1A601FE3027 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_480_7AB5D1A601FE3027_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_480_7AB5D1A601FE3027_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_480_7AB5D1A601FE3027_METHOD_2_OFFSET))(a1);
		}

	};
