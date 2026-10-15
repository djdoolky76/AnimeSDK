#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FloatCurve; }
namespace RPG::GameCore { class FloatCurveWithYMultiplier; }

#define RPG_GAMECORE_FLOATCURVEWITHYMULTIPLIER_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E4AC0)
#define RPG_GAMECORE_FLOATCURVEWITHYMULTIPLIER_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D7BE0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FloatCurveWithYMultiplier_TypeDefinitionIndex = 16649;

	class FloatCurveWithYMultiplier : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FloatCurve* Curve; // 0x10
		::System::Single CurveMultiplier; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEWITHYMULTIPLIER_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FloatCurveWithYMultiplier* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FloatCurveWithYMultiplier*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLOATCURVEWITHYMULTIPLIER_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
