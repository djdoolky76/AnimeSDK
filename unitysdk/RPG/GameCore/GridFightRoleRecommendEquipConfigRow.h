#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleRecommendEquipConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTROLERECOMMENDEQUIPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1D73E7F0)
#define RPG_GAMECORE_GRIDFIGHTROLERECOMMENDEQUIPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D73E630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleRecommendEquipConfigRow_TypeDefinitionIndex = 13529;

	class GridFightRoleRecommendEquipConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FirstRecommendEquipList; // 0x10
		::Il2CppArray<::System::UInt32>* SecondRecommendEquipList; // 0x18
		::System::UInt32 RoleID; // 0x20
		::RPG::GameCore::GridFightPreset FrontBackType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLERECOMMENDEQUIPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLERECOMMENDEQUIPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
