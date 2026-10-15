#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define PJAPNGHDKEC_CTOR_OFFSET UNITYSDK_OFFSET(0xC27AC70)

inline static constexpr unsigned int PJAPNGHDKEC_TypeDefinitionIndex = 80542;

	class PJAPNGHDKEC : public ::System::Object
	{
	public:
		::System::UInt32 ACCJKGEKHKP; // 0x10
		::System::Boolean LNKLMECDDEA; // 0x14
		::System::Void _ctor(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + PJAPNGHDKEC_CTOR_OFFSET))(this, a1, a2);
		}

	};
