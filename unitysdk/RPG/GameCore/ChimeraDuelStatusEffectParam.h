#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEffectParam.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelStatusConfig; }
namespace RPG::GameCore { class ChimeraDuelStatusEffectParam; }

#define RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5AAB50)
#define RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5AAB60)
#define RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5AAB00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelStatusEffectParam_TypeDefinitionIndex = 16011;

	class ChimeraDuelStatusEffectParam : public ::RPG::GameCore::BaseChimeraDuelEffectParam
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelStatusConfig*>* StatusConfig; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelStatusEffectParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelStatusEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelStatusEffectParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelStatusEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELSTATUSEFFECTPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
