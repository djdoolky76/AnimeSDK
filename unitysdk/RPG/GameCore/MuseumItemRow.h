#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class MuseumItemRow; }

#define RPG_GAMECORE_MUSEUMITEMROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E489C10)
#define RPG_GAMECORE_MUSEUMITEMROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E489670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MuseumItemRow_TypeDefinitionIndex = 14384;

	class MuseumItemRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ItemSkillList; // 0x10
		::System::UInt32 DisplayOrder; // 0x18
		::System::UInt32 AreaID; // 0x1C
		::System::UInt32 ItemID; // 0x20
		::System::UInt32 ScenePropID; // 0x24
		::System::UInt32 RenewPoint; // 0x28
		::System::UInt32 StatsA; // 0x2C
		::System::UInt32 StatsC; // 0x30
		::System::UInt32 CollectedReward; // 0x34
		::RPG::Client::TextID EvidenceInfoTextID; // 0x38
		::System::UInt32 StatsB; // 0x48
		::System::UInt32 UnlockPhase; // 0x4C
		::RPG::Client::TextID MuseumItemDesc; // 0x50
		::System::UInt32 SceneGroupID; // 0x60
		::System::Boolean IsInitial; // 0x64
		::System::Boolean HideGetHint; // 0x65
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
