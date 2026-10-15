#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class DynamicFloat; }
namespace RPG::GameCore { class DynamicString; }
namespace RPG::GameCore { class PhotoGraphUpdateTwoPointFourParam; }

#define RPG_GAMECORE_PHOTOGRAPHUPDATETWOPOINTFOURPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1D9141F0)
#define RPG_GAMECORE_PHOTOGRAPHUPDATETWOPOINTFOURPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D913F60)

namespace RPG::GameCore
{
	class PhotoGraphUpdateTwoPointFourParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::DynamicFloat* TimeScale; // 0x10
		::RPG::GameCore::DynamicString* AimContainerName; // 0x18
		::RPG::GameCore::DynamicFloat* RectRangeX; // 0x20
		::RPG::GameCore::DynamicFloat* RectRangeY; // 0x28
		::RPG::GameCore::DynamicFloat* Damping; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHUPDATETWOPOINTFOURPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::PhotoGraphUpdateTwoPointFourParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::PhotoGraphUpdateTwoPointFourParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PHOTOGRAPHUPDATETWOPOINTFOURPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
