#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckMechanismBarPhase; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D491900)
#define RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D491AF0)
#define RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D491AC0)
#define RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D491910)
#define RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4918D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckMechanismBarPhase_TypeDefinitionIndex = 20527;

	class ByCheckMechanismBarPhase : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 ID; // 0x20
		::System::UInt32 Phase; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckMechanismBarPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckMechanismBarPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMechanismBarPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMechanismBarPhase* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMechanismBarPhase*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMECHANISMBARPHASE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
