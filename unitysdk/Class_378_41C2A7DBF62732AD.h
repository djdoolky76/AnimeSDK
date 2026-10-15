#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_378_41C2A7DBF62732AD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x148E0360)
#define CLASS_378_41C2A7DBF62732AD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x148DFF60)
#define CLASS_378_41C2A7DBF62732AD_METHOD_OFFSET UNITYSDK_OFFSET(0x148E05B0)

inline static constexpr unsigned int Class_378_41C2A7DBF62732AD_TypeDefinitionIndex = 50707;

	class Class_378_41C2A7DBF62732AD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_378_41C2A7DBF62732AD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_378_41C2A7DBF62732AD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_378_41C2A7DBF62732AD_METHOD_2_OFFSET))(a1);
		}

	};
