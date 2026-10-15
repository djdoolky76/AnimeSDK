#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define BAIKGHPJICF_CTOR_OFFSET UNITYSDK_OFFSET(0x1C59B650)

inline static constexpr unsigned int BAIKGHPJICF_TypeDefinitionIndex = 36442;

	class BAIKGHPJICF : public ::System::Object
	{
	public:
		::System::UInt32 LAMCLLPAJIM; // 0x10
		::System::UInt32 NJGKCPOOHDM; // 0x14
		::System::UInt32 CABBFBKCBCE; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BAIKGHPJICF_CTOR_OFFSET))(this);
		}

	};
