#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_784_BED0DA96053C914B_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14992FD0)
#define CLASS_784_BED0DA96053C914B_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14992BD0)
#define CLASS_784_BED0DA96053C914B_METHOD_OFFSET UNITYSDK_OFFSET(0x14993220)

inline static constexpr unsigned int Class_784_BED0DA96053C914B_TypeDefinitionIndex = 51119;

	class Class_784_BED0DA96053C914B : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_784_BED0DA96053C914B_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_784_BED0DA96053C914B_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_784_BED0DA96053C914B_METHOD_2_OFFSET))(a1);
		}

	};
