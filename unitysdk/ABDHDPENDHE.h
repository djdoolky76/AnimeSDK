#pragma once
#include "unitysdk/unitysdk.h"

#define ABDHDPENDHE_CTOR_OFFSET UNITYSDK_OFFSET(0xB0EEBE0)
#define ABDHDPENDHE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB0EEB70)
#define ABDHDPENDHE_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xB0EEB80)

inline static constexpr unsigned int ABDHDPENDHE_TypeDefinitionIndex = 74012;

	class ABDHDPENDHE
	{
	public:
		::System::Int32 ENMIPOPKOOL; // 0x18
		::System::Int32 PJKFLONMKED; // 0x1C
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + ABDHDPENDHE_CTOR_OFFSET))(this, a1, a2, a3);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + ABDHDPENDHE_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + ABDHDPENDHE_SET_VALUE_OFFSET))(this, a1);
		}

	};
