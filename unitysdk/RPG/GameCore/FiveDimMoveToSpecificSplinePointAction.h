#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMoveToSpecificSplinePointAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6CD830)
#define RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6CD840)
#define RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6CD780)

namespace RPG::GameCore
{
	class FiveDimMoveToSpecificSplinePointAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* PointName; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMoveToSpecificSplinePointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMOVETOSPECIFICSPLINEPOINTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
