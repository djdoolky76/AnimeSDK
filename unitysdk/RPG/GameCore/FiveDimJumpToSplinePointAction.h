#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimBaseEventAction.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimJumpToSplinePointAction; }
namespace System { class String; }

#define RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6C5390)
#define RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6C53A0)
#define RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6C52E0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimJumpToSplinePointAction_TypeDefinitionIndex = 18755;

	class FiveDimJumpToSplinePointAction : public ::RPG::GameCore::FiveDimBaseEventAction
	{
	public:
		::System::String* PointAlias; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimJumpToSplinePointAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimJumpToSplinePointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimJumpToSplinePointAction* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimJumpToSplinePointAction*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMJUMPTOSPLINEPOINTACTION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
