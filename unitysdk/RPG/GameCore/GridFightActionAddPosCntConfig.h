#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/GridFightActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightActionAddPosCntConfig; }

#define RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6F6780)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6F6790)
#define RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6F6740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightActionAddPosCntConfig_TypeDefinitionIndex = 19311;

	class GridFightActionAddPosCntConfig : public ::RPG::GameCore::GridFightActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddPosCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddPosCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightActionAddPosCntConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightActionAddPosCntConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTACTIONADDPOSCNTCONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
