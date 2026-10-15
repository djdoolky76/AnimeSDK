#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AbilityPropertyRatio.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSortByPropertyRatio; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB45360)
#define RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB45530)
#define RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB45500)
#define RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB45370)
#define RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB45330)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByPropertyRatio_TypeDefinitionIndex = 23995;

	class TargetSortByPropertyRatio : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::RPG::GameCore::AbilityPropertyRatio PropertyRatioType; // 0x10
		::System::Boolean HighestFirst; // 0x14
		::System::Boolean AliveOnly; // 0x15
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByPropertyRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByPropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByPropertyRatio* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByPropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPropertyRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByPropertyRatio* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByPropertyRatio*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYPROPERTYRATIO_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
