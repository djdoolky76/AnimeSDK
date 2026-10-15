#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_109_75F995482DE760B9_METHOD_1_OFFSET UNITYSDK_OFFSET(0x165BEA40)
#define CLASS_109_75F995482DE760B9_METHOD_2_OFFSET UNITYSDK_OFFSET(0x165BE610)
#define CLASS_109_75F995482DE760B9_METHOD_OFFSET UNITYSDK_OFFSET(0x165BECD0)

inline static constexpr unsigned int Class_109_75F995482DE760B9_TypeDefinitionIndex = 50410;

	class Class_109_75F995482DE760B9 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_109_75F995482DE760B9_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_109_75F995482DE760B9_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_109_75F995482DE760B9_METHOD_2_OFFSET))(a1);
		}

	};
