#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSortByFormation; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYFORMATION_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB42E90)
#define RPG_GAMECORE_TARGETSORTBYFORMATION_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB42F90)
#define RPG_GAMECORE_TARGETSORTBYFORMATION_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB42F60)
#define RPG_GAMECORE_TARGETSORTBYFORMATION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB42EA0)
#define RPG_GAMECORE_TARGETSORTBYFORMATION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB42DC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByFormation_TypeDefinitionIndex = 23983;

	class TargetSortByFormation : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYFORMATION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYFORMATION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByFormation* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYFORMATION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYFORMATION_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByFormation* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByFormation*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYFORMATION_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
