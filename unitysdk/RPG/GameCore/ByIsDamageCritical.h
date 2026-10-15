#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsDamageCritical; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISDAMAGECRITICAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4E1690)
#define RPG_GAMECORE_BYISDAMAGECRITICAL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4E1810)
#define RPG_GAMECORE_BYISDAMAGECRITICAL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4E17E0)
#define RPG_GAMECORE_BYISDAMAGECRITICAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4E16A0)
#define RPG_GAMECORE_BYISDAMAGECRITICAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4E1660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsDamageCritical_TypeDefinitionIndex = 23491;

	class ByIsDamageCritical : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsDamageCritical* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsDamageCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsDamageCritical* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsDamageCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageCritical* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageCritical* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGECRITICAL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
