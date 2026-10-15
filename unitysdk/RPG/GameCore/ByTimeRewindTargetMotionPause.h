#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PredicateConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class ByTimeRewindTargetMotionPause; }
namespace RPG::GameCore { class TargetEvaluator; }
namespace SimpleJSON { class JSONNode; }

#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D541290)
#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_EOJLPDGNHEK_OFFSET UNITYSDK_OFFSET(0x1D541450)
#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_LJACLBNEEEB_OFFSET UNITYSDK_OFFSET(0x1D541420)
#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D5412A0)
#define RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D541260)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ByTimeRewindTargetMotionPause_TypeDefinitionIndex = 20673;

	class ByTimeRewindTargetMotionPause : public ::RPG::GameCore::PredicateConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* Target; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

		static ::System::Void LJACLBNEEEB(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_LJACLBNEEEB_OFFSET))(a1, a2);
		}

		static ::System::Void EOJLPDGNHEK(::SimpleJSON::JSONNode* a1, ::RPG::GameCore::ByTimeRewindTargetMotionPause* a2)
		{
			return ((::System::Void(*)(::SimpleJSON::JSONNode*, ::RPG::GameCore::ByTimeRewindTargetMotionPause*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_BYTIMEREWINDTARGETMOTIONPAUSE_EOJLPDGNHEK_OFFSET))(a1, a2);
		}

	};
}
