#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPGTools::Timeline { class EmoEyeCtrlShakeNoiseData; }

#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA_CFIFPNPICBC_OFFSET UNITYSDK_OFFSET(0xE8E14E0)
#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8E1CC0)
#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA_FNHNPFFOPDH_OFFSET UNITYSDK_OFFSET(0xE8E17F0)
#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA_KPKCFMCJBCF_OFFSET UNITYSDK_OFFSET(0xE8E1B50)

namespace RPGTools::Timeline
{
	class EmoEyeCtrlShakeNoiseData : public ::System::Object
	{
	public:
		::System::Boolean EnableNoise; // 0x10
		::System::Byte _padding0[0x3];
		::System::Single Amplitude; // 0x14
		::System::Single Circle; // 0x18
		::System::Single PerlinSample; // 0x1C
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA_CTOR_OFFSET))(this);
		}

		::System::Void CFIFPNPICBC(::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData*, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA_CFIFPNPICBC_OFFSET))(this, a1, a2);
		}

		::System::Void FNHNPFFOPDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA_FNHNPFFOPDH_OFFSET))(this);
		}

		::System::Void KPKCFMCJBCF(::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKENOISEDATA_KPKCFMCJBCF_OFFSET))(this, a1);
		}

	};
}
