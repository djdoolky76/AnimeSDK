#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightPreset.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightRoleRecomSpotLightConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTROLERECOMSPOTLIGHTCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1EA5D1F0)
#define RPG_GAMECORE_GRIDFIGHTROLERECOMSPOTLIGHTCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1EA5D010)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightRoleRecomSpotLightConfigRow_TypeDefinitionIndex = 13721;

	class GridFightRoleRecomSpotLightConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* FirstRecommendSpotLightList; // 0x10
		::Il2CppArray<::System::UInt32>* SecondRecommendSpotLightList; // 0x18
		::System::UInt32 RoleID; // 0x20
		::RPG::GameCore::GridFightPreset FrontBackType; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLERECOMSPOTLIGHTCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightRoleRecomSpotLightConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightRoleRecomSpotLightConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTROLERECOMSPOTLIGHTCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
