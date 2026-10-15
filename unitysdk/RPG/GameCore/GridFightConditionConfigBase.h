#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerCondConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class GridFightConditionConfigBase; }

#define RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D727E30)
#define RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D7285D0)
#define RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D728260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightConditionConfigBase_TypeDefinitionIndex = 19325;

	class GridFightConditionConfigBase : public ::RPG::GameCore::PlayerCondConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::GridFightConditionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::GridFightConditionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_GRIDFIGHTCONDITIONCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
