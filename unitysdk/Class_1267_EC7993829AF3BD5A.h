#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1267_EC7993829AF3BD5A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BDDD380)
#define CLASS_1267_EC7993829AF3BD5A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BDDCF80)
#define CLASS_1267_EC7993829AF3BD5A_METHOD_OFFSET UNITYSDK_OFFSET(0x1BDDD5D0)

inline static constexpr unsigned int Class_1267_EC7993829AF3BD5A_TypeDefinitionIndex = 52653;

	class Class_1267_EC7993829AF3BD5A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1267_EC7993829AF3BD5A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1267_EC7993829AF3BD5A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1267_EC7993829AF3BD5A_METHOD_2_OFFSET))(a1);
		}

	};
