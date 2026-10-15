#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NFGENDDOCJJ.h"
namespace RPG::Client { class MonoEffect; }
namespace RPG::GameCore { class TaskContext; }
namespace RPG::GameCore { class TriggerSDFTextEffect; }

#define GMFEEACGAJI_CTOR_OFFSET UNITYSDK_OFFSET(0x15ACDAB0)
#define GMFEEACGAJI_GEOAKBLMIEG_OFFSET UNITYSDK_OFFSET(0x15ACDB60)

inline static constexpr unsigned int GMFEEACGAJI_TypeDefinitionIndex = 55766;

	class GMFEEACGAJI : public ::NFGENDDOCJJ
	{
	public:
		::RPG::GameCore::TriggerSDFTextEffect* EDMEGIFHMGN; // 0x38
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::TriggerSDFTextEffect* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::TriggerSDFTextEffect*))((::PBYTE)hIl2Cpp + GMFEEACGAJI_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void GEOAKBLMIEG(::RPG::Client::MonoEffect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::MonoEffect*))((::PBYTE)hIl2Cpp + GMFEEACGAJI_GEOAKBLMIEG_OFFSET))(this, a1);
		}

	};
