#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/GridFightJadeShopCostType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightJadeUniqueTraitShopConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTJADEUNIQUETRAITSHOPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20609ED0)
#define RPG_GAMECORE_GRIDFIGHTJADEUNIQUETRAITSHOPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x20609C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightJadeUniqueTraitShopConfigRow_TypeDefinitionIndex = 13861;

	class GridFightJadeUniqueTraitShopConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ParamList; // 0x10
		::System::UInt32 ID; // 0x18
		::RPG::GameCore::GridFightJadeShopCostType CostType; // 0x1C
		::System::UInt32 BonusID; // 0x20
		::System::UInt32 CostParam; // 0x24
		::RPG::Client::TextID JadeGoodName; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTJADEUNIQUETRAITSHOPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightJadeUniqueTraitShopConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightJadeUniqueTraitShopConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTJADEUNIQUETRAITSHOPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
