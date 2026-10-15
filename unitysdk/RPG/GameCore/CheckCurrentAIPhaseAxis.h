#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckCurrentAIPhaseAxis; }
namespace System { class String; }

#define RPG_GAMECORE_CHECKCURRENTAIPHASEAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57B420)
#define RPG_GAMECORE_CHECKCURRENTAIPHASEAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57B430)
#define RPG_GAMECORE_CHECKCURRENTAIPHASEAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57B3F0)

namespace RPG::GameCore
{
	class CheckCurrentAIPhaseAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::System::String* CurrentPhaseRef; // 0x10
		::System::String* TargetPhaseName; // 0x18
		::RPG::GameCore::FixPoint CheckScore; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKCURRENTAIPHASEAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckCurrentAIPhaseAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckCurrentAIPhaseAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKCURRENTAIPHASEAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckCurrentAIPhaseAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckCurrentAIPhaseAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKCURRENTAIPHASEAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
