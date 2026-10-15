#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByHasTarget; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYHASTARGET_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA4AB90)
#define RPG_GAMECORE_ST_BYHASTARGET_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA4AD10)
#define RPG_GAMECORE_ST_BYHASTARGET_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA4ACE0)
#define RPG_GAMECORE_ST_BYHASTARGET_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA4ABA0)
#define RPG_GAMECORE_ST_BYHASTARGET_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA4AB60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasTarget_TypeDefinitionIndex = 20068;

	class ST_ByHasTarget : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByHasTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByHasTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByHasTarget* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByHasTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasTarget* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasTarget*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASTARGET_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
