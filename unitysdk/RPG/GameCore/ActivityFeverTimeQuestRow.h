#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityFeverTimeQuestRow; }

#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3606C0)
#define RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3600A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFeverTimeQuestRow_TypeDefinitionIndex = 11589;

	class ActivityFeverTimeQuestRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestIDList; // 0x10
		::RPG::Client::TextID TabName; // 0x18
		::System::UInt32 QuestGroupID; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityFeverTimeQuestRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityFeverTimeQuestRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFEVERTIMEQUESTROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
