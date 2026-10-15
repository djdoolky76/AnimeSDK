#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/LevelGroupAtmosphereLoadCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupAtmosphereSavedValueCondition; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELGROUPATMOSPHERESAVEDVALUECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AF3B0)
#define RPG_GAMECORE_LEVELGROUPATMOSPHERESAVEDVALUECONDITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7AF3C0)
#define RPG_GAMECORE_LEVELGROUPATMOSPHERESAVEDVALUECONDITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D7AF970)

namespace RPG::GameCore
{
	class LevelGroupAtmosphereSavedValueCondition : public ::RPG::GameCore::LevelGroupAtmosphereLoadCondition
	{
	public:
		::System::String* SavedValueName; // 0x10
		::RPG::GameCore::CompareType Operation; // 0x18
		::System::Int16 Value; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERESAVEDVALUECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupAtmosphereSavedValueCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupAtmosphereSavedValueCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERESAVEDVALUECONDITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupAtmosphereSavedValueCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupAtmosphereSavedValueCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPATMOSPHERESAVEDVALUECONDITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
