#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define ALDGGLFIIBC_ANGOMBFFLHD_OFFSET UNITYSDK_OFFSET(0x197BBC20)
#define ALDGGLFIIBC_CTOR_OFFSET UNITYSDK_OFFSET(0x197BBCC0)
#define ALDGGLFIIBC_IABANBEHOBL_OFFSET UNITYSDK_OFFSET(0x197BBBD0)
#define ALDGGLFIIBC_LAENHPGOLAN_OFFSET UNITYSDK_OFFSET(0x197BBC70)

inline static constexpr unsigned int ALDGGLFIIBC_TypeDefinitionIndex = 52998;

	class ALDGGLFIIBC : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ALDGGLFIIBC_CTOR_OFFSET))(this);
		}

		::System::Boolean IABANBEHOBL(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALDGGLFIIBC_IABANBEHOBL_OFFSET))(this, a1);
		}

		::System::Boolean ANGOMBFFLHD(::System::UInt32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALDGGLFIIBC_ANGOMBFFLHD_OFFSET))(this, a1);
		}

		::System::Void LAENHPGOLAN(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + ALDGGLFIIBC_LAENHPGOLAN_OFFSET))(this, a1);
		}

	};
