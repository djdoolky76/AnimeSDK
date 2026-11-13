#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/GELIALJDFBL.h"
namespace RPG::Client { class RoadRashGameModifier_AddUltimateEnergy; }
namespace RPG::GameCore { class TaskConfig; }
namespace RPG::GameCore { class TaskContext; }

#define OPGCLHJGGLF_CTOR_OFFSET UNITYSDK_OFFSET(0x18AB9150)
#define OPGCLHJGGLF_DISPOSE_OFFSET UNITYSDK_OFFSET(0x18AB9160)
#define OPGCLHJGGLF_GETCONFIG_OFFSET UNITYSDK_OFFSET(0x18AB9420)
#define OPGCLHJGGLF_ONTASKBEGIN_OFFSET UNITYSDK_OFFSET(0x18AB91A0)
#define OPGCLHJGGLF_ONTASKRESET_OFFSET UNITYSDK_OFFSET(0x18AB91F0)
#define OPGCLHJGGLF_TICK_OFFSET UNITYSDK_OFFSET(0x18AB9230)

inline static constexpr unsigned int OPGCLHJGGLF_TypeDefinitionIndex = 59673;

	class OPGCLHJGGLF : public ::GELIALJDFBL
	{
	public:
		::RPG::GameCore::TaskContext* DDDNLILNMKA; // 0x18
		::RPG::Client::RoadRashGameModifier_AddUltimateEnergy* OFKGLJOAMLD; // 0x20
		::System::Void _ctor(::RPG::GameCore::TaskContext* a1, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergy* a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::TaskContext*, ::RPG::Client::RoadRashGameModifier_AddUltimateEnergy*))((::PBYTE)hIl2Cpp + OPGCLHJGGLF_CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void Dispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGCLHJGGLF_DISPOSE_OFFSET))(this);
		}

		::System::Void OnTaskBegin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGCLHJGGLF_ONTASKBEGIN_OFFSET))(this);
		}

		::System::Void OnTaskReset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGCLHJGGLF_ONTASKRESET_OFFSET))(this);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + OPGCLHJGGLF_TICK_OFFSET))(this, a1);
		}

		::RPG::GameCore::TaskConfig* GetConfig()
		{
			return ((::RPG::GameCore::TaskConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + OPGCLHJGGLF_GETCONFIG_OFFSET))(this);
		}

	};
