#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/LogicOperationType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupAtmosphereLoadCondition; }
namespace RPG::GameCore { class LevelGroupAtmosphereLoadConditionSet; }

#define RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITIONSET_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AF8C0)
#define RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITIONSET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AF790)

namespace RPG::GameCore
{
	class LevelGroupAtmosphereLoadConditionSet : public ::RPG::GameCore::JsonConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::LevelGroupAtmosphereLoadCondition*>* Conditions; // 0x10
		::RPG::GameCore::LogicOperationType Operation; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITIONSET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupAtmosphereLoadConditionSet* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupAtmosphereLoadConditionSet*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERELOADCONDITIONSET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
