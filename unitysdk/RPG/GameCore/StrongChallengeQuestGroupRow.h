#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class StrongChallengeQuestGroupRow; }

#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB2CD80)
#define RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DB2C740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StrongChallengeQuestGroupRow_TypeDefinitionIndex = 12399;

	class StrongChallengeQuestGroupRow : public ::System::Object
	{
	public:
		::RPG::Client::TextID Name; // 0x10
		::System::UInt32 QuestGroupID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::StrongChallengeQuestGroupRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::StrongChallengeQuestGroupRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGEQUESTGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
