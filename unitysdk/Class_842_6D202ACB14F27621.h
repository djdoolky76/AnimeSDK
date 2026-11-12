#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_842_6D202ACB14F27621_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1585B470)
#define CLASS_842_6D202ACB14F27621_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1585B070)
#define CLASS_842_6D202ACB14F27621_METHOD_OFFSET UNITYSDK_OFFSET(0x1585B6C0)

inline static constexpr unsigned int Class_842_6D202ACB14F27621_TypeDefinitionIndex = 52228;

	class Class_842_6D202ACB14F27621 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_842_6D202ACB14F27621_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_842_6D202ACB14F27621_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_842_6D202ACB14F27621_METHOD_2_OFFSET))(a1);
		}

	};
