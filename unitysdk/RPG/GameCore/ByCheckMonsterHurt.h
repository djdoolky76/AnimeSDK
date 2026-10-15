#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class BFCEADNKCKI;
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCheckMonsterHurt; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCHECKMONSTERHURT_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4678D0)
#define RPG_GAMECORE_BYCHECKMONSTERHURT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D467AD0)
#define RPG_GAMECORE_BYCHECKMONSTERHURT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D467AA0)
#define RPG_GAMECORE_BYCHECKMONSTERHURT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4678E0)
#define RPG_GAMECORE_BYCHECKMONSTERHURT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4678A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCheckMonsterHurt_TypeDefinitionIndex = 23438;

	class ByCheckMonsterHurt : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::UInt32 MonsterID; // 0x20
		::System::Single HpPercent; // 0x24
		::BFCEADNKCKI* OverrideConfig; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERHURT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckMonsterHurt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckMonsterHurt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERHURT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCheckMonsterHurt* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCheckMonsterHurt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERHURT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterHurt* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterHurt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERHURT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCheckMonsterHurt* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCheckMonsterHurt*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCHECKMONSTERHURT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
