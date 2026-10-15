#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NBKBJHIFENA_CTOR_OFFSET UNITYSDK_OFFSET(0x1C76ED10)

inline static constexpr unsigned int NBKBJHIFENA_TypeDefinitionIndex = 36452;

	class NBKBJHIFENA : public ::System::Object
	{
	public:
		::System::UInt32 CABBFBKCBCE; // 0x10
		::System::Int32 LFPBDLMKCMA; // 0x14
		::System::Int32 GACGNFFJOAH; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBKBJHIFENA_CTOR_OFFSET))(this);
		}

	};
