#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HipplenHintWeightConfig; }
namespace RPG::GameCore { class HipplenRequireStatGrade; }

#define RPG_GAMECORE_HIPPLENHINTWEIGHTCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D76C880)
#define RPG_GAMECORE_HIPPLENHINTWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D76C6F0)

namespace RPG::GameCore
{
	class HipplenHintWeightConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::HipplenRequireStatGrade* RequireStatGrade; // 0x10
		::System::UInt32 WorstAnswerWeight; // 0x18
		::System::UInt32 ApproximateAnswerWeight; // 0x1C
		::System::UInt32 CorrectAnswerWeight; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENHINTWEIGHTCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HipplenHintWeightConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HipplenHintWeightConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HIPPLENHINTWEIGHTCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
