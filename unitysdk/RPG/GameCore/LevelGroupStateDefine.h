#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class LevelGroupStateDefine; }

#define RPG_GAMECORE_LEVELGROUPSTATEDEFINE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7841D0)
#define RPG_GAMECORE_LEVELGROUPSTATEDEFINE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D784190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LevelGroupStateDefine_TypeDefinitionIndex = 17331;

	class LevelGroupStateDefine : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSTATEDEFINE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::LevelGroupStateDefine* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::LevelGroupStateDefine*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LEVELGROUPSTATEDEFINE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
