#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class AdvStartIsometric; }
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }

#define RPG_GAMECORE_ADVSTARTISOMETRIC_CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B2D40)
#define RPG_GAMECORE_ADVSTARTISOMETRIC_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D3B2D50)
#define RPG_GAMECORE_ADVSTARTISOMETRIC_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D3B2D10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdvStartIsometric_TypeDefinitionIndex = 22206;

	class AdvStartIsometric : public ::RPG::GameCore::TaskConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* ZoomOffsetUp; // 0x18
		::RPG::GameCore::DynamicFloat* ZoomOffsetDown; // 0x20
		::RPG::GameCore::DynamicFloat* ZoomOffsetLeft; // 0x28
		::RPG::GameCore::DynamicFloat* ZoomOffsetRight; // 0x30
		::RPG::GameCore::DynamicString* OriginAnchorKey; // 0x38
		::RPG::GameCore::DynamicFloat* MaxCameraSize; // 0x40
		::RPG::GameCore::DynamicString* FollowAnchorKey; // 0x48
		::RPG::GameCore::DynamicString* SwipeAnchorKey; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTARTISOMETRIC_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvStartIsometric* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvStartIsometric*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTARTISOMETRIC_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::AdvStartIsometric* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::AdvStartIsometric*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVSTARTISOMETRIC_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
