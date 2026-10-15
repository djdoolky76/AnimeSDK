#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/MiActionConfigBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyActionConfigBase; }

#define RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBFED60)
#define RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DBFF9C0)
#define RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DBFF500)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyActionConfigBase_TypeDefinitionIndex = 18071;

	class TrainPartyActionConfigBase : public ::RPG::GameCore::MiActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyActionConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyActionConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYACTIONCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
