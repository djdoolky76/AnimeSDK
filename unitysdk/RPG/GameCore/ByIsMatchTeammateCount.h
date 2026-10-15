#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/TeamType.h"
#include "unitysdk/RPG/GameCore/TeammateCountType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsMatchTeammateCount; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51C230)
#define RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D51C4B0)
#define RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D51C470)
#define RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51C240)
#define RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51C1F0)

namespace RPG::GameCore
{
	class ByIsMatchTeammateCount : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TeamType TeamType; // 0x20
		::RPG::GameCore::TeammateCountType CountType; // 0x24
		::System::Boolean IgnoreServant; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsMatchTeammateCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsMatchTeammateCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsMatchTeammateCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsMatchTeammateCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMatchTeammateCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMatchTeammateCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsMatchTeammateCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsMatchTeammateCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISMATCHTEAMMATECOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
