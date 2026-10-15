#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPamActionPhaseTalk; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMACTIONPHASETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4FFD40)
#define RPG_GAMECORE_BYPAMACTIONPHASETALK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4FFEC0)
#define RPG_GAMECORE_BYPAMACTIONPHASETALK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4FFE90)
#define RPG_GAMECORE_BYPAMACTIONPHASETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4FFD50)
#define RPG_GAMECORE_BYPAMACTIONPHASETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4FFD10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamActionPhaseTalk_TypeDefinitionIndex = 20012;

	class ByPamActionPhaseTalk : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMACTIONPHASETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPamActionPhaseTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMACTIONPHASETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPamActionPhaseTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMACTIONPHASETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamActionPhaseTalk* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMACTIONPHASETALK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamActionPhaseTalk* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamActionPhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMACTIONPHASETALK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
