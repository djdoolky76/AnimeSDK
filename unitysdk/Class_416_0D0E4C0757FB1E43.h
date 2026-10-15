#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_416_0D0E4C0757FB1E43_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148FAEA0)
#define CLASS_416_0D0E4C0757FB1E43_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148FAAA0)
#define CLASS_416_0D0E4C0757FB1E43_METHOD_OFFSET UNITYSDK_OFFSET(0x148FB0F0)

	class Class_416_0D0E4C0757FB1E43 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_416_0D0E4C0757FB1E43_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_416_0D0E4C0757FB1E43_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_416_0D0E4C0757FB1E43_METHOD_2_OFFSET))(a1);
		}

	};
