#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetEvaluator.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvGroupFetchTargetByStringList; }
namespace RPG::GameCore { class DynamicStringList; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_CTOR_OFFSET UNITYSDK_OFFSET(0x1D373C30)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D373D10)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D373CC0)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D373C40)
#define RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D373B70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvGroupFetchTargetByStringList_TypeDefinitionIndex = 21158;

	class AdvGroupFetchTargetByStringList : public ::RPG::GameCore::TargetEvaluator
	{
	public:
		::RPG::GameCore::DynamicStringList* Targets; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::AdvGroupFetchTargetByStringList* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::AdvGroupFetchTargetByStringList*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVGROUPFETCHTARGETBYSTRINGLIST_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
