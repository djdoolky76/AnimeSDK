#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_221_224C2D141278056B_METHOD_1_OFFSET UNITYSDK_OFFSET(0xB0CE280)
#define CLASS_221_224C2D141278056B_METHOD_2_OFFSET UNITYSDK_OFFSET(0xB0CDE50)
#define CLASS_221_224C2D141278056B_METHOD_OFFSET UNITYSDK_OFFSET(0xB0CE510)

inline static constexpr unsigned int Class_221_224C2D141278056B_TypeDefinitionIndex = 50526;

	class Class_221_224C2D141278056B : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_221_224C2D141278056B_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_221_224C2D141278056B_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_221_224C2D141278056B_METHOD_2_OFFSET))(a1);
		}

	};
