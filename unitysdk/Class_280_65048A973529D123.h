#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_280_65048A973529D123_METHOD_1_OFFSET UNITYSDK_OFFSET(0xFFAFE70)
#define CLASS_280_65048A973529D123_METHOD_2_OFFSET UNITYSDK_OFFSET(0xFFAFA40)
#define CLASS_280_65048A973529D123_METHOD_OFFSET UNITYSDK_OFFSET(0xFFB00E0)

inline static constexpr unsigned int Class_280_65048A973529D123_TypeDefinitionIndex = 51645;

	class Class_280_65048A973529D123 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_280_65048A973529D123_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_280_65048A973529D123_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_280_65048A973529D123_METHOD_2_OFFSET))(a1);
		}

	};
