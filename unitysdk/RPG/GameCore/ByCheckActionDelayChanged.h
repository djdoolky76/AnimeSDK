#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckActionDelayChanged; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_CTOR_OFFSET UNITYSDK_OFFSET(0x1D48A910)
#define RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D48AAD0)
#define RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D48AAA0)
#define RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D48A920)
#define RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D48A8E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckActionDelayChanged_TypeDefinitionIndex = 23040;

	class ByCheckActionDelayChanged : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckActionDelayChanged* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckActionDelayChanged*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckActionDelayChanged* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckActionDelayChanged*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayChanged* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayChanged*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckActionDelayChanged* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckActionDelayChanged*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKACTIONDELAYCHANGED_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
