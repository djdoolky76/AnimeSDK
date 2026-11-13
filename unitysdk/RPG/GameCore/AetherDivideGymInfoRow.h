#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AetherDivideGymInfoRow; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AETHERDIVIDEGYMINFOROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E908C10)
#define RPG_GAMECORE_AETHERDIVIDEGYMINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E9081E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AetherDivideGymInfoRow_TypeDefinitionIndex = 10934;

	class AetherDivideGymInfoRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* DisplayMonsterMap; // 0x10
		::System::String* IconPath; // 0x18
		::System::String* TabIconPath; // 0x20
		::Il2CppArray<::System::UInt32>* ChallengeQuestList; // 0x28
		::System::String* BGPath; // 0x30
		::System::UInt32 ID; // 0x38
		::System::UInt32 ActivityModuleID; // 0x3C
		::System::UInt32 SpiritQuest; // 0x40
		::System::UInt32 BadgeUnlockID; // 0x44
		::RPG::Client::TextID Rule; // 0x48
		::RPG::Client::TextID Description; // 0x58
		::System::UInt32 EntranceID; // 0x68
		::System::UInt32 UnlockID; // 0x6C
		::System::UInt32 TrainerQuest; // 0x70
		::System::Byte _padding0[0x4];
		::RPG::Client::TextID Name; // 0x78
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AetherDivideGymInfoRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AetherDivideGymInfoRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AETHERDIVIDEGYMINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
