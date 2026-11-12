#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSortByElationPriority; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1EE1F790)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1EE1F990)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1EE1F940)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1EE1F7A0)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1EE1F740)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByElationPriority_TypeDefinitionIndex = 24454;

	class TargetSortByElationPriority : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::System::Boolean FilterByElationTimeTag; // 0x11
		::System::Boolean MapSpecialPriority; // 0x12
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByElationPriority* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByElationPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByElationPriority* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByElationPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByElationPriority* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByElationPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByElationPriority* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByElationPriority*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
