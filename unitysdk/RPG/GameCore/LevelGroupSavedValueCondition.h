#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupSavedValueCondition; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7B1BA0)
#define RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7B1A20)

namespace RPG::GameCore
{
	class LevelGroupSavedValueCondition : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::String* SavedValueName; // 0x10
		::RPG::GameCore::CompareType Operation; // 0x18
		::System::Int16 Value; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupSavedValueCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupSavedValueCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSAVEDVALUECONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
