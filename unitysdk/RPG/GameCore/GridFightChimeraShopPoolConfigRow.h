#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightChimeraShopGoodsType.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightChimeraShopPoolConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTCHIMERASHOPPOOLCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x1E932BA0)
#define RPG_GAMECORE_GRIDFIGHTCHIMERASHOPPOOLCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1E932A30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightChimeraShopPoolConfigRow_TypeDefinitionIndex = 13858;

	class GridFightChimeraShopPoolConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 ID; // 0x10
		::System::UInt32 Param; // 0x14
		::RPG::GameCore::GridFightChimeraShopGoodsType Type; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCHIMERASHOPPOOLCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightChimeraShopPoolConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightChimeraShopPoolConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCHIMERASHOPPOOLCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
