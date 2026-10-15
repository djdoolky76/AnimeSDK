#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_445_090D95868E489158_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148FAD40)
#define CLASS_445_090D95868E489158_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148FA940)
#define CLASS_445_090D95868E489158_METHOD_OFFSET UNITYSDK_OFFSET(0x148FAF90)

inline static constexpr unsigned int Class_445_090D95868E489158_TypeDefinitionIndex = 50774;

	class Class_445_090D95868E489158 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_445_090D95868E489158_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_445_090D95868E489158_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_445_090D95868E489158_METHOD_2_OFFSET))(a1);
		}

	};
