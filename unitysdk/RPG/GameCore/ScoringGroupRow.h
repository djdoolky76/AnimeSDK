#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/BattleScoringDisplayType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ScoringGroupRow; }

#define RPG_GAMECORE_SCORINGGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA8A550)
#define RPG_GAMECORE_SCORINGGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DA89EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ScoringGroupRow_TypeDefinitionIndex = 12884;

	class ScoringGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ScoringIDList; // 0x10
		::System::UInt32 ScoringGroupID; // 0x18
		::RPG::GameCore::BattleScoringDisplayType DisplayType; // 0x1C
		::RPG::Client::TextID ScoreName; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ScoringGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ScoringGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SCORINGGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
