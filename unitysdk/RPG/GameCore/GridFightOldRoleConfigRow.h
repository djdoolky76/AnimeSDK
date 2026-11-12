#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightChargeType.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightOldRoleConfigRow; }
namespace System { class String; }

#define RPG_GAMECORE_GRIDFIGHTOLDROLECONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E9465D0)
#define RPG_GAMECORE_GRIDFIGHTOLDROLECONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E946220)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightOldRoleConfigRow_TypeDefinitionIndex = 13660;

	class GridFightOldRoleConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* TraitList; // 0x10
		::Il2CppArray<::RPG::GameCore::GridFightChargeType>* ChargeType; // 0x18
		::Il2CppArray<::System::UInt32>* BackendRankList; // 0x20
		::System::String* MaxSPIcon; // 0x28
		::System::UInt32 ExistSeason; // 0x30
		::System::UInt32 SpecialAvatarID; // 0x34
		::System::UInt32 EquipmentID; // 0x38
		::System::UInt32 ID; // 0x3C
		::System::UInt32 Rarity; // 0x40
		::System::UInt32 AvatarID; // 0x44
		::RPG::GameCore::GridFightPreset FrontBackType; // 0x48
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTOLDROLECONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightOldRoleConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightOldRoleConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTOLDROLECONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
