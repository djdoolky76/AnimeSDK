#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_792_5E32C349CC060460_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149A1C30)
#define CLASS_792_5E32C349CC060460_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149A1830)
#define CLASS_792_5E32C349CC060460_METHOD_OFFSET UNITYSDK_OFFSET(0x149A1E60)

inline static constexpr unsigned int Class_792_5E32C349CC060460_TypeDefinitionIndex = 51127;

	class Class_792_5E32C349CC060460 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_792_5E32C349CC060460_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_792_5E32C349CC060460_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_792_5E32C349CC060460_METHOD_2_OFFSET))(a1);
		}

	};
