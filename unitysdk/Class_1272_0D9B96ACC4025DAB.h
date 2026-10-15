#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1272_0D9B96ACC4025DAB_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A60380)
#define CLASS_1272_0D9B96ACC4025DAB_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A5FF80)
#define CLASS_1272_0D9B96ACC4025DAB_METHOD_OFFSET UNITYSDK_OFFSET(0x14A605D0)

inline static constexpr unsigned int Class_1272_0D9B96ACC4025DAB_TypeDefinitionIndex = 51607;

	class Class_1272_0D9B96ACC4025DAB : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1272_0D9B96ACC4025DAB_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1272_0D9B96ACC4025DAB_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1272_0D9B96ACC4025DAB_METHOD_2_OFFSET))(a1);
		}

	};
