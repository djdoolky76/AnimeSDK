#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByIsDamageLuckCritical; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E204300)
#define RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1E204480)
#define RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1E204450)
#define RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1E204310)
#define RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1E2042D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByIsDamageLuckCritical_TypeDefinitionIndex = 23941;

	class ByIsDamageLuckCritical : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsDamageLuckCritical* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsDamageLuckCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByIsDamageLuckCritical* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByIsDamageLuckCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageLuckCritical* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageLuckCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByIsDamageLuckCritical* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByIsDamageLuckCritical*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYISDAMAGELUCKCRITICAL_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
