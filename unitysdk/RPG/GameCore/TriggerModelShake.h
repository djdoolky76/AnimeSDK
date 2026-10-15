#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class TargetEvaluator; }
namespace RPG::GameCore { class TriggerModelShake; }
namespace System { class String; }

#define RPG_GAMECORE_TRIGGERMODELSHAKE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC554B0)
#define RPG_GAMECORE_TRIGGERMODELSHAKE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC55500)
#define RPG_GAMECORE_TRIGGERMODELSHAKE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC55440)

namespace RPG::GameCore
{
	class TriggerModelShake : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::System::Single Amplitude; // 0x20
		::System::Single Duration; // 0x24
		::System::String* CurveName; // 0x28
		::RPG::MVector3 Direction; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODELSHAKE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerModelShake* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerModelShake*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODELSHAKE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::TriggerModelShake* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::TriggerModelShake*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TRIGGERMODELSHAKE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
