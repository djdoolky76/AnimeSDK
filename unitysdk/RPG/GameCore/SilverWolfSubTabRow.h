#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/SilverWolfSubTabType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class SilverWolfSubTabRow; }

#define RPG_GAMECORE_SILVERWOLFSUBTABROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1DABBB60)
#define RPG_GAMECORE_SILVERWOLFSUBTABROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1DABB850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int SilverWolfSubTabRow_TypeDefinitionIndex = 12351;

	class SilverWolfSubTabRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* QuestList; // 0x10
		::System::UInt32 UnlockMission; // 0x18
		::System::UInt32 MappingInfoID; // 0x1C
		::System::UInt32 EntranceID; // 0x20
		::System::UInt32 FinalQuest; // 0x24
		::RPG::GameCore::SilverWolfSubTabType TabType; // 0x28
		::System::UInt32 GroupID; // 0x2C
		::RPG::Client::TextID Title; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFSUBTABROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::SilverWolfSubTabRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::SilverWolfSubTabRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_SILVERWOLFSUBTABROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
