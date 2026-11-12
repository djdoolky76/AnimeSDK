#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1002_D44FACE13EBE64CA_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1589ACD0)
#define CLASS_1002_D44FACE13EBE64CA_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1589A8D0)
#define CLASS_1002_D44FACE13EBE64CA_METHOD_OFFSET UNITYSDK_OFFSET(0x1589AF20)

inline static constexpr unsigned int Class_1002_D44FACE13EBE64CA_TypeDefinitionIndex = 52388;

	class Class_1002_D44FACE13EBE64CA : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1002_D44FACE13EBE64CA_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1002_D44FACE13EBE64CA_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1002_D44FACE13EBE64CA_METHOD_2_OFFSET))(a1);
		}

	};
