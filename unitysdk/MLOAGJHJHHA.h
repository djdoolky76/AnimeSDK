#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MLOAGJHJHHA_CTOR_OFFSET UNITYSDK_OFFSET(0x1DAEEC80)

inline static constexpr unsigned int MLOAGJHJHHA_TypeDefinitionIndex = 43225;

	class MLOAGJHJHHA : public ::System::Object
	{
	public:
		::System::UInt64 PJPNOIBBLNL; // 0x10
		::System::UInt64 NIBADNMCHEI; // 0x18
		::System::UInt64 MOHABCNEKBI; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MLOAGJHJHHA_CTOR_OFFSET))(this);
		}

	};
