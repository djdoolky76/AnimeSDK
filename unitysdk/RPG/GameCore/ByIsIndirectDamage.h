#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsIndirectDamage; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISINDIRECTDAMAGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D51B050)
#define RPG_GAMECORE_BYISINDIRECTDAMAGE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D51B1D0)
#define RPG_GAMECORE_BYISINDIRECTDAMAGE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D51B1A0)
#define RPG_GAMECORE_BYISINDIRECTDAMAGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D51B060)
#define RPG_GAMECORE_BYISINDIRECTDAMAGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D51B020)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsIndirectDamage_TypeDefinitionIndex = 23492;

	class ByIsIndirectDamage : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDIRECTDAMAGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsIndirectDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsIndirectDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDIRECTDAMAGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsIndirectDamage* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsIndirectDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDIRECTDAMAGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsIndirectDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsIndirectDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDIRECTDAMAGE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsIndirectDamage* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsIndirectDamage*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISINDIRECTDAMAGE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
