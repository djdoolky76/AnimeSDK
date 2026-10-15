#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_626_5E7335D9814BC2ED_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14954600)
#define CLASS_626_5E7335D9814BC2ED_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14954200)
#define CLASS_626_5E7335D9814BC2ED_METHOD_OFFSET UNITYSDK_OFFSET(0x14954850)

inline static constexpr unsigned int Class_626_5E7335D9814BC2ED_TypeDefinitionIndex = 50961;

	class Class_626_5E7335D9814BC2ED : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_626_5E7335D9814BC2ED_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_626_5E7335D9814BC2ED_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_626_5E7335D9814BC2ED_METHOD_2_OFFSET))(a1);
		}

	};
