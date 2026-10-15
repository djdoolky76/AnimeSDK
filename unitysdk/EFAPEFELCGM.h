#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define EFAPEFELCGM_CTOR_OFFSET UNITYSDK_OFFSET(0x13A479F0)

inline static constexpr unsigned int EFAPEFELCGM_TypeDefinitionIndex = 63735;

	class EFAPEFELCGM : public ::System::Object
	{
	public:
		::System::UInt32 NMBKAIEIAPE; // 0x10
		::System::UInt32 FOJDEJPDKEJ; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + EFAPEFELCGM_CTOR_OFFSET))(this);
		}

	};
