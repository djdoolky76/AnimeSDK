#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TrainPartyModifierConfigBase; }

#define RPG_GAMECORE_TRAINPARTYMODIFIERCONFIGBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC04560)
#define RPG_GAMECORE_TRAINPARTYMODIFIERCONFIGBASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC04D30)
#define RPG_GAMECORE_TRAINPARTYMODIFIERCONFIGBASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC047B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TrainPartyModifierConfigBase_TypeDefinitionIndex = 18094;

	class TrainPartyModifierConfigBase : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERCONFIGBASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERCONFIGBASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TrainPartyModifierConfigBase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TrainPartyModifierConfigBase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRAINPARTYMODIFIERCONFIGBASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
