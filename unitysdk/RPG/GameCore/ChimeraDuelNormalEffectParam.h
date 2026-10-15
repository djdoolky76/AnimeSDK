#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEffectParam.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class BaseChimeraDuelValueGetter; }
namespace RPG::GameCore { class ChimeraDuelNormalEffectParam; }

#define RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A5CD0)
#define RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A5CE0)
#define RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A5C80)

namespace RPG::GameCore
{
	class ChimeraDuelNormalEffectParam : public ::RPG::GameCore::BaseChimeraDuelEffectParam
	{
	public:
		::Il2CppArray<::RPG::GameCore::BaseChimeraDuelValueGetter*>* ValueGetters; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelNormalEffectParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelNormalEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelNormalEffectParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelNormalEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELNORMALEFFECTPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
