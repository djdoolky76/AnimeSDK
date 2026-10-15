#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumItemRow; }

#define RPG_GAMECORE_MUSEUMITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D8C6890)
#define RPG_GAMECORE_MUSEUMITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D8C62F0)

namespace RPG::GameCore
{
	class MuseumItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ItemSkillList; // 0x10
		::System::UInt32 ItemID; // 0x18
		::System::UInt32 StatsA; // 0x1C
		::RPG::Client::TextID EvidenceInfoTextID; // 0x20
		::System::UInt32 RenewPoint; // 0x30
		::System::UInt32 CollectedReward; // 0x34
		::System::UInt32 DisplayOrder; // 0x38
		::System::UInt32 AreaID; // 0x3C
		::RPG::Client::TextID MuseumItemDesc; // 0x40
		::System::Boolean IsInitial; // 0x50
		::System::Boolean HideGetHint; // 0x51
		::System::Byte _padding0[0x2];
		::System::UInt32 StatsB; // 0x54
		::System::UInt32 StatsC; // 0x58
		::System::UInt32 ScenePropID; // 0x5C
		::System::UInt32 UnlockPhase; // 0x60
		::System::UInt32 SceneGroupID; // 0x64
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMITEMROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::MuseumItemRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::MuseumItemRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MUSEUMITEMROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
