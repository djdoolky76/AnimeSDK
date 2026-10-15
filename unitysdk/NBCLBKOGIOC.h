#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class BDDFOIDOHPG;
namespace RPG::Client { class FatePhaseInfoItem; }

#define NBCLBKOGIOC_BPLPBPMEODA_OFFSET UNITYSDK_OFFSET(0xBABE270)
#define NBCLBKOGIOC_CTOR_OFFSET UNITYSDK_OFFSET(0xBABE220)
#define NBCLBKOGIOC_PALPEDBACDA_OFFSET UNITYSDK_OFFSET(0xBABE4D0)

inline static constexpr unsigned int NBCLBKOGIOC_TypeDefinitionIndex = 64111;

	class NBCLBKOGIOC : public ::System::Object
	{
	public:
		::BDDFOIDOHPG* OOMJLEJJJKI; // 0x10
		::System::UInt32 MIAPFDLEOLF; // 0x18
		::System::Void _ctor(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBCLBKOGIOC_CTOR_OFFSET))(this, a1);
		}

		::RPG::Client::FatePhaseInfoItem* BPLPBPMEODA(::System::UInt32 a1)
		{
			return ((::RPG::Client::FatePhaseInfoItem*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + NBCLBKOGIOC_BPLPBPMEODA_OFFSET))(this, a1);
		}

		::System::Boolean PALPEDBACDA()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NBCLBKOGIOC_PALPEDBACDA_OFFSET))(this);
		}

	};
