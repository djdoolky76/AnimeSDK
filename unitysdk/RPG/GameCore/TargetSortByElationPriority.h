#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSortByElationPriority; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB42910)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB42AB0)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB42A60)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB42920)
#define RPG_GAMECORE_TARGETSORTBYELATIONPRIORITY_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB428C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TargetSortByElationPriority_TypeDefinitionIndex = 23996;

	class TargetSortByElationPriority : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::System::Boolean FilterByElationTimeTag; // 0x11
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
