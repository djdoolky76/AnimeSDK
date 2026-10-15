#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FiveDimVCameraBlendHint.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/GameCore/VCameraBlendType.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class FiveDimVCameraBlendConfig; }
namespace RPG::GameCore { class FloatCurve; }

#define RPG_GAMECORE_FIVEDIMVCAMERABLENDCONFIG_CTOR_OFFSET UNITYSDK_OFFSET(0x1D6E25E0)
#define RPG_GAMECORE_FIVEDIMVCAMERABLENDCONFIG_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D6D0360)

namespace RPG::GameCore
{
	class FiveDimVCameraBlendConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::GameCore::VCameraBlendType BlendType; // 0x10
		::System::Single BlendTime; // 0x14
		::RPG::GameCore::FiveDimVCameraBlendHint BlendHint; // 0x18
		::System::Byte _padding0[0x4];
		::RPG::GameCore::FloatCurve* CustomCurve; // 0x20
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMVCAMERABLENDCONFIG_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::FiveDimVCameraBlendConfig* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::FiveDimVCameraBlendConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMVCAMERABLENDCONFIG_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
