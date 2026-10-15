#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ELevelPerformanceType.h"
#include "unitysdk/System/Object.h"
namespace RPG::GameCore { class LevelGraphComponent; }
namespace RPG::GameCore { class LevelGraphConfig; }

#define NBFOJHKNPAH_CTOR_OFFSET UNITYSDK_OFFSET(0xBABF9D0)
#define NBFOJHKNPAH_EGENFIKENLL_OFFSET UNITYSDK_OFFSET(0xBABF2B0)
#define NBFOJHKNPAH_ELPMPOGCFKJ_OFFSET UNITYSDK_OFFSET(0xBABF5A0)
#define NBFOJHKNPAH_PFIMFPODNHH_OFFSET UNITYSDK_OFFSET(0xBABF7F0)

inline static constexpr unsigned int NBFOJHKNPAH_TypeDefinitionIndex = 66446;

	class NBFOJHKNPAH : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NBFOJHKNPAH_CTOR_OFFSET))(this);
		}

		static ::RPG::GameCore::LevelGraphComponent* EGENFIKENLL(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + NBFOJHKNPAH_EGENFIKENLL_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LevelGraphComponent* ELPMPOGCFKJ(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
		{
			return ((::RPG::GameCore::LevelGraphComponent*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + NBFOJHKNPAH_ELPMPOGCFKJ_OFFSET))(a1, a2);
		}

		static ::RPG::GameCore::LevelGraphConfig* PFIMFPODNHH(::System::UInt32 a1, ::RPG::GameCore::ELevelPerformanceType a2)
		{
			return ((::RPG::GameCore::LevelGraphConfig*(*)(::System::UInt32, ::RPG::GameCore::ELevelPerformanceType))((::PBYTE)hIl2Cpp + NBFOJHKNPAH_PFIMFPODNHH_OFFSET))(a1, a2);
		}

	};
