#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightShowMonsterCutIn; }

#define RPG_GAMECORE_GRIDFIGHTSHOWMONSTERCUTIN_CTOR_OFFSET UNITYSDK_OFFSET(0x1D7426F0)
#define RPG_GAMECORE_GRIDFIGHTSHOWMONSTERCUTIN_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D742700)
#define RPG_GAMECORE_GRIDFIGHTSHOWMONSTERCUTIN_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D742630)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightShowMonsterCutIn_TypeDefinitionIndex = 23233;

	class GridFightShowMonsterCutIn : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWMONSTERCUTIN_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightShowMonsterCutIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightShowMonsterCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWMONSTERCUTIN_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightShowMonsterCutIn* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightShowMonsterCutIn*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTSHOWMONSTERCUTIN_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
