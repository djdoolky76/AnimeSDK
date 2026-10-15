#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFTwoState.h"
#include "unitysdk/System/Object.h"

#define AJNFKKCAJAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1C8900D0)

inline static constexpr unsigned int AJNFKKCAJAN_TypeDefinitionIndex = 42453;

	class AJNFKKCAJAN : public ::System::Object
	{
	public:
		::System::Boolean LHGGJKPHJNO; // 0x10
		::System::Boolean CAGCHKJHMPD; // 0x11
		::System::Byte _padding0[0x2];
		::RPG::Client::LittleGame::TRFTwoState FMHBDAOIDED; // 0x14
		::System::UInt32 KCGNEDIAJCO; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNFKKCAJAN_CTOR_OFFSET))(this);
		}

	};
