#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_848_64021D41FDEFC304_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BB79230)
#define CLASS_848_64021D41FDEFC304_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BB78E30)
#define CLASS_848_64021D41FDEFC304_METHOD_OFFSET UNITYSDK_OFFSET(0x1BB79480)

inline static constexpr unsigned int Class_848_64021D41FDEFC304_TypeDefinitionIndex = 52234;

	class Class_848_64021D41FDEFC304 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_848_64021D41FDEFC304_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_848_64021D41FDEFC304_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_848_64021D41FDEFC304_METHOD_2_OFFSET))(a1);
		}

	};
