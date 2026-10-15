#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class FloatCurveWithMultiplier; }

#define RPG_GAMECORE_FLOATCURVEWITHMULTIPLIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E4AB0)
#define RPG_GAMECORE_FLOATCURVEWITHMULTIPLIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D7CC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloatCurveWithMultiplier_TypeDefinitionIndex = 16650;

	class FloatCurveWithMultiplier : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FloatCurve* Curve; // 0x10
		::RPG::MVector2 CurveMultiplier; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEWITHMULTIPLIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloatCurveWithMultiplier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloatCurveWithMultiplier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEWITHMULTIPLIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
