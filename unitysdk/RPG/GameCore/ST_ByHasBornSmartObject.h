#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ST_ByHasBornSmartObject; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_CTOR_OFFSET UNITYSDK_OFFSET(0x1EC8F4B0)
#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EC8F630)
#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EC8F600)
#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EC8F4C0)
#define RPG_GAMECORE_ST_BYHASBORNSMARTOBJECT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EC8F480)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ST_ByHasBornSmartObject_TypeDefinitionIndex = 20414;

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
