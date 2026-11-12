#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FDLCNGPGEFP.h"

#define CJCEALHIAMM_CTOR_OFFSET UNITYSDK_OFFSET(0xDB6B6B0)
#define CJCEALHIAMM_GET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xDB6B690)
#define CJCEALHIAMM_SET_TIMESTAMP_OFFSET UNITYSDK_OFFSET(0xDB6B6A0)

inline static constexpr unsigned int CJCEALHIAMM_TypeDefinitionIndex = 80790;

	class CJCEALHIAMM : public ::FDLCNGPGEFP
	{
	public:
		::System::UInt64 _TimeStamp_k__BackingField; // 0x10
		::System::Void _ctor(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CJCEALHIAMM_CTOR_OFFSET))(this, a1);
		}

		::System::UInt64 get_TimeStamp()
		{
			return ((::System::UInt64(*)(::PVOID))((::PBYTE)hIl2Cpp + CJCEALHIAMM_GET_TIMESTAMP_OFFSET))(this);
		}

		::System::Void set_TimeStamp(::System::UInt64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + CJCEALHIAMM_SET_TIMESTAMP_OFFSET))(this, a1);
		}

	};
