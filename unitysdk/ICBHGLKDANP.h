#pragma once
#include "unitysdk/unitysdk.h"

#define ICBHGLKDANP_CTOR_OFFSET UNITYSDK_OFFSET(0x3C33250)
#define ICBHGLKDANP_OFGFINMGGGN_OFFSET UNITYSDK_OFFSET(0x3C33260)

inline static constexpr unsigned int ICBHGLKDANP_TypeDefinitionIndex = 42267;

	struct alignas(4) ICBHGLKDANP
	{
		::System::UInt32 NEIBPPBMIKN; // 0x10
		::System::UInt32 IGDOFKLAILH; // 0x14
		::System::UInt32 AJJGKAJPPPP; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ICBHGLKDANP_CTOR_OFFSET))(this, a1);
		}

		::System::Boolean OFGFINMGGGN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + ICBHGLKDANP_OFGFINMGGGN_OFFSET))(this);
		}

	};
