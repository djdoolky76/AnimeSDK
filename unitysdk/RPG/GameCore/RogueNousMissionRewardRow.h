#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class RogueNousMissionRewardRow; }

#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9F7AC0)
#define RPG_GAMECORE_ROGUENOUSMISSIONREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D9F7460)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueNousMissionRewardRow_TypeDefinitionIndex = 14923;

	class RogueNousMissionRewardRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::RPG::Client::TextID TabTitle; // 0x18
		::System::UInt32 MissionRewardID; // 0x28
		::System::UInt32 UnlockID; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::RogueNousMissionRewardRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::RogueNousMissionRewardRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUENOUSMISSIONREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
