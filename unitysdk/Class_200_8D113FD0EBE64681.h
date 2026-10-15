#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_200_8D113FD0EBE64681_METHOD_1_OFFSET UNITYSDK_OFFSET(0x16418430)
#define CLASS_200_8D113FD0EBE64681_METHOD_2_OFFSET UNITYSDK_OFFSET(0x16418000)
#define CLASS_200_8D113FD0EBE64681_METHOD_OFFSET UNITYSDK_OFFSET(0x164186C0)

inline static constexpr unsigned int Class_200_8D113FD0EBE64681_TypeDefinitionIndex = 50501;

	class Class_200_8D113FD0EBE64681 : public ::System::Object
	{
	public:
		::System::Void Method_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_200_8D113FD0EBE64681_METHOD_OFFSET))(this);
		}

		static ::System::Void Method_1_1(::System::IntPtr a1)
		{
			return ((::System::Void(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_200_8D113FD0EBE64681_METHOD_1_OFFSET))(a1);
		}

		static ::System::Int32 Method_2_2(::System::IntPtr a1)
		{
			return ((::System::Int32(*)(::System::IntPtr))((::PBYTE)hIl2Cpp + CLASS_200_8D113FD0EBE64681_METHOD_2_OFFSET))(a1);
		}

	};
