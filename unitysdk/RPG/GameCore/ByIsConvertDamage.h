#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsConvertDamage; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISCONVERTDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D50DB10)
#define RPG_GAMECORE_BYISCONVERTDAMAGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D50DC90)
#define RPG_GAMECORE_BYISCONVERTDAMAGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D50DC60)
#define RPG_GAMECORE_BYISCONVERTDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D50DB20)
#define RPG_GAMECORE_BYISCONVERTDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D50DAE0)

namespace RPG::GameCore
{
	class ByIsConvertDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONVERTDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsConvertDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsConvertDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONVERTDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsConvertDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsConvertDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONVERTDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsConvertDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsConvertDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONVERTDAMAGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsConvertDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsConvertDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISCONVERTDAMAGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
