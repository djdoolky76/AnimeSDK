#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckColonyTrace; }
namespace RPG::GameCore { class DynamicFloat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKCOLONYTRACE_CTOR_OFFSET UNITYSDK_OFFSET(0x1E69D880)
#define RPG_GAMECORE_BYCHECKCOLONYTRACE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E69DA60)
#define RPG_GAMECORE_BYCHECKCOLONYTRACE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E69DA30)
#define RPG_GAMECORE_BYCHECKCOLONYTRACE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E69D890)
#define RPG_GAMECORE_BYCHECKCOLONYTRACE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E69D850)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckColonyTrace_TypeDefinitionIndex = 22259;

	class ByCheckColonyTrace : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ColonyID; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckColonyTrace* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckColonyTrace*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckColonyTrace* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckColonyTrace*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyTrace* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyTrace*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckColonyTrace* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckColonyTrace*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKCOLONYTRACE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
