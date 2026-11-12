#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_96_716495CB265525F2_METHOD_1_OFFSET UNITYSDK_OFFSET(0xC3DD270)
#define CLASS_96_716495CB265525F2_METHOD_2_OFFSET UNITYSDK_OFFSET(0xC3DCE40)
#define CLASS_96_716495CB265525F2_METHOD_OFFSET UNITYSDK_OFFSET(0xC3DD500)

inline static constexpr unsigned int Class_96_716495CB265525F2_TypeDefinitionIndex = 51448;

	class Class_96_716495CB265525F2 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_96_716495CB265525F2_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_96_716495CB265525F2_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_96_716495CB265525F2_METHOD_2_OFFSET))(a1);
		}

	};
