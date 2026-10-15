#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_818_4C3AED043D943434_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149A0770)
#define CLASS_818_4C3AED043D943434_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149A0370)
#define CLASS_818_4C3AED043D943434_METHOD_OFFSET UNITYSDK_OFFSET(0x149A09C0)

inline static constexpr unsigned int Class_818_4C3AED043D943434_TypeDefinitionIndex = 51153;

	class Class_818_4C3AED043D943434 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_818_4C3AED043D943434_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_818_4C3AED043D943434_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_818_4C3AED043D943434_METHOD_2_OFFSET))(a1);
		}

	};
