#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"
#include "unitysdk/RPG/MVector3.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class HitMotionParams; }

#define RPG_GAMECORE_HITMOTIONPARAMS_CTOR_OFFSET UNITYSDK_OFFSET(0x1D770630)
#define RPG_GAMECORE_HITMOTIONPARAMS_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1D770370)

namespace RPG::GameCore
{
	class HitMotionParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::RPG::MVector3 Offset; // 0x10
		::System::Single RiseTime; // 0x1C
		::System::Single HangTime; // 0x20
		::System::Single FallTime; // 0x24
		::System::Single HangPeakTime; // 0x28
		::System::Single HangBeginHeightRatio; // 0x2C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITMOTIONPARAMS_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::HitMotionParams* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::HitMotionParams*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_HITMOTIONPARAMS_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

	};
}
