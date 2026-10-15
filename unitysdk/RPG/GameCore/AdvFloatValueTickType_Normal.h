#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AdvFloatValueTickType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvFloatValueTickType_Normal; }
namespace RPG::GameCore { class DynamicFloat; }

#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_NORMAL_CTOR_OFFSET UNITYSDK_OFFSET(0x1D39F600)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_NORMAL_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D39F610)
#define RPG_GAMECORE_ADVFLOATVALUETICKTYPE_NORMAL_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D39FC50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvFloatValueTickType_Normal_TypeDefinitionIndex = 21020;

	class AdvFloatValueTickType_Normal : public ::RPG::GameCore::AdvFloatValueTickType
	{
	public:
		::RPG::GameCore::DynamicFloat* StartValue; // 0x10
		::RPG::GameCore::DynamicFloat* GoalValue; // 0x18
		::RPG::GameCore::DynamicFloat* Duration; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_NORMAL_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvFloatValueTickType_Normal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvFloatValueTickType_Normal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_NORMAL_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvFloatValueTickType_Normal* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvFloatValueTickType_Normal*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVFLOATVALUETICKTYPE_NORMAL_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
