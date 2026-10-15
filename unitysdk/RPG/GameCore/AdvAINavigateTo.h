#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CharacterMotionFlag.h"
#include "unitysdk/RPG/GameCore/NavigateTargetMode.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvAINavigateTo; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADVAINAVIGATETO_CTOR_OFFSET UNITYSDK_OFFSET(0x1D38D760)
#define RPG_GAMECORE_ADVAINAVIGATETO_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D38D770)
#define RPG_GAMECORE_ADVAINAVIGATETO_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D38D720)

namespace RPG::GameCore
{
	class AdvAINavigateTo : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::NavigateTargetMode Mode; // 0x20
		::RPG::GameCore::CharacterMotionFlag MotionFlag; // 0x24
		::RPG::GameCore::TargetEvaluator* NavigateTarget; // 0x28
		::RPG::MVector3 NavigatePosition; // 0x30
		::System::Byte _padding0[0x4];
		::RPG::GameCore::DynamicString* LevelAreaKey; // 0x40
		::System::Boolean WaitFinish; // 0x48
		::System::Boolean TurnInPlaceInStart; // 0x49
		::System::Boolean TurnInPlaceInEnd; // 0x4A
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVAINAVIGATETO_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvAINavigateTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvAINavigateTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVAINAVIGATETO_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvAINavigateTo* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvAINavigateTo*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVAINAVIGATETO_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
