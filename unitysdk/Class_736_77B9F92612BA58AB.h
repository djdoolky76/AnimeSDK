#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_736_77B9F92612BA58AB_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1498B930)
#define CLASS_736_77B9F92612BA58AB_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1498B530)
#define CLASS_736_77B9F92612BA58AB_METHOD_OFFSET UNITYSDK_OFFSET(0x1498BB80)

inline static constexpr unsigned int Class_736_77B9F92612BA58AB_TypeDefinitionIndex = 51071;

	class Class_736_77B9F92612BA58AB : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_736_77B9F92612BA58AB_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_736_77B9F92612BA58AB_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_736_77B9F92612BA58AB_METHOD_2_OFFSET))(a1);
		}

	};
