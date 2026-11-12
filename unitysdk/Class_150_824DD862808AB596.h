#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_150_824DD862808AB596_METHOD_1_OFFSET UNITYSDK_OFFSET(0x174751B0)
#define CLASS_150_824DD862808AB596_METHOD_2_OFFSET UNITYSDK_OFFSET(0x17474D80)
#define CLASS_150_824DD862808AB596_METHOD_OFFSET UNITYSDK_OFFSET(0x17475440)

inline static constexpr unsigned int Class_150_824DD862808AB596_TypeDefinitionIndex = 51502;

	class Class_150_824DD862808AB596 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_150_824DD862808AB596_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_150_824DD862808AB596_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_150_824DD862808AB596_METHOD_2_OFFSET))(a1);
		}

	};
