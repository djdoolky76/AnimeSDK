#pragma once
#include "unitysdk/unitysdk.h"
namespace RPG::GameCore { class ST_Side_HipplenBallFetchStopRun; }
namespace RPG::GameCore { class TaskContext; }

#define IGCAJCEBPBM_CTOR_OFFSET UNITYSDK_OFFSET(0x19F42F20)
#define IGCAJCEBPBM_DISPOSE_OFFSET UNITYSDK_OFFSET(0x19F431D0)
#define IGCAJCEBPBM_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x19F42F50)
#define IGCAJCEBPBM_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x19F43180)
#define IGCAJCEBPBM_TICK_OFFSET UNITYSDK_OFFSET(0x19F43120)

inline static constexpr unsigned int IGCAJCEBPBM_TypeDefinitionIndex = 53389;

	class IGCAJCEBPBM
	{
	public:
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::GameCore::ST_Side_HipplenBallFetchStopRun* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::GameCore::ST_Side_HipplenBallFetchStopRun*))((::PBYTE)hIl2Cpp + IGCAJCEBPBM_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCAJCEBPBM_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + IGCAJCEBPBM_TICK_OFFSET))(this, a1);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCAJCEBPBM_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + IGCAJCEBPBM_DISPOSE_OFFSET))(this);
		}

	};
