#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1360_0524C6B8C86EAE81_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14AF2060)
#define CLASS_1360_0524C6B8C86EAE81_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14AF1C60)
#define CLASS_1360_0524C6B8C86EAE81_METHOD_OFFSET UNITYSDK_OFFSET(0x14AF2290)

inline static constexpr unsigned int Class_1360_0524C6B8C86EAE81_TypeDefinitionIndex = 51698;

	class Class_1360_0524C6B8C86EAE81 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1360_0524C6B8C86EAE81_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1360_0524C6B8C86EAE81_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1360_0524C6B8C86EAE81_METHOD_2_OFFSET))(a1);
		}

	};
