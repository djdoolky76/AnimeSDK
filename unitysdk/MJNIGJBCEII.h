#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFGENDDOCJJ.h"
class ACNFHAKPMIK;
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TaskContext; }

#define MJNIGJBCEII_CTOR_OFFSET UNITYSDK_OFFSET(0xB96F530)
#define MJNIGJBCEII_GEOAKBLMIEG_OFFSET UNITYSDK_OFFSET(0xB96F5F0)

	class MJNIGJBCEII : public ::NFGENDDOCJJ
	{
	public:
		::ACNFHAKPMIK* MLPDMHBMOKN; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::ACNFHAKPMIK* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::ACNFHAKPMIK*))((::PBYTE)hIl2Cpp + MJNIGJBCEII_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GEOAKBLMIEG(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + MJNIGJBCEII_GEOAKBLMIEG_OFFSET))(this, a1);
		}

	};
