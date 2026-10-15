#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByOnHit; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYONHIT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA798F0)
#define RPG_GAMECORE_ST_BYONHIT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA79A70)
#define RPG_GAMECORE_ST_BYONHIT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA79A40)
#define RPG_GAMECORE_ST_BYONHIT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA79900)
#define RPG_GAMECORE_ST_BYONHIT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA798C0)

namespace RPG::GameCore
{
	class ST_ByOnHit : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByOnHit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByOnHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByOnHit* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByOnHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByOnHit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByOnHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByOnHit* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByOnHit*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYONHIT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
