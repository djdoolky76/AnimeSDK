#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsRogueTournCurRoomFinish; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5201F0)
#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D520370)
#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D520340)
#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D520200)
#define RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5201C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsRogueTournCurRoomFinish_TypeDefinitionIndex = 22122;

	class ByIsRogueTournCurRoomFinish : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsRogueTournCurRoomFinish* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsRogueTournCurRoomFinish*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISROGUETOURNCURROOMFINISH_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
