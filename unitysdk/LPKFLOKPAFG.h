#pragma once
#include "unitysdk/unitysdk.h"

#define LPKFLOKPAFG_CTOR_OFFSET UNITYSDK_OFFSET(0xB8228B0)
#define LPKFLOKPAFG_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB822850)
#define LPKFLOKPAFG_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xB822860)

inline static constexpr unsigned int LPKFLOKPAFG_TypeDefinitionIndex = 74011;

	class LPKFLOKPAFG
	{
	public:
		::System::Int32 ENMIPOPKOOL; // 0x18
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LPKFLOKPAFG_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LPKFLOKPAFG_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LPKFLOKPAFG_SET_VALUE_OFFSET))(this, a1);
		}

	};
