#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EnumStatusType.h"
#include "unitysdk/RPG/GameCore/TargetSeqOperation.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetSortByModifierStatusCount; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_CTOR_OFFSET UNITYSDK_OFFSET(0x1DB711F0)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1DB71350)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1DB71320)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DB71200)
#define RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DB711C0)

namespace RPG::GameCore
{
	class TargetSortByModifierStatusCount : public ::RPG::GameCore::TargetSeqOperation
	{
	public:
		::System::Boolean HighestFirst; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::GameCore::EnumStatusType BuffStatus; // 0x14
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByModifierStatusCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByModifierStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TargetSortByModifierStatusCount* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TargetSortByModifierStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierStatusCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::TargetSortByModifierStatusCount* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::TargetSortByModifierStatusCount*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TARGETSORTBYMODIFIERSTATUSCOUNT_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
