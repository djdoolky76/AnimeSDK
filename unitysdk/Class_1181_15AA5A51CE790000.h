#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1181_15AA5A51CE790000_METHOD_1_OFFSET UNITYSDK_OFFSET(0x1BDBB2A0)
#define CLASS_1181_15AA5A51CE790000_METHOD_2_OFFSET UNITYSDK_OFFSET(0x1BDBAEA0)
#define CLASS_1181_15AA5A51CE790000_METHOD_OFFSET UNITYSDK_OFFSET(0x1BDBB4F0)

inline static constexpr unsigned int Class_1181_15AA5A51CE790000_TypeDefinitionIndex = 52567;

	class Class_1181_15AA5A51CE790000 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1181_15AA5A51CE790000_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1181_15AA5A51CE790000_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1181_15AA5A51CE790000_METHOD_2_OFFSET))(a1);
		}

	};
