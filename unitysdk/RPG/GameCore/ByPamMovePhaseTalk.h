#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByPamMovePhaseTalk; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYPAMMOVEPHASETALK_CTOR_OFFSET UNITYSDK_OFFSET(0x1D500B80)
#define RPG_GAMECORE_BYPAMMOVEPHASETALK_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D500D00)
#define RPG_GAMECORE_BYPAMMOVEPHASETALK_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D500CD0)
#define RPG_GAMECORE_BYPAMMOVEPHASETALK_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D500B90)
#define RPG_GAMECORE_BYPAMMOVEPHASETALK_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D500B50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByPamMovePhaseTalk_TypeDefinitionIndex = 20011;

	class ByPamMovePhaseTalk : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByPamMovePhaseTalk* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByPamMovePhaseTalk*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYPAMMOVEPHASETALK_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
