#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"
class FCOEMCEDLNL;
namespace RPG::GameCore { class VCameraNoiseChange; }
namespace System { class String; }

#define RPG_GAMECORE_VCAMERANOISECHANGE_CTOR_OFFSET UNITYSDK_OFFSET(0x1DC7F550)
#define RPG_GAMECORE_VCAMERANOISECHANGE_MGMEGEDLMAK_OFFSET UNITYSDK_OFFSET(0x1DC7F560)
#define RPG_GAMECORE_VCAMERANOISECHANGE_OJNNBEJLDIJ_OFFSET UNITYSDK_OFFSET(0x1DC7DDD0)

namespace RPG::GameCore
{
	class VCameraNoiseChange : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Boolean Reset; // 0x18
		::System::Byte _padding0[0x3];
		::System::Single AmplitudeGain; // 0x1C
		::System::Single FrequencyGain; // 0x20
		::System::Byte _padding1[0x4];
		::System::String* ProfilePath; // 0x28
		::System::Boolean IgnoreActionWaitOrder; // 0x30
		::System::Byte _padding2[0x3];
		::System::Single AmplitudeTransitionTime; // 0x34
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERANOISECHANGE_CTOR_OFFSET))(this);
		}

		static ::System::Void OJNNBEJLDIJ(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraNoiseChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraNoiseChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERANOISECHANGE_OJNNBEJLDIJ_OFFSET))(a1, a2);
		}

		static ::System::Void MGMEGEDLMAK(::FCOEMCEDLNL* a1, ::RPG::GameCore::VCameraNoiseChange* a2)
		{
			return ((::System::Void(*)(::FCOEMCEDLNL*, ::RPG::GameCore::VCameraNoiseChange*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_VCAMERANOISECHANGE_MGMEGEDLMAK_OFFSET))(a1, a2);
		}

	};
}
