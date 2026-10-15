#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1160_44D6AA8722A91DBE_METHOD_1_OFFSET UNITYSDK_OFFSET(0x14A283C0)
#define CLASS_1160_44D6AA8722A91DBE_METHOD_2_OFFSET UNITYSDK_OFFSET(0x14A27FC0)
#define CLASS_1160_44D6AA8722A91DBE_METHOD_OFFSET UNITYSDK_OFFSET(0x14A28610)

inline static constexpr unsigned int Class_1160_44D6AA8722A91DBE_TypeDefinitionIndex = 51495;

	class Class_1160_44D6AA8722A91DBE : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1160_44D6AA8722A91DBE_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1160_44D6AA8722A91DBE_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_1160_44D6AA8722A91DBE_METHOD_2_OFFSET))(a1);
		}

	};
