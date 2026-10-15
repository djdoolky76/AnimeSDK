#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PlayerActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FateActionConfigBase; }

#define RPG_GAMECORE_FATEACTIONCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D66BCE0)
#define RPG_GAMECORE_FATEACTIONCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D66CA60)
#define RPG_GAMECORE_FATEACTIONCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D66C590)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateActionConfigBase_TypeDefinitionIndex = 19222;

	class FateActionConfigBase : public ::RPG::GameCore::PlayerActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTIONCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTIONCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FateActionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FateActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FATEACTIONCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
