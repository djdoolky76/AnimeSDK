#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightPrayType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPrayQuestConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTPRAYQUESTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA58940)
#define RPG_GAMECORE_GRIDFIGHTPRAYQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA58390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrayQuestConfigRow_TypeDefinitionIndex = 13583;

	class GridFightPrayQuestConfigRow : public ::System::Object
	{
	public:
		::System::String* AcceptJsonPath; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* AcceptEffectParamList; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x20
		::System::String* JsonPath; // 0x28
		::RPG::Client::TextID PrayDesc; // 0x30
		::System::UInt32 ID; // 0x40
		::System::UInt32 Progress; // 0x44
		::System::UInt32 FinishWayID; // 0x48
		::RPG::GameCore::GridFightPrayType PrayType; // 0x4C
		::RPG::Client::TextID PrayTitle; // 0x50
		::RPG::Client::TextID PrayPriceDesc; // 0x60
		::RPG::Client::TextID PrayDisPlayDesc; // 0x70
		::System::UInt32 FinishBonus; // 0x80
		::System::UInt32 AcceptBonus; // 0x84
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPRAYQUESTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightPrayQuestConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightPrayQuestConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTPRAYQUESTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
