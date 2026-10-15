#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FMBPAEBCDLE.h"

#define OMAFNEHLDED_AJAMJDIIFDO_OFFSET UNITYSDK_OFFSET(0xBF175E0)
#define OMAFNEHLDED_CTOR_OFFSET UNITYSDK_OFFSET(0xBF17720)
#define OMAFNEHLDED_DFIPKNDNEBP_OFFSET UNITYSDK_OFFSET(0xBF176D0)

inline static constexpr unsigned int OMAFNEHLDED_TypeDefinitionIndex = 76783;

	class OMAFNEHLDED : public ::FMBPAEBCDLE
	{
	public:
		::System::Single BKEPLPHNFIA; // 0x40
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAFNEHLDED_CTOR_OFFSET))(this);
		}

		::System::Void AJAMJDIIFDO(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OMAFNEHLDED_AJAMJDIIFDO_OFFSET))(this, a1);
		}

		::System::Void DFIPKNDNEBP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OMAFNEHLDED_DFIPKNDNEBP_OFFSET))(this);
		}

	};
