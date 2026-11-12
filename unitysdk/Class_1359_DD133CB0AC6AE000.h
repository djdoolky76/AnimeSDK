#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1359_DD133CB0AC6AE000_METHOD_1_OFFSET UNITYSDK_OFFSET(0x15987D60)
#define CLASS_1359_DD133CB0AC6AE000_METHOD_2_OFFSET UNITYSDK_OFFSET(0x15987960)
#define CLASS_1359_DD133CB0AC6AE000_METHOD_OFFSET UNITYSDK_OFFSET(0x15987FB0)

inline static constexpr unsigned int Class_1359_DD133CB0AC6AE000_TypeDefinitionIndex = 52748;

	class Class_1359_DD133CB0AC6AE000 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1359_DD133CB0AC6AE000_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1359_DD133CB0AC6AE000_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1359_DD133CB0AC6AE000_METHOD_2_OFFSET))(a1);
		}

	};
