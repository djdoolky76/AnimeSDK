#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
#include "unitysdk/RPG/GameCore/StringHash.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByContainCustomString; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCONTAINCUSTOMSTRING_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E6670)
#define RPG_GAMECORE_BYCONTAINCUSTOMSTRING_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4E6900)
#define RPG_GAMECORE_BYCONTAINCUSTOMSTRING_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4E68A0)
#define RPG_GAMECORE_BYCONTAINCUSTOMSTRING_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4E66B0)
#define RPG_GAMECORE_BYCONTAINCUSTOMSTRING_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4E6610)

namespace RPG::GameCore
{
	class ByContainCustomString : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x20
		::RPG::GameCore::StringHash Key; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINCUSTOMSTRING_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByContainCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByContainCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINCUSTOMSTRING_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByContainCustomString* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByContainCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINCUSTOMSTRING_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINCUSTOMSTRING_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByContainCustomString* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByContainCustomString*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCONTAINCUSTOMSTRING_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
