#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_520_9BEA52909BE60CAC_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14935000)
#define CLASS_520_9BEA52909BE60CAC_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14934C00)
#define CLASS_520_9BEA52909BE60CAC_METHOD_OFFSET UNITYSDK_OFFSET(0x14935250)

inline static constexpr unsigned int Class_520_9BEA52909BE60CAC_TypeDefinitionIndex = 50854;

	class Class_520_9BEA52909BE60CAC : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_520_9BEA52909BE60CAC_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_520_9BEA52909BE60CAC_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_520_9BEA52909BE60CAC_METHOD_2_OFFSET))(a1);
		}

	};
