#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ActivityElationModifiedAvatarRow; }
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E562E30)
#define RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E562710)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityElationModifiedAvatarRow_TypeDefinitionIndex = 11374;

	class ActivityElationModifiedAvatarRow : public ::System::Object
	{
	public:
		::System::String* GiftIcon; // 0x10
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_BESkill; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_EnergyCollection; // 0x20
		::Il2CppArray<::RPG::GameCore::FixPoint>* ParamList_ModifiedSkill; // 0x28
		::RPG::Client::TextID ModifiedSkill_Simple; // 0x30
		::RPG::Client::TextID BESkill_Simple; // 0x40
		::RPG::Client::TextID EnergyCollection_Simple; // 0x50
		::RPG::Client::TextID GiftName; // 0x60
		::RPG::Client::TextID EnergyCollection; // 0x70
		::RPG::Client::TextID Tag; // 0x80
		::System::UInt32 ID; // 0x90
		::System::UInt32 SpecialAvatarID; // 0x94
		::RPG::Client::TextID ModifiedSkill; // 0x98
		::RPG::Client::TextID BESkill; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::ActivityElationModifiedAvatarRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ActivityElationModifiedAvatarRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYELATIONMODIFIEDAVATARROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
