#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckDarkTeamDestroy; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D48EAD0)
#define RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D48ECB0)
#define RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D48EC80)
#define RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D48EAE0)
#define RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D48EAA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckDarkTeamDestroy_TypeDefinitionIndex = 23442;

	class ByCheckDarkTeamDestroy : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean ForWaveEnd; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckDarkTeamDestroy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckDarkTeamDestroy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckDarkTeamDestroy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckDarkTeamDestroy* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckDarkTeamDestroy*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKDARKTEAMDESTROY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
