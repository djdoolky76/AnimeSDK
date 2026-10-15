#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FlipEraRegion; }

#define RPG_GAMECORE_FLIPERAREGION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E3DC0)
#define RPG_GAMECORE_FLIPERAREGION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E3DD0)
#define RPG_GAMECORE_FLIPERAREGION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E3D00)

namespace RPG::GameCore
{
	class FlipEraRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLIPERAREGION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FlipEraRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FlipEraRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLIPERAREGION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FlipEraRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FlipEraRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FLIPERAREGION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
