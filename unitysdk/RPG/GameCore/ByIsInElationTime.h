#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsInElationTime; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINELATIONTIME_CTOR_OFFSET UNITYSDK_OFFSET(0x1D518DD0)
#define RPG_GAMECORE_BYISINELATIONTIME_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D518F50)
#define RPG_GAMECORE_BYISINELATIONTIME_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D518F20)
#define RPG_GAMECORE_BYISINELATIONTIME_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D518DE0)
#define RPG_GAMECORE_BYISINELATIONTIME_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D518DA0)

namespace RPG::GameCore
{
	class ByIsInElationTime : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInElationTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsInElationTime* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsInElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInElationTime* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsInElationTime* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsInElationTime*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINELATIONTIME_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
