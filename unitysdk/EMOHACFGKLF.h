#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EMOHACFGKLF_CTOR_OFFSET UNITYSDK_OFFSET(0x1554D720)
#define EMOHACFGKLF_GET_BOTTOM_OFFSET UNITYSDK_OFFSET(0x1554D700)
#define EMOHACFGKLF_GET_HEIGHT_OFFSET UNITYSDK_OFFSET(0x1554D6D0)
#define EMOHACFGKLF_GET_LEFT_OFFSET UNITYSDK_OFFSET(0x1554D6E0)
#define EMOHACFGKLF_GET_RIGHT_OFFSET UNITYSDK_OFFSET(0x1554D6F0)
#define EMOHACFGKLF_GET_TOP_OFFSET UNITYSDK_OFFSET(0x1554D710)
#define EMOHACFGKLF_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x1554D6C0)

inline static constexpr unsigned int EMOHACFGKLF_TypeDefinitionIndex = 64469;

	class EMOHACFGKLF : public ::System::Object
	{
	public:
		::System::Double _Top_k__BackingField; // 0x10
		::System::Double _Height_k__BackingField; // 0x18
		::System::Double _Bottom_k__BackingField; // 0x20
		::System::Double _Right_k__BackingField; // 0x28
		::System::Double _Left_k__BackingField; // 0x30
		::System::Double _Width_k__BackingField; // 0x38
		::System::Void _ctor(::System::Double a1, ::System::Double a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + EMOHACFGKLF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Double get_Width()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOHACFGKLF_GET_WIDTH_OFFSET))(this);
		}

		::System::Double get_Height()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOHACFGKLF_GET_HEIGHT_OFFSET))(this);
		}

		::System::Double get_Left()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOHACFGKLF_GET_LEFT_OFFSET))(this);
		}

		::System::Double get_Right()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOHACFGKLF_GET_RIGHT_OFFSET))(this);
		}

		::System::Double get_Bottom()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOHACFGKLF_GET_BOTTOM_OFFSET))(this);
		}

		::System::Double get_Top()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + EMOHACFGKLF_GET_TOP_OFFSET))(this);
		}

	};
