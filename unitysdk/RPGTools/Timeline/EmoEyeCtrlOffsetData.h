#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
namespace RPG::GameCore { class CharacterEyeCtrlConfig; }
namespace RPGTools::Timeline { class EmoEyeCtrlOffsetData; }

#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_CTOR_OFFSET UNITYSDK_OFFSET(0xE8E0F70)
#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_FABGDHHHCML_OFFSET UNITYSDK_OFFSET(0xE8E0760)
#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_FMDIMGPGIHD_OFFSET UNITYSDK_OFFSET(0xE8E0440)
#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_FMIJFKODJBN_OFFSET UNITYSDK_OFFSET(0xE8E0180)
#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_FNHNPFFOPDH_OFFSET UNITYSDK_OFFSET(0xE8E0E50)
#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_KPKCFMCJBCF_1_OFFSET UNITYSDK_OFFSET(0xE8E0D20)
#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_KPKCFMCJBCF_OFFSET UNITYSDK_OFFSET(0xE8E0C20)
#define RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_LLNIAHOHMMB_OFFSET UNITYSDK_OFFSET(0xE8E0A90)

namespace RPGTools::Timeline
{
	class EmoEyeCtrlOffsetData : public ::System::Object
	{
	public:
		::UnityEngine::Vector3 Eye_Rotation_Offset; // 0x10
		::UnityEngine::Vector3 Eye_L_Rotation; // 0x1C
		::UnityEngine::Vector3 Eye_R_Rotation; // 0x28
		::UnityEngine::Vector3 EyeEnd_L_Scale; // 0x34
		::UnityEngine::Vector3 EyeEnd_R_Scale; // 0x40
		::UnityEngine::Vector3 EyeEnd_L_01_Position; // 0x4C
		::UnityEngine::Vector3 EyeEnd_R_01_Position; // 0x58
		::UnityEngine::Vector3 EyeEnd_L_01_Rotation; // 0x64
		::UnityEngine::Vector3 EyeEnd_R_01_Rotation; // 0x70
		::UnityEngine::Vector3 EyeEnd_L_01_Scale; // 0x7C
		::UnityEngine::Vector3 EyeEnd_R_01_Scale; // 0x88
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_CTOR_OFFSET))(this);
		}

		::System::Boolean FMIJFKODJBN()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_FMIJFKODJBN_OFFSET))(this);
		}

		::System::Boolean FMDIMGPGIHD(::RPGTools::Timeline::EmoEyeCtrlOffsetData* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlOffsetData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_FMDIMGPGIHD_OFFSET))(this, a1);
		}

		static ::System::Void FABGDHHHCML(::RPGTools::Timeline::EmoEyeCtrlOffsetData* a1, ::RPGTools::Timeline::EmoEyeCtrlOffsetData* a2, ::RPGTools::Timeline::EmoEyeCtrlOffsetData* a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Void(*)(::RPGTools::Timeline::EmoEyeCtrlOffsetData*, ::RPGTools::Timeline::EmoEyeCtrlOffsetData*, ::RPGTools::Timeline::EmoEyeCtrlOffsetData*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_FABGDHHHCML_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void LLNIAHOHMMB(::RPGTools::Timeline::EmoEyeCtrlOffsetData* a1, ::RPGTools::Timeline::EmoEyeCtrlOffsetData* a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::RPGTools::Timeline::EmoEyeCtrlOffsetData*, ::RPGTools::Timeline::EmoEyeCtrlOffsetData*, ::System::Single))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_LLNIAHOHMMB_OFFSET))(a1, a2, a3);
		}

		::System::Void KPKCFMCJBCF(::RPGTools::Timeline::EmoEyeCtrlOffsetData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPGTools::Timeline::EmoEyeCtrlOffsetData*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_KPKCFMCJBCF_OFFSET))(this, a1);
		}

		::System::Void KPKCFMCJBCF_1(::RPG::GameCore::CharacterEyeCtrlConfig* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::GameCore::CharacterEyeCtrlConfig*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_KPKCFMCJBCF_1_OFFSET))(this, a1);
		}

		::System::Void FNHNPFFOPDH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOEYECTRLOFFSETDATA_FNHNPFFOPDH_OFFSET))(this);
		}

	};
}
