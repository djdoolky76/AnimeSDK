#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightChargeType.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/RPG/GameCore/GridFightRoleSkillTag.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTROLECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E94E760)
#define RPG_GAMECORE_GRIDFIGHTROLECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E94E210)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleConfigRow_TypeDefinitionIndex = 13593;

	class GridFightRoleConfigRow : public ::System::Object
	{
	public:
		::System::String* MaxSPIcon; // 0x10
		::Il2CppArray<::System::UInt32>* TraitList; // 0x18
		::Il2CppArray<::RPG::GameCore::GridFightChargeType>* ChargeType; // 0x20
		::Il2CppArray<::System::UInt32>* BackendRankList; // 0x28
		::System::UInt32 ID; // 0x30
		::RPG::GameCore::GridFightRoleSkillTag HealOrShieldDisplay; // 0x34
		::System::UInt32 Rarity; // 0x38
		::System::UInt32 IsFakeAvatar; // 0x3C
		::System::UInt32 AvatarID; // 0x40
		::System::UInt32 EquipmentID; // 0x44
		::System::UInt32 IsExpert; // 0x48
		::System::UInt32 SpecialAvatarID; // 0x4C
		::System::UInt32 SeasonID; // 0x50
		::System::Boolean IsInBook; // 0x54
		::System::Boolean IsInPool; // 0x55
		::System::Byte _padding0[0x2];
		::RPG::GameCore::GridFightPreset FrontBackType; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
