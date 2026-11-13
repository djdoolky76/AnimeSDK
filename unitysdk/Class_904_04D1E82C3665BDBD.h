#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_904_04D1E82C3665BDBD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BE169C0)
#define CLASS_904_04D1E82C3665BDBD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BE165C0)
#define CLASS_904_04D1E82C3665BDBD_METHOD_OFFSET UNITYSDK_OFFSET(0x1BE16C10)

inline static constexpr unsigned int Class_904_04D1E82C3665BDBD_TypeDefinitionIndex = 52290;

	class Class_904_04D1E82C3665BDBD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_904_04D1E82C3665BDBD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_904_04D1E82C3665BDBD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_904_04D1E82C3665BDBD_METHOD_2_OFFSET))(a1);
		}

	};
