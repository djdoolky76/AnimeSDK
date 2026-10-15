#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1327_BD3FBF2032ABC03F_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A72340)
#define CLASS_1327_BD3FBF2032ABC03F_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A71F40)
#define CLASS_1327_BD3FBF2032ABC03F_METHOD_OFFSET UNITYSDK_OFFSET(0x14A72570)

inline static constexpr unsigned int Class_1327_BD3FBF2032ABC03F_TypeDefinitionIndex = 51665;

	class Class_1327_BD3FBF2032ABC03F : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1327_BD3FBF2032ABC03F_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1327_BD3FBF2032ABC03F_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1327_BD3FBF2032ABC03F_METHOD_2_OFFSET))(a1);
		}

	};
