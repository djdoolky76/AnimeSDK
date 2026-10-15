#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckLineupHeroAvatarID; }

#define RPG_GAMECORE_BYCHECKLINEUPHEROAVATARID_CTOR_OFFSET UNITYSDK_OFFSET(0x1D463E40)
#define RPG_GAMECORE_BYCHECKLINEUPHEROAVATARID_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D463E50)
#define RPG_GAMECORE_BYCHECKLINEUPHEROAVATARID_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D463E00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckLineupHeroAvatarID_TypeDefinitionIndex = 20795;

	class ByCheckLineupHeroAvatarID : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPHEROAVATARID_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckLineupHeroAvatarID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckLineupHeroAvatarID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPHEROAVATARID_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckLineupHeroAvatarID* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckLineupHeroAvatarID*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKLINEUPHEROAVATARID_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
