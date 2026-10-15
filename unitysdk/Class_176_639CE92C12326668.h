#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_176_639CE92C12326668_METHOD_1_OFFSET UNITYSDK_OFFSET(0x164E0C40)
#define CLASS_176_639CE92C12326668_METHOD_2_OFFSET UNITYSDK_OFFSET(0x164E0810)
#define CLASS_176_639CE92C12326668_METHOD_OFFSET UNITYSDK_OFFSET(0x164E0ED0)

	class Class_176_639CE92C12326668 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_176_639CE92C12326668_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_176_639CE92C12326668_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_176_639CE92C12326668_METHOD_2_OFFSET))(a1);
		}

	};
