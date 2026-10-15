#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_598_7CCB32349806C39A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14949400)
#define CLASS_598_7CCB32349806C39A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14949000)
#define CLASS_598_7CCB32349806C39A_METHOD_OFFSET UNITYSDK_OFFSET(0x14949650)

inline static constexpr unsigned int Class_598_7CCB32349806C39A_TypeDefinitionIndex = 50933;

	class Class_598_7CCB32349806C39A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_598_7CCB32349806C39A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_598_7CCB32349806C39A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_598_7CCB32349806C39A_METHOD_2_OFFSET))(a1);
		}

	};
