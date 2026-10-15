#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PJAPNGHDKEC_CTOR_OFFSET UNITYSDK_OFFSET(0xC2732B0)

inline static constexpr unsigned int PJAPNGHDKEC_TypeDefinitionIndex = 80541;

	class PJAPNGHDKEC : public ::System::Object
	{
	public:
		::System::Boolean LNKLMECDDEA; // 0x10
		::System::Byte _padding0[0x3];
		::System::UInt32 ACCJKGEKHKP; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + PJAPNGHDKEC_CTOR_OFFSET))(this, a1, a2);
		}

	};
