#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/EraStateType.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class InitEraFlipperRegion; }

#define RPG_GAMECORE_INITERAFLIPPERREGION_CTOR_OFFSET UNITYSDK_OFFSET(0x1D75A2A0)
#define RPG_GAMECORE_INITERAFLIPPERREGION_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D75A2B0)
#define RPG_GAMECORE_INITERAFLIPPERREGION_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D75A270)

namespace RPG::GameCore
{
	inline static constexpr unsigned int InitEraFlipperRegion_TypeDefinitionIndex = 22329;

	class InitEraFlipperRegion : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::UInt32 RegionID; // 0x18
		::RPG::GameCore::EraStateType EaraState; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITERAFLIPPERREGION_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitEraFlipperRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitEraFlipperRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITERAFLIPPERREGION_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::InitEraFlipperRegion* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::InitEraFlipperRegion*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_INITERAFLIPPERREGION_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
