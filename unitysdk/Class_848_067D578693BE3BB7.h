#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_848_067D578693BE3BB7_METHOD_1_OFFSET UNITYSDK_OFFSET(0x149B8030)
#define CLASS_848_067D578693BE3BB7_METHOD_2_OFFSET UNITYSDK_OFFSET(0x149B7C30)
#define CLASS_848_067D578693BE3BB7_METHOD_OFFSET UNITYSDK_OFFSET(0x149B8280)

inline static constexpr unsigned int Class_848_067D578693BE3BB7_TypeDefinitionIndex = 51183;

	class Class_848_067D578693BE3BB7 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_848_067D578693BE3BB7_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_848_067D578693BE3BB7_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_848_067D578693BE3BB7_METHOD_2_OFFSET))(a1);
		}

	};
