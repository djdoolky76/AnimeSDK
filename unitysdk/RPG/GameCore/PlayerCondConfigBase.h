#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiConditionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerCondConfigBase; }

#define RPG_GAMECORE_PLAYERCONDCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9337D0)
#define RPG_GAMECORE_PLAYERCONDCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9337C0)
#define RPG_GAMECORE_PLAYERCONDCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D933760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerCondConfigBase_TypeDefinitionIndex = 19559;

	class PlayerCondConfigBase : public ::RPG::GameCore::MiConditionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerCondConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerCondConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerCondConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerCondConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERCONDCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
