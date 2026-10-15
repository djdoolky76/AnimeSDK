#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByFoundSmartObject; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DA768F0)
#define RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DA76A70)
#define RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DA76A40)
#define RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DA76900)
#define RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DA768C0)

namespace RPG::GameCore
{
	class ST_ByFoundSmartObject : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByFoundSmartObject* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByFoundSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ST_ByFoundSmartObject* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ST_ByFoundSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByFoundSmartObject* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByFoundSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ST_ByFoundSmartObject* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ST_ByFoundSmartObject*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ST_BYFOUNDSMARTOBJECT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
