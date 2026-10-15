#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector2.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class WaterReflectionFoamShaderParam; }

#define RPG_GAMECORE_WATERREFLECTIONFOAMSHADERPARAM_CTOR_OFFSET UNITYSDK_OFFSET(0x1DCA5630)
#define RPG_GAMECORE_WATERREFLECTIONFOAMSHADERPARAM_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DCA53F0)

namespace RPG::GameCore
{
	class WaterReflectionFoamShaderParam : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector2 MaskTiling; // 0x10
		::RPG::MVector2 MaskTilingSpeed; // 0x18
		::System::Single Extent; // 0x20
		::System::Single Atten; // 0x24
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WATERREFLECTIONFOAMSHADERPARAM_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::WaterReflectionFoamShaderParam* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::WaterReflectionFoamShaderParam*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_WATERREFLECTIONFOAMSHADERPARAM_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
