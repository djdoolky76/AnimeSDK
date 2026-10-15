#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByInTimelinePerform; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYINTIMELINEPERFORM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D503910)
#define RPG_GAMECORE_BYINTIMELINEPERFORM_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D503B00)
#define RPG_GAMECORE_BYINTIMELINEPERFORM_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D503AC0)
#define RPG_GAMECORE_BYINTIMELINEPERFORM_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D503920)
#define RPG_GAMECORE_BYINTIMELINEPERFORM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D5038D0)

namespace RPG::GameCore
{
	class ByInTimelinePerform : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::System::Boolean OnlyCloseupShot; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByInTimelinePerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByInTimelinePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByInTimelinePerform* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByInTimelinePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTimelinePerform* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTimelinePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByInTimelinePerform* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByInTimelinePerform*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYINTIMELINEPERFORM_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
