#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/GridFightPrayType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightPrayQuestConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTPRAYQUESTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94ABD0)
#define RPG_GAMECORE_GRIDFIGHTPRAYQUESTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E94A620)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPrayQuestConfigRow_TypeDefinitionIndex = 13583;

	class GridFightPrayQuestConfigRow : public ::System::Object
	{
	public:
		::System::String* AcceptJsonPath; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* AcceptEffectParamList; // 0x18
		::System::String* JsonPath; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* EffectParamList; // 0x28
		::System::UInt32 FinishBonus; // 0x30
		::System::UInt32 ID; // 0x34
		::RPG::Client::TextID PrayTitle; // 0x38
		::System::UInt32 AcceptBonus; // 0x48
		::RPG::GameCore::GridFightPrayType PrayType; // 0x4C
		::System::UInt32 FinishWayID; // 0x50
		::System::UInt32 Progress; // 0x54
		::RPG::Client::TextID PrayDesc; // 0x58
		::RPG::Client::TextID PrayPriceDesc; // 0x68
		::RPG::Client::TextID PrayDisPlayDesc; // 0x78
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
