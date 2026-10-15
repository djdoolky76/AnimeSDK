#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_462_FC439115CAE495F6_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149019A0)
#define CLASS_462_FC439115CAE495F6_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149015A0)
#define CLASS_462_FC439115CAE495F6_METHOD_OFFSET UNITYSDK_OFFSET(0x14901BF0)

inline static constexpr unsigned int Class_462_FC439115CAE495F6_TypeDefinitionIndex = 50791;

	class Class_462_FC439115CAE495F6 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_462_FC439115CAE495F6_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_462_FC439115CAE495F6_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_462_FC439115CAE495F6_METHOD_2_OFFSET))(a1);
		}

	};
