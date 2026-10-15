#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AICompareStrategy.h"
#include "unitysdk/RPG/GameCore/AISelector.h"
#include "unitysdk/RPG/GameCore/AbilityProperty.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AIPropertySelector; }

#define RPG_GAMECORE_AIPROPERTYSELECTOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D33A8A0)
#define RPG_GAMECORE_AIPROPERTYSELECTOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D33A8C0)
#define RPG_GAMECORE_AIPROPERTYSELECTOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D33A850)

namespace RPG::GameCore
{
	class AIPropertySelector : public ::RPG::GameCore::AISelector
	{
	public:
		::RPG::GameCore::AICompareStrategy PropertyStrategy; // 0x10
		::RPG::GameCore::AbilityProperty Property; // 0x14
		::RPG::GameCore::CompareType CompareType; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint CompareValue; // 0x20
		::RPG::GameCore::FixPoint CompareRatio; // 0x28
		::System::Boolean InverseResultFlag; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIPROPERTYSELECTOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIPropertySelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIPropertySelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIPROPERTYSELECTOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AIPropertySelector* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AIPropertySelector*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AIPROPERTYSELECTOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
