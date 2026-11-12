#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CEBattleAreaInfo; }

#define RPG_GAMECORE_CEBATTLEAREAINFO_CTOR_OFFSET UNITYSDK_OFFSET(0x1E756090)
#define RPG_GAMECORE_CEBATTLEAREAINFO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E755EE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CEBattleAreaInfo_TypeDefinitionIndex = 18301;

	class CEBattleAreaInfo : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 PlaneId; // 0x10
		::System::UInt32 FloorId; // 0x14
		::System::UInt32 GroupId; // 0x18
		::System::UInt32 BattleAreaId; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEBATTLEAREAINFO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CEBattleAreaInfo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CEBattleAreaInfo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CEBATTLEAREAINFO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
