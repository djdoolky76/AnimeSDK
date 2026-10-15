#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByCompareCurrentModifierStatusType; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D4A45B0)
#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D4A4770)
#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D4A4740)
#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D4A45C0)
#define RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D4A4580)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByCompareCurrentModifierStatusType_TypeDefinitionIndex = 23525;

	class ByCompareCurrentModifierStatusType : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::EnumStatusType TargetStatusType; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByCompareCurrentModifierStatusType* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByCompareCurrentModifierStatusType*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYCOMPARECURRENTMODIFIERSTATUSTYPE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
