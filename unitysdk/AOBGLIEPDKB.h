#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HONIFDCKPFM.h"

#define AOBGLIEPDKB_CTOR_OFFSET UNITYSDK_OFFSET(0x1589AD80)
#define AOBGLIEPDKB_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x1589AD20)
#define AOBGLIEPDKB_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x1589AD30)

inline static constexpr unsigned int AOBGLIEPDKB_TypeDefinitionIndex = 74009;

	class AOBGLIEPDKB : public ::HONIFDCKPFM
	{
	public:
		::System::Int32 ENMIPOPKOOL; // 0x18
		::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + AOBGLIEPDKB_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Int32 get_value()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + AOBGLIEPDKB_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + AOBGLIEPDKB_SET_VALUE_OFFSET))(this, a1);
		}

	};
