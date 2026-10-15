#pragma once
#include "unitysdk/unitysdk.h"

#define LDOGGNLKJOP_CTOR_OFFSET UNITYSDK_OFFSET(0xB63DF10)
#define LDOGGNLKJOP_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xB63DEB0)
#define LDOGGNLKJOP_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xB63DEC0)

inline static constexpr unsigned int LDOGGNLKJOP_TypeDefinitionIndex = 74008;

	class LDOGGNLKJOP
	{
	public:
		::System::Int32 PJKFLONMKED; // 0x18
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + LDOGGNLKJOP_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + LDOGGNLKJOP_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + LDOGGNLKJOP_SET_VALUE_OFFSET))(this, a1);
		}

	};
