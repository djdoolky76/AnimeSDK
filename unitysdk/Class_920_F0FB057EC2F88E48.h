#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_920_F0FB057EC2F88E48_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1587A410)
#define CLASS_920_F0FB057EC2F88E48_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1587A010)
#define CLASS_920_F0FB057EC2F88E48_METHOD_OFFSET UNITYSDK_OFFSET(0x1587A660)

inline static constexpr unsigned int Class_920_F0FB057EC2F88E48_TypeDefinitionIndex = 52306;

	class Class_920_F0FB057EC2F88E48 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_920_F0FB057EC2F88E48_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_920_F0FB057EC2F88E48_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_920_F0FB057EC2F88E48_METHOD_2_OFFSET))(a1);
		}

	};
