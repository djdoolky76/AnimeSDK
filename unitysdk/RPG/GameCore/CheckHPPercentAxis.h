#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/CompareType.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckHPPercentAxis; }

#define RPG_GAMECORE_CHECKHPPERCENTAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54DF90)
#define RPG_GAMECORE_CHECKHPPERCENTAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54DFA0)
#define RPG_GAMECORE_CHECKHPPERCENTAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54DF60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckHPPercentAxis_TypeDefinitionIndex = 15503;

	class CheckHPPercentAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::CompareType EquationType; // 0x10
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FixPoint TargetPercent; // 0x18
		::RPG::GameCore::FixPoint CheckScore; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKHPPERCENTAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckHPPercentAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckHPPercentAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKHPPERCENTAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckHPPercentAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckHPPercentAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKHPPERCENTAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
