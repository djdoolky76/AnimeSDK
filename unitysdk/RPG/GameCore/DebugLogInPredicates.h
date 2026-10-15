#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/DebugLogLevel.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DebugLogInPredicates; }
namespace SimpleJSON { class JSONNode; }
namespace System { class String; }

#define RPG_GAMECORE_DEBUGLOGINPREDICATES_CTOR_OFFSET UNITYSDK_OFFSET(0x1D5F6450)
#define RPG_GAMECORE_DEBUGLOGINPREDICATES_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D5F66D0)
#define RPG_GAMECORE_DEBUGLOGINPREDICATES_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D5F6690)
#define RPG_GAMECORE_DEBUGLOGINPREDICATES_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5F6460)
#define RPG_GAMECORE_DEBUGLOGINPREDICATES_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5F6410)

namespace RPG::GameCore
{
	class DebugLogInPredicates : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean PredicateValue; // 0x20
		::System::Byte _padding0[0x3];
		::RPG::GameCore::DebugLogLevel Level; // 0x24
		::System::String* Message; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOGINPREDICATES_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::DebugLogInPredicates* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DebugLogInPredicates*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOGINPREDICATES_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::DebugLogInPredicates* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::DebugLogInPredicates*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOGINPREDICATES_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DebugLogInPredicates* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DebugLogInPredicates*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOGINPREDICATES_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::DebugLogInPredicates* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::DebugLogInPredicates*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DEBUGLOGINPREDICATES_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
