#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByEnterCombat; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYENTERCOMBAT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA48210)
#define RPG_GAMECORE_ST_BYENTERCOMBAT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA48390)
#define RPG_GAMECORE_ST_BYENTERCOMBAT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA48360)
#define RPG_GAMECORE_ST_BYENTERCOMBAT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA48220)
#define RPG_GAMECORE_ST_BYENTERCOMBAT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA481E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByEnterCombat_TypeDefinitionIndex = 20092;

	class ST_ByEnterCombat : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYENTERCOMBAT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByEnterCombat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByEnterCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYENTERCOMBAT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByEnterCombat* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByEnterCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYENTERCOMBAT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByEnterCombat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByEnterCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYENTERCOMBAT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByEnterCombat* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByEnterCombat*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYENTERCOMBAT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
