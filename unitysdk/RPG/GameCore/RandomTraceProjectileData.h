#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/NewProjectileConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RandomTraceProjectileData; }

#define RPG_GAMECORE_RANDOMTRACEPROJECTILEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0x1D93F670)
#define RPG_GAMECORE_RANDOMTRACEPROJECTILEDATA_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D93F680)
#define RPG_GAMECORE_RANDOMTRACEPROJECTILEDATA_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D93F620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RandomTraceProjectileData_TypeDefinitionIndex = 15662;

	class RandomTraceProjectileData : public ::RPG::GameCore::NewProjectileConfig
	{
	public:
		::RPG::MVector3 TargetOffsetRange; // 0xB8
		::RPG::MVector3 StartOffsetRange; // 0xC4
		::System::Single MaxLifeTime; // 0xD0
		::System::Single TraceDelay; // 0xD4
		::System::Single ArriveDistance; // 0xD8
		::System::Single TurnSpeed; // 0xDC
		::RPG::MVector3 StartDirction; // 0xE0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTRACEPROJECTILEDATA_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomTraceProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomTraceProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTRACEPROJECTILEDATA_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::RandomTraceProjectileData* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RandomTraceProjectileData*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_RANDOMTRACEPROJECTILEDATA_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
