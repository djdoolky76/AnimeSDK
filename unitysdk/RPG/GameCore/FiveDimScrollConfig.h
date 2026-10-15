#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimScrollConfig; }
namespace RPG::GameCore { class FloatCurveWithMultiplier; }
namespace RPG::GameCore { class FloatCurveWithYMultiplier; }

#define RPG_GAMECORE_FIVEDIMSCROLLCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6D7BD0)
#define RPG_GAMECORE_FIVEDIMSCROLLCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D7A80)

namespace RPG::GameCore
{
	class FiveDimScrollConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::FloatCurveWithYMultiplier* SoftScrollLeft; // 0x10
		::RPG::GameCore::FloatCurveWithYMultiplier* SoftScrollRight; // 0x18
		::RPG::GameCore::FloatCurveWithYMultiplier* SoftScrollUp; // 0x20
		::RPG::GameCore::FloatCurveWithYMultiplier* SoftScrollDown; // 0x28
		::RPG::GameCore::FloatCurveWithMultiplier* EdgeDampingLeft; // 0x30
		::RPG::GameCore::FloatCurveWithMultiplier* EdgeDampingRight; // 0x38
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimScrollConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimScrollConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSCROLLCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
