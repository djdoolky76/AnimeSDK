#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1101_FE85DD0FCD634801_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BD9B720)
#define CLASS_1101_FE85DD0FCD634801_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BD9B320)
#define CLASS_1101_FE85DD0FCD634801_METHOD_OFFSET UNITYSDK_OFFSET(0x1BD9B950)

inline static constexpr unsigned int Class_1101_FE85DD0FCD634801_TypeDefinitionIndex = 52487;

	class Class_1101_FE85DD0FCD634801 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1101_FE85DD0FCD634801_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1101_FE85DD0FCD634801_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1101_FE85DD0FCD634801_METHOD_2_OFFSET))(a1);
		}

	};
