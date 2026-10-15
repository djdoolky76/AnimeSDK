#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/LevelRegionStateCondition.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelRegionStateSavedValueCondition; }
namespace System { class String; }

#define RPG_GAMECORE_LEVELREGIONSTATESAVEDVALUECONDITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7CC130)
#define RPG_GAMECORE_LEVELREGIONSTATESAVEDVALUECONDITION_FROMBINARYIMPL_OFFSET UNITYSDK_OFFSET(0x1D7CC140)
#define RPG_GAMECORE_LEVELREGIONSTATESAVEDVALUECONDITION_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D7CC580)

namespace RPG::GameCore
{
	class LevelRegionStateSavedValueCondition : public ::RPG::GameCore::LevelRegionStateCondition
	{
	public:
		::System::String* SavedValueName; // 0x10
		::RPG::GameCore::CompareType Operation; // 0x18
		::System::Int16 Value; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATESAVEDVALUECONDITION_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelRegionStateSavedValueCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelRegionStateSavedValueCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATESAVEDVALUECONDITION_FROMBINARY_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinaryImpl(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelRegionStateSavedValueCondition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelRegionStateSavedValueCondition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELREGIONSTATESAVEDVALUECONDITION_FROMBINARYIMPL_OFFSET))(a1, a2);
		}

	};
}
