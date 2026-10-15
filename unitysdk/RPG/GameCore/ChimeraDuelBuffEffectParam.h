#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEffectParam.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelBuffConfig; }
namespace RPG::GameCore { class ChimeraDuelBuffEffectParam; }

#define RPG_GAMECORE_CHIMERADUELBUFFEFFECTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D59BD20)
#define RPG_GAMECORE_CHIMERADUELBUFFEFFECTPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D59BD30)
#define RPG_GAMECORE_CHIMERADUELBUFFEFFECTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D59BCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBuffEffectParam_TypeDefinitionIndex = 16014;

	class ChimeraDuelBuffEffectParam : public ::RPG::GameCore::BaseChimeraDuelEffectParam
	{
	public:
		::Il2CppArray<::RPG::GameCore::ChimeraDuelBuffConfig*>* Buffs; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFEFFECTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelBuffEffectParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelBuffEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFEFFECTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelBuffEffectParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelBuffEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELBUFFEFFECTPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
