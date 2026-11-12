#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPGKMODCGOD.h"

#define BODAHCIJODK_CTOR_OFFSET UNITYSDK_OFFSET(0xC76DF70)
#define BODAHCIJODK_GET_VALUE_OFFSET UNITYSDK_OFFSET(0xC76DF00)
#define BODAHCIJODK_SET_VALUE_OFFSET UNITYSDK_OFFSET(0xC76DF10)

inline static constexpr unsigned int BODAHCIJODK_TypeDefinitionIndex = 76152;

	class BODAHCIJODK : public ::HPGKMODCGOD
	{
	public:
		::System::Single PJKFLONMKED; // 0x18
		::System::Void _ctor(::System::Single a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + BODAHCIJODK_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Single get_value()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + BODAHCIJODK_GET_VALUE_OFFSET))(this);
		}

		::System::Void set_value(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + BODAHCIJODK_SET_VALUE_OFFSET))(this, a1);
		}

	};
