#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimMapSurfaceConfig; }

#define RPG_GAMECORE_FIVEDIMMAPSURFACECONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D69A1D0)
#define RPG_GAMECORE_FIVEDIMMAPSURFACECONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D699EB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimMapSurfaceConfig_TypeDefinitionIndex = 18524;

	class FiveDimMapSurfaceConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::UInt32 SurfaceID; // 0x10
		::RPG::MVector2 PositionInFace; // 0x14
		::System::Boolean IsCylinder; // 0x1C
		::System::Byte _padding0[0x3];
		::System::Single CylinderUnitAngle; // 0x20
		::System::Single CylinderStartOffsetAngle; // 0x24
		::System::Single CylinderRadius; // 0x28
		::System::Single CylinderYMin; // 0x2C
		::System::Single CylinderYMax; // 0x30
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMAPSURFACECONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimMapSurfaceConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimMapSurfaceConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMMAPSURFACECONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
