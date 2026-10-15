#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ConsiderationAxisConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class CheckRandomChanceAxis; }

#define RPG_GAMECORE_CHECKRANDOMCHANCEAXIS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D54EB10)
#define RPG_GAMECORE_CHECKRANDOMCHANCEAXIS_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D54EB20)
#define RPG_GAMECORE_CHECKRANDOMCHANCEAXIS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D54EAE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int CheckRandomChanceAxis_TypeDefinitionIndex = 15510;

	class CheckRandomChanceAxis : public ::RPG::GameCore::ConsiderationAxisConfig
	{
	public:
		::RPG::GameCore::FixPoint Chance; // 0x10
		::RPG::GameCore::FixPoint SuccessScore; // 0x18
		::RPG::GameCore::FixPoint FailScore; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKRANDOMCHANCEAXIS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckRandomChanceAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckRandomChanceAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKRANDOMCHANCEAXIS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::CheckRandomChanceAxis* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::CheckRandomChanceAxis*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHECKRANDOMCHANCEAXIS_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
