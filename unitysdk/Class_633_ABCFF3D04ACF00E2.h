#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_633_ABCFF3D04ACF00E2_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14962C60)
#define CLASS_633_ABCFF3D04ACF00E2_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14962860)
#define CLASS_633_ABCFF3D04ACF00E2_METHOD_OFFSET UNITYSDK_OFFSET(0x14962E90)

inline static constexpr unsigned int Class_633_ABCFF3D04ACF00E2_TypeDefinitionIndex = 50968;

	class Class_633_ABCFF3D04ACF00E2 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_633_ABCFF3D04ACF00E2_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_633_ABCFF3D04ACF00E2_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_633_ABCFF3D04ACF00E2_METHOD_2_OFFSET))(a1);
		}

	};
