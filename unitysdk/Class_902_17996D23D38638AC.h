#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_902_17996D23D38638AC_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BE15D20)
#define CLASS_902_17996D23D38638AC_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BE15920)
#define CLASS_902_17996D23D38638AC_METHOD_OFFSET UNITYSDK_OFFSET(0x1BE15F70)

inline static constexpr unsigned int Class_902_17996D23D38638AC_TypeDefinitionIndex = 52288;

	class Class_902_17996D23D38638AC : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_902_17996D23D38638AC_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_902_17996D23D38638AC_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_902_17996D23D38638AC_METHOD_2_OFFSET))(a1);
		}

	};
