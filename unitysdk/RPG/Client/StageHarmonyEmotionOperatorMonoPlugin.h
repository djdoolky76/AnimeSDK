#pragma once
#include "unitysdk/unitysdk.h"
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN_CTOR_OFFSET UNITYSDK_OFFSET(0xE10DA40)
#define RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET UNITYSDK_OFFSET(0xE10D9F0)
#define RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN_LEIGNFNBCNJ_OFFSET UNITYSDK_OFFSET(0xE10D950)
#define RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN_NADFLGBPEKH_OFFSET UNITYSDK_OFFSET(0xE10D8B0)

namespace RPG::Client
{
	class StageHarmonyEmotionOperatorMonoPlugin
	{
	public:
		::System::Boolean EnableLookAt; // 0x30
		::System::Byte _padding0[0x3];
		::System::Single startLookatDistance; // 0x34
		::System::Single eyeOpeningDuration; // 0x38
		::System::Single gazetAtDistance; // 0x3C
		::System::Single gazeAtRange; // 0x40
		::System::Boolean EnableScalingUp; // 0x44
		::System::Byte _padding1[0x3];
		::System::Collections::Generic::List_1<::System::Object*>* PopUpOperators; // 0x48
		::System::Boolean TestRunningInEditor; // 0x50
		::System::Byte _padding2[0x3];
		::System::Single timedebug; // 0x54
		::UnityEngine::GameObject* DistanceDebuger; // 0x58
		::System::Single distancedebug; // 0x60
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN_CTOR_OFFSET))(this);
		}

		::System::Void NADFLGBPEKH()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN_NADFLGBPEKH_OFFSET))(this);
		}

		::System::Void LEIGNFNBCNJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN_LEIGNFNBCNJ_OFFSET))(this);
		}

		::System::String* GetTickLodTemplateName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STAGEHARMONYEMOTIONOPERATORMONOPLUGIN_GETTICKLODTEMPLATENAME_OFFSET))(this);
		}

	};
}
