#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvFloatValueTickType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvFloatValueTickType_Loop; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_LOOP_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39F3D0)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_LOOP_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39F3E0)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_LOOP_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39FC20)

namespace RPG::GameCore
{
	class AdvFloatValueTickType_Loop : public ::RPG::GameCore::AdvFloatValueTickType
	{
	public:
		::RPG::GameCore::DynamicFloat* StartValue; // 0x10
		::RPG::GameCore::DynamicFloat* GoalValue; // 0x18
		::RPG::GameCore::DynamicFloat* Duration; // 0x20
		::System::Boolean Positive; // 0x28
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_LOOP_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvFloatValueTickType_Loop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvFloatValueTickType_Loop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_LOOP_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvFloatValueTickType_Loop* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvFloatValueTickType_Loop*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_LOOP_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
