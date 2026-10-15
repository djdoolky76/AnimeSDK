#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_539_84A4D777603642AD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1493C8A0)
#define CLASS_539_84A4D777603642AD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1493C4A0)
#define CLASS_539_84A4D777603642AD_METHOD_OFFSET UNITYSDK_OFFSET(0x1493CAF0)

inline static constexpr unsigned int Class_539_84A4D777603642AD_TypeDefinitionIndex = 50873;

	class Class_539_84A4D777603642AD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_539_84A4D777603642AD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_539_84A4D777603642AD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_539_84A4D777603642AD_METHOD_2_OFFSET))(a1);
		}

	};
