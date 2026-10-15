#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_826_516AA51E64451951_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149A3A70)
#define CLASS_826_516AA51E64451951_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149A3670)
#define CLASS_826_516AA51E64451951_METHOD_OFFSET UNITYSDK_OFFSET(0x149A3CC0)

inline static constexpr unsigned int Class_826_516AA51E64451951_TypeDefinitionIndex = 51161;

	class Class_826_516AA51E64451951 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_826_516AA51E64451951_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_826_516AA51E64451951_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_826_516AA51E64451951_METHOD_2_OFFSET))(a1);
		}

	};
