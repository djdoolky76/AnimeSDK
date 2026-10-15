#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsAllPuzzleStateMatchedClientOnly; }
namespace RPG::GameCore { class PropDestructItem; }
namespace RPG::GameCore { class PropStateItem; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4D9A10)
#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4D9C70)
#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4D9C40)
#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4D9A20)
#define RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4D99E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsAllPuzzleStateMatchedClientOnly_TypeDefinitionIndex = 21205;

	class ByIsAllPuzzleStateMatchedClientOnly : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::Il2CppArray<::RPG::GameCore::PropStateItem*>* PuzzleStates; // 0x20
		::Il2CppArray<::RPG::GameCore::PropDestructItem*>* PuzzleDestructedStates; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsAllPuzzleStateMatchedClientOnly*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISALLPUZZLESTATEMATCHEDCLIENTONLY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
