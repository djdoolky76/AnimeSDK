#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupAtmosphereLoadCondition; }

#define RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D781D00)
#define RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D781CA0)
#define RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D781570)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupAtmosphereLoadCondition_TypeDefinitionIndex = 17212;

	class LevelGroupAtmosphereLoadCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupAtmosphereLoadCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupAtmosphereLoadCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupAtmosphereLoadCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupAtmosphereLoadCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
