#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1005_F3C1E38692D5E035_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149F6520)
#define CLASS_1005_F3C1E38692D5E035_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149F6120)
#define CLASS_1005_F3C1E38692D5E035_METHOD_OFFSET UNITYSDK_OFFSET(0x149F6750)

inline static constexpr unsigned int Class_1005_F3C1E38692D5E035_TypeDefinitionIndex = 51340;

	class Class_1005_F3C1E38692D5E035 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1005_F3C1E38692D5E035_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1005_F3C1E38692D5E035_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1005_F3C1E38692D5E035_METHOD_2_OFFSET))(a1);
		}

	};
