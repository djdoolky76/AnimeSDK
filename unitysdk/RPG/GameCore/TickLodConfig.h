#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LodConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TickLodConfig; }

#define RPG_GAMECORE_TICKLODCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB84630)
#define RPG_GAMECORE_TICKLODCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB84640)
#define RPG_GAMECORE_TICKLODCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB84600)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TickLodConfig_TypeDefinitionIndex = 19202;

	class TickLodConfig : public ::RPG::GameCore::LodConfig
	{
	public:
		::System::Boolean EnableAnimatorURO; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TickLodConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TickLodConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TickLodConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TickLodConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TICKLODCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
