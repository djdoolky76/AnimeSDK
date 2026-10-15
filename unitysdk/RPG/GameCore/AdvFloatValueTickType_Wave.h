#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvFloatValueTickType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvFloatValueTickType_Wave; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_WAVE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D371F20)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_WAVE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D371F30)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_WAVE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3721E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvFloatValueTickType_Wave_TypeDefinitionIndex = 21023;

	class AdvFloatValueTickType_Wave : public ::RPG::GameCore::AdvFloatValueTickType
	{
	public:
		::RPG::GameCore::DynamicFloat* StartValue; // 0x10
		::RPG::GameCore::DynamicFloat* GoalValue; // 0x18
		::RPG::GameCore::DynamicFloat* InitSpeed; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_WAVE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvFloatValueTickType_Wave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvFloatValueTickType_Wave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_WAVE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvFloatValueTickType_Wave* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvFloatValueTickType_Wave*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_WAVE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
