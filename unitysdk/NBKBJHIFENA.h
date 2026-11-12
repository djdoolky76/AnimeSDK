#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NBKBJHIFENA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8F0670)

inline static constexpr unsigned int NBKBJHIFENA_TypeDefinitionIndex = 37380;

	class NBKBJHIFENA : public ::System::Object
	{
	public:
		::System::Int32 LFPBDLMKCMA; // 0x10
		::System::Int32 GACGNFFJOAH; // 0x14
		::System::UInt32 CABBFBKCBCE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKBJHIFENA_CTOR_OFFSET))(this);
		}

	};
