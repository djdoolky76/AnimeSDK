#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class PropFastDeliverSetSimplifiedMode; }

#define RPG_GAMECORE_PROPFASTDELIVERSETSIMPLIFIEDMODE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D94D390)
#define RPG_GAMECORE_PROPFASTDELIVERSETSIMPLIFIEDMODE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D94D3A0)
#define RPG_GAMECORE_PROPFASTDELIVERSETSIMPLIFIEDMODE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D94D350)

namespace RPG::GameCore
{
	class PropFastDeliverSetSimplifiedMode : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean IsSimplifiedMode; // 0x18
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSETSIMPLIFIEDMODE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropFastDeliverSetSimplifiedMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropFastDeliverSetSimplifiedMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSETSIMPLIFIEDMODE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::PropFastDeliverSetSimplifiedMode* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PropFastDeliverSetSimplifiedMode*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PROPFASTDELIVERSETSIMPLIFIEDMODE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
