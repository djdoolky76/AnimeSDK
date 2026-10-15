#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEffectParam.h"
#include "unitysdk/RPG/GameCore/ChimeraDuelEventType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ChimeraDuelEventEffectParam; }

#define RPG_GAMECORE_CHIMERADUELEVENTEFFECTPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5A0800)
#define RPG_GAMECORE_CHIMERADUELEVENTEFFECTPARAM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5A0810)
#define RPG_GAMECORE_CHIMERADUELEVENTEFFECTPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5A07B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelEventEffectParam_TypeDefinitionIndex = 16016;

	class ChimeraDuelEventEffectParam : public ::RPG::GameCore::BaseChimeraDuelEffectParam
	{
	public:
		::RPG::GameCore::ChimeraDuelEventType EventType; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEVENTEFFECTPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEventEffectParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEventEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEVENTEFFECTPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ChimeraDuelEventEffectParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ChimeraDuelEventEffectParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELEVENTEFFECTPARAM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
