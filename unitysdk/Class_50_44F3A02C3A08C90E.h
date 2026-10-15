#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_50_44F3A02C3A08C90E_METHOD_1_OFFSET UNITYSDK_OFFSET(0xBB160E0)
#define CLASS_50_44F3A02C3A08C90E_METHOD_2_OFFSET UNITYSDK_OFFSET(0xBB15CB0)
#define CLASS_50_44F3A02C3A08C90E_METHOD_OFFSET UNITYSDK_OFFSET(0xBB16370)

inline static constexpr unsigned int Class_50_44F3A02C3A08C90E_TypeDefinitionIndex = 50349;

	class Class_50_44F3A02C3A08C90E : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_50_44F3A02C3A08C90E_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_50_44F3A02C3A08C90E_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_50_44F3A02C3A08C90E_METHOD_2_OFFSET))(a1);
		}

	};
