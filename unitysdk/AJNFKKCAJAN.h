#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/TRFTwoState.h"
#include "unitysdk/System/Object.h"

#define AJNFKKCAJAN_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA117E0)

inline static constexpr unsigned int AJNFKKCAJAN_TypeDefinitionIndex = 43428;

	class AJNFKKCAJAN : public ::System::Object
	{
	public:
		::System::UInt32 KCGNEDIAJCO; // 0x10
		::RPG::Client::LittleGame::TRFTwoState FMHBDAOIDED; // 0x14
		::System::Boolean CAGCHKJHMPD; // 0x18
		::System::Boolean LHGGJKPHJNO; // 0x19
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AJNFKKCAJAN_CTOR_OFFSET))(this);
		}

	};
