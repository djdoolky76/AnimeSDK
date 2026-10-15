#pragma once
#include "unitysdk/unitysdk.h"

#define MIIPKAKBGNA_CTOR_OFFSET UNITYSDK_OFFSET(0xB95A330)
#define MIIPKAKBGNA_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB95A2C0)
#define MIIPKAKBGNA_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xB95A2D0)

inline static constexpr unsigned int MIIPKAKBGNA_TypeDefinitionIndex = 74019;

	class MIIPKAKBGNA
	{
	public:
		::System::Single ENMIPOPKOOL; // 0x18
		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MIIPKAKBGNA_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MIIPKAKBGNA_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MIIPKAKBGNA_SET_VALUE_OFFSET))(this, a1);
		}

	};
