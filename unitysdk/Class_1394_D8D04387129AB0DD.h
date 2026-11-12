#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1394_D8D04387129AB0DD_METHOD_1_OFFSET UNITYSDK_OFFSET(0x159958E0)
#define CLASS_1394_D8D04387129AB0DD_METHOD_2_OFFSET UNITYSDK_OFFSET(0x159954E0)
#define CLASS_1394_D8D04387129AB0DD_METHOD_OFFSET UNITYSDK_OFFSET(0x15995B10)

inline static constexpr unsigned int Class_1394_D8D04387129AB0DD_TypeDefinitionIndex = 52783;

	class Class_1394_D8D04387129AB0DD : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1394_D8D04387129AB0DD_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1394_D8D04387129AB0DD_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1394_D8D04387129AB0DD_METHOD_2_OFFSET))(a1);
		}

	};
