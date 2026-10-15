#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/HPKACEPPPCA.h"
namespace RPG::Client::OpenWorld { class StreamingItemData; }

#define BMIKHDAIIMO_GJNBKBDDJAI_CTOR_OFFSET UNITYSDK_OFFSET(0xBDB2120)
#define BMIKHDAIIMO_GJNBKBDDJAI_FMPHNNADJPE_OFFSET UNITYSDK_OFFSET(0xBDB95C0)

inline static constexpr unsigned int BMIKHDAIIMO_GJNBKBDDJAI_TypeDefinitionIndex = 73877;

	class BMIKHDAIIMO_GJNBKBDDJAI : public ::HPKACEPPPCA
	{
	public:
		::System::UInt32 OFOJPFDPKHN; // 0x80
		::System::Void _ctor(::RPG::Client::OpenWorld::StreamingItemData* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::OpenWorld::StreamingItemData*, ::System::UInt32))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_GJNBKBDDJAI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void FMPHNNADJPE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BMIKHDAIIMO_GJNBKBDDJAI_FMPHNNADJPE_OFFSET))(this);
		}

	};
