#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PlayerActionConfigBase; }

#define RPG_GAMECORE_PLAYERACTIONCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9335C0)
#define RPG_GAMECORE_PLAYERACTIONCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D9335B0)
#define RPG_GAMECORE_PLAYERACTIONCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D933550)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PlayerActionConfigBase_TypeDefinitionIndex = 19555;

	class PlayerActionConfigBase : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERACTIONCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerActionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERACTIONCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PlayerActionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PlayerActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PLAYERACTIONCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
