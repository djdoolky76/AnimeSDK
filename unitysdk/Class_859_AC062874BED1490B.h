#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_859_AC062874BED1490B_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149BC650)
#define CLASS_859_AC062874BED1490B_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149BC250)
#define CLASS_859_AC062874BED1490B_METHOD_OFFSET UNITYSDK_OFFSET(0x149BC8A0)

inline static constexpr unsigned int Class_859_AC062874BED1490B_TypeDefinitionIndex = 51194;

	class Class_859_AC062874BED1490B : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_859_AC062874BED1490B_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_859_AC062874BED1490B_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_859_AC062874BED1490B_METHOD_2_OFFSET))(a1);
		}

	};
