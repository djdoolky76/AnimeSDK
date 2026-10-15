#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class EraFlipperConfig; }
namespace RPG::GameCore { class EraRegion; }

#define RPG_GAMECORE_ERAFLIPPERCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6812C0)
#define RPG_GAMECORE_ERAFLIPPERCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D681100)

namespace RPG::GameCore
{
	class EraFlipperConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::EraStateType FloorDefaultEraState; // 0x10
		::System::Byte _padding0[0x4];
		::Il2CppArray<::RPG::GameCore::EraRegion*>* EraRegions; // 0x18
		::System::Boolean FrozeDefaultState; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ERAFLIPPERCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::EraFlipperConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::EraFlipperConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ERAFLIPPERCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
