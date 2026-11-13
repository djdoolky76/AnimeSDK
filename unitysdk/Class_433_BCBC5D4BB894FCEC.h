#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_433_BCBC5D4BB894FCEC_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1B5213C0)
#define CLASS_433_BCBC5D4BB894FCEC_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1B520FC0)
#define CLASS_433_BCBC5D4BB894FCEC_METHOD_OFFSET UNITYSDK_OFFSET(0x1B521610)

inline static constexpr unsigned int Class_433_BCBC5D4BB894FCEC_TypeDefinitionIndex = 51813;

	class Class_433_BCBC5D4BB894FCEC : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_433_BCBC5D4BB894FCEC_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_433_BCBC5D4BB894FCEC_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_433_BCBC5D4BB894FCEC_METHOD_2_OFFSET))(a1);
		}

	};
