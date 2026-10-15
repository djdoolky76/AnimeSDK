#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPGTools::Timeline { class EmoEyeCtrlShakeData; }
namespace RPGTools::Timeline { class EmoEyeCtrlShakeNoiseData; }

#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA_CFIFPNPICBC_OFFSET UNITYSDK_OFFSET(0xE8E0FE0)
#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8E1BC0)
#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA_FNHNPFFOPDH_OFFSET UNITYSDK_OFFSET(0xE8E1580)
#define RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA_KPKCFMCJBCF_OFFSET UNITYSDK_OFFSET(0xE8E1840)

namespace RPGTools::Timeline
{
	class EmoEyeCtrlShakeData : public ::System::Object
	{
	public:
		::System::Boolean EnableEye; // 0x10
		::System::Byte _padding0[0x3];
		::UnityEngine::Vector3 Eye_L_Rotation; // 0x14
		::UnityEngine::Vector3 Eye_R_Rotation; // 0x20
		::System::Single Eye_Rotation_ShakeCircle; // 0x2C
		::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData* Eye_Rotation_Noise; // 0x30
		::System::Boolean EnableEyeEnd; // 0x38
		::System::Byte _padding1[0x3];
		::UnityEngine::Vector3 EyeEnd_L_Scale; // 0x3C
		::UnityEngine::Vector3 EyeEnd_R_Scale; // 0x48
		::System::Single EyeEnd_Scale_ShakeCircle; // 0x54
		::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData* EyeEnd_Scale_Noise; // 0x58
		::System::Boolean EnableEyeEnd01; // 0x60
		::System::Byte _padding2[0x3];
		::UnityEngine::Vector3 EyeEnd_L_01_Position; // 0x64
		::UnityEngine::Vector3 EyeEnd_R_01_Position; // 0x70
		::System::Single EyeEnd01_Position_ShakeCircle; // 0x7C
		::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData* EyeEnd01_Position_Noise; // 0x80
		::UnityEngine::Vector3 EyeEnd_L_01_Scale; // 0x88
		::UnityEngine::Vector3 EyeEnd_R_01_Scale; // 0x94
		::System::Single EyeEnd01_Scale_ShakeCircle; // 0xA0
		::System::Byte _padding3[0x4];
		::RPGTools::Timeline::EmoEyeCtrlShakeNoiseData* EyeEnd01_Scale_Noise; // 0xA8
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA_CTOR_OFFSET))(this);
		}

		::System::Void CFIFPNPICBC(::RPGTools::Timeline::EmoEyeCtrlShakeData* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlShakeData*, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA_CFIFPNPICBC_OFFSET))(this, a1, a2);
		}

		::System::Void FNHNPFFOPDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA_FNHNPFFOPDH_OFFSET))(this);
		}

		::System::Void KPKCFMCJBCF(::RPGTools::Timeline::EmoEyeCtrlShakeData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlShakeData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLSHAKEDATA_KPKCFMCJBCF_OFFSET))(this, a1);
		}

	};
}
