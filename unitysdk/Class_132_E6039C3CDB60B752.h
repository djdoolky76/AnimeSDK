#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_132_E6039C3CDB60B752_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15F055B0)
#define CLASS_132_E6039C3CDB60B752_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15F05180)
#define CLASS_132_E6039C3CDB60B752_METHOD_OFFSET UNITYSDK_OFFSET(0x15F05840)

inline static constexpr unsigned int Class_132_E6039C3CDB60B752_TypeDefinitionIndex = 50433;

	class Class_132_E6039C3CDB60B752 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_132_E6039C3CDB60B752_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_132_E6039C3CDB60B752_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_132_E6039C3CDB60B752_METHOD_2_OFFSET))(a1);
		}

	};
