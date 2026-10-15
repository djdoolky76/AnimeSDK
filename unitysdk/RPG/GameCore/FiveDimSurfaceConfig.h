#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LittleGameComponentConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimSurfaceConfig; }

#define RPG_GAMECORE_FIVEDIMSURFACECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E03C0)
#define RPG_GAMECORE_FIVEDIMSURFACECONFIG_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1D6E03D0)
#define RPG_GAMECORE_FIVEDIMSURFACECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6E0390)

namespace RPG::GameCore
{
	class FiveDimSurfaceConfig : public ::RPG::GameCore::LittleGameComponentConfig
	{
	public:
		::System::Boolean UseDynamicSurface; // 0x10
		::System::Byte _padding0[0x3];
		::RPG::MVector3 DynamicSize; // 0x14
		::RPG::MVector3 DynamicCenter; // 0x20
		::System::Boolean IsCylinderSurface; // 0x2C
		::System::Boolean KeepUnloadNavConnectivity; // 0x2D
		::System::Boolean ExpandRenderingItemCullingBounds; // 0x2E
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSurfaceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSurfaceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimSurfaceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimSurfaceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMSURFACECONFIG_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
