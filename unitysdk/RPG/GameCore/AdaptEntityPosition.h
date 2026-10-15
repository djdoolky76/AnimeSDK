#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdaptEntityPosition; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class TargetEvaluator; }

#define RPG_GAMECORE_ADAPTENTITYPOSITION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D384D20)
#define RPG_GAMECORE_ADAPTENTITYPOSITION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D384D60)
#define RPG_GAMECORE_ADAPTENTITYPOSITION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D384CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdaptEntityPosition_TypeDefinitionIndex = 20168;

	class AdaptEntityPosition : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::TargetEvaluator* TargetType; // 0x18
		::RPG::GameCore::TargetEvaluator* PosTargetType; // 0x20
		::RPG::GameCore::DynamicFloat* OffsetX; // 0x28
		::RPG::GameCore::DynamicFloat* OffsetY; // 0x30
		::RPG::GameCore::DynamicFloat* OffsetZ; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADAPTENTITYPOSITION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdaptEntityPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdaptEntityPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADAPTENTITYPOSITION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdaptEntityPosition* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdaptEntityPosition*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADAPTENTITYPOSITION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
