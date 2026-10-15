#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_243_E385761DA2A5DD10_METHOD_1_OFFSET UNITYSDK_OFFSET(0x159CF880)
#define CLASS_243_E385761DA2A5DD10_METHOD_2_OFFSET UNITYSDK_OFFSET(0x159CF450)
#define CLASS_243_E385761DA2A5DD10_METHOD_OFFSET UNITYSDK_OFFSET(0x159CFB10)

inline static constexpr unsigned int Class_243_E385761DA2A5DD10_TypeDefinitionIndex = 50556;

	class Class_243_E385761DA2A5DD10 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_243_E385761DA2A5DD10_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_243_E385761DA2A5DD10_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_243_E385761DA2A5DD10_METHOD_2_OFFSET))(a1);
		}

	};
