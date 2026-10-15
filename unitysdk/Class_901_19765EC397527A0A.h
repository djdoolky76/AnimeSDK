#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_901_19765EC397527A0A_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149C1710)
#define CLASS_901_19765EC397527A0A_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149C1310)
#define CLASS_901_19765EC397527A0A_METHOD_OFFSET UNITYSDK_OFFSET(0x149C1960)

inline static constexpr unsigned int Class_901_19765EC397527A0A_TypeDefinitionIndex = 51236;

	class Class_901_19765EC397527A0A : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_901_19765EC397527A0A_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_901_19765EC397527A0A_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_901_19765EC397527A0A_METHOD_2_OFFSET))(a1);
		}

	};
