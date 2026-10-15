#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PropMoveToV2TargetBase.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PropMoveToV2TargetAnchor; }

#define RPG_GAMECORE_PROPMOVETOV2TARGETANCHOR_CTOR_OFFSET UNITYSDK_OFFSET(0x1D950770)
#define RPG_GAMECORE_PROPMOVETOV2TARGETANCHOR_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D950780)
#define RPG_GAMECORE_PROPMOVETOV2TARGETANCHOR_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D9506D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PropMoveToV2TargetAnchor_TypeDefinitionIndex = 17513;

	class PropMoveToV2TargetAnchor : public ::RPG::GameCore::PropMoveToV2TargetBase
	{
	public:
		::RPG::GameCore::DynamicString* DynamicAnchor; // 0x10
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2TARGETANCHOR_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropMoveToV2TargetAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropMoveToV2TargetAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2TARGETANCHOR_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropMoveToV2TargetAnchor* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropMoveToV2TargetAnchor*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPMOVETOV2TARGETANCHOR_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
