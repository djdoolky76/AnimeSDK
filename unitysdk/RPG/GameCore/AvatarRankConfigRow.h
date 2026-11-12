#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AvatarRankConfigRow; }
namespace RPG::GameCore { class ItemConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define RPG_GAMECORE_AVATARRANKCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E640D50)
#define RPG_GAMECORE_AVATARRANKCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E6404B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarRankConfigRow_TypeDefinitionIndex = 12821;

	class AvatarRankConfigRow : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::UInt32, ::System::UInt32>* SkillAddLevelList; // 0x10
		::Il2CppArray<::System::String*>* RankAbility; // 0x18
		::Il2CppArray<::RPG::GameCore::FixPoint>* Param; // 0x20
		::System::String* Name; // 0x28
		::System::String* Desc; // 0x30
		::Il2CppArray<::RPG::GameCore::ItemConfig*>* UnlockCost; // 0x38
		::Il2CppArray<::System::UInt32>* ExtraEffectIDList; // 0x40
		::System::String* IconPath; // 0x48
		::System::UInt32 RankID; // 0x50
		::System::UInt32 Rank; // 0x54
		::RPG::GameCore::StringHash Trigger; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRANKCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::AvatarRankConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AvatarRankConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARRANKCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
