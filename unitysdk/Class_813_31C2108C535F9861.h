#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_813_31C2108C535F9861_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149AA170)
#define CLASS_813_31C2108C535F9861_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149A9D70)
#define CLASS_813_31C2108C535F9861_METHOD_OFFSET UNITYSDK_OFFSET(0x149AA3C0)

	class Class_813_31C2108C535F9861 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_813_31C2108C535F9861_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_813_31C2108C535F9861_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_813_31C2108C535F9861_METHOD_2_OFFSET))(a1);
		}

	};
