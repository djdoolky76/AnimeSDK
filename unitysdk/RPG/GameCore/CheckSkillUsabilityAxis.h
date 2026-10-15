#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckSkillUsabilityAxis; }
namespace System { class String; }

#define RPG_GAMECORE_CHECKSKILLUSABILITYAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D57CC80)
#define RPG_GAMECORE_CHECKSKILLUSABILITYAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D57CC90)
#define RPG_GAMECORE_CHECKSKILLUSABILITYAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D57CC40)

namespace RPG::GameCore
{
	class CheckSkillUsabilityAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::System::String* SkillName; // 0x10
		::System::Int32 InitialCD; // 0x18
		::System::Int32 CD; // 0x1C
		::RPG::GameCore::FixPoint CheckScore; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLUSABILITYAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckSkillUsabilityAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckSkillUsabilityAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLUSABILITYAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckSkillUsabilityAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckSkillUsabilityAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKSKILLUSABILITYAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
