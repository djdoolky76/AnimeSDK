#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1049_FB3E38FA3567699A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BE502D0)
#define CLASS_1049_FB3E38FA3567699A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BE4FED0)
#define CLASS_1049_FB3E38FA3567699A_METHOD_OFFSET UNITYSDK_OFFSET(0x1BE50520)

inline static constexpr unsigned int Class_1049_FB3E38FA3567699A_TypeDefinitionIndex = 52435;

	class Class_1049_FB3E38FA3567699A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1049_FB3E38FA3567699A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1049_FB3E38FA3567699A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1049_FB3E38FA3567699A_METHOD_2_OFFSET))(a1);
		}

	};
