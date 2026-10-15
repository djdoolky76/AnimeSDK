#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByHasBornSmartObject; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA77C20)
#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA77C30)
#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA77BF0)
#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA77AB0)
#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA77A80)

namespace RPG::GameCore
{
	class ST_ByHasBornSmartObject : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByHasBornSmartObject* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByHasBornSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByHasBornSmartObject* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByHasBornSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasBornSmartObject* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasBornSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByHasBornSmartObject* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByHasBornSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
