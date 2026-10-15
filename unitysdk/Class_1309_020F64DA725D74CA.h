#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1309_020F64DA725D74CA_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A76B80)
#define CLASS_1309_020F64DA725D74CA_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A76780)
#define CLASS_1309_020F64DA725D74CA_METHOD_OFFSET UNITYSDK_OFFSET(0x14A76DB0)

inline static constexpr unsigned int Class_1309_020F64DA725D74CA_TypeDefinitionIndex = 51647;

	class Class_1309_020F64DA725D74CA : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1309_020F64DA725D74CA_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1309_020F64DA725D74CA_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1309_020F64DA725D74CA_METHOD_2_OFFSET))(a1);
		}

	};
