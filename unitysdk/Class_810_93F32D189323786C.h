#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_810_93F32D189323786C_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149A8E50)
#define CLASS_810_93F32D189323786C_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149A8A50)
#define CLASS_810_93F32D189323786C_METHOD_OFFSET UNITYSDK_OFFSET(0x149A90A0)

inline static constexpr unsigned int Class_810_93F32D189323786C_TypeDefinitionIndex = 51145;

	class Class_810_93F32D189323786C : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_810_93F32D189323786C_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_810_93F32D189323786C_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_810_93F32D189323786C_METHOD_2_OFFSET))(a1);
		}

	};
