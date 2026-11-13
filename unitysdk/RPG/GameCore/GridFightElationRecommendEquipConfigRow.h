#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightElationRecommendEquipConfigRow; }

#define RPG_GAMECORE_GRIDFIGHTELATIONRECOMMENDEQUIPCONFIGROW_CTOR_OFFSET UNITYSDK_OFFSET(0x20603120)
#define RPG_GAMECORE_GRIDFIGHTELATIONRECOMMENDEQUIPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x20602F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightElationRecommendEquipConfigRow_TypeDefinitionIndex = 13838;

	class GridFightElationRecommendEquipConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SeasonIDList; // 0x10
		::System::UInt32 SecondRecommendEquip; // 0x18
		::System::UInt32 EquipID; // 0x1C
		::System::UInt32 FirstRecommendEquip; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTELATIONRECOMMENDEQUIPCONFIGROW_CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightElationRecommendEquipConfigRow* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightElationRecommendEquipConfigRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTELATIONRECOMMENDEQUIPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}

	};
}
