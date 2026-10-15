#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEffectParam.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEntityValueGetterBase; }
namespace RPG::GameCore { class ChimeraDuelWrtTargetEffectParam; }

#define RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57ED50)
#define RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57ED60)
#define RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57ED00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelWrtTargetEffectParam_TypeDefinitionIndex = 16015;

	class ChimeraDuelWrtTargetEffectParam : public ::RPG::GameCore::BaseChimeraDuelEffectParam
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelEntityValueGetterBase*>* ValueGetters; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelWrtTargetEffectParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelWrtTargetEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelWrtTargetEffectParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelWrtTargetEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELWRTTARGETEFFECTPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
