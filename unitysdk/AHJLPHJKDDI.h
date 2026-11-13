#pragma once
#include "unitysdk/unitysdk.h"

#define AHJLPHJKDDI_CTOR_OFFSET UNITYSDK_OFFSET(0x19B24A60)
#define AHJLPHJKDDI_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x19B249F0)
#define AHJLPHJKDDI_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x19B24A00)

inline static constexpr unsigned int AHJLPHJKDDI_TypeDefinitionIndex = 76152;

	class AHJLPHJKDDI
	{
	public:
		::System::Single PJKFLONMKED; // 0x18
		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + AHJLPHJKDDI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + AHJLPHJKDDI_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + AHJLPHJKDDI_SET_VALUE_OFFSET))(this, a1);
		}

	};
