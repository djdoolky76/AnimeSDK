#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1366_80144C687DAB834C_METHOD_1_OFFSET UNITYSDK_OFFSET(0xE5D1130)
#define CLASS_1366_80144C687DAB834C_METHOD_2_OFFSET UNITYSDK_OFFSET(0xE5D0D30)
#define CLASS_1366_80144C687DAB834C_METHOD_OFFSET UNITYSDK_OFFSET(0xE5D1360)

inline static constexpr unsigned int Class_1366_80144C687DAB834C_TypeDefinitionIndex = 52755;

	class Class_1366_80144C687DAB834C : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1366_80144C687DAB834C_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1366_80144C687DAB834C_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1366_80144C687DAB834C_METHOD_2_OFFSET))(a1);
		}

	};
