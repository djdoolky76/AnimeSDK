#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_878_19765EC397527A0A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15869970)
#define CLASS_878_19765EC397527A0A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15869570)
#define CLASS_878_19765EC397527A0A_METHOD_OFFSET UNITYSDK_OFFSET(0x15869BC0)

inline static constexpr unsigned int Class_878_19765EC397527A0A_TypeDefinitionIndex = 52264;

	class Class_878_19765EC397527A0A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_878_19765EC397527A0A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_878_19765EC397527A0A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_878_19765EC397527A0A_METHOD_2_OFFSET))(a1);
		}

	};
