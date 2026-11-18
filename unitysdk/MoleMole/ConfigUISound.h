#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUISOUND_RELOADDATA_OFFSET UNITYSDK_OFFSET(0xFFF6240)
#define MOLEMOLE_CONFIGUISOUND__CTOR_OFFSET UNITYSDK_OFFSET(0xFFF6290)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUISound_TypeDefinitionIndex = 91074;

	class ConfigUISound : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::String*>* bossStates; // 0x58
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::System::UInt32>*>* sectionsNotInterruptBGM; // 0x60
		::System::Collections::Generic::List_1<::System::Object*>* transferSoundConfigs; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Collections::Generic::List_1<::System::Int32>*>*>* npcTagsToSwitch; // 0x70
		::System::Collections::Generic::List_1<::System::Object*>* serverSoundActionClearConfigs; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* stateConfigs; // 0x80
		::System::Single cullingMarginPercent; // 0x88
		::System::Single cullingMinDurationExempt; // 0x8C
		::System::Collections::Generic::List_1<::System::String*>* cullingWhitelistTags; // 0x90
		::System::Int32 cullingConsecutiveFrames; // 0x98
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::System::Object*>* gamePlayMixPriority; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND__CTOR_OFFSET))(this);
		}

		::System::Void ReloadData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUISOUND_RELOADDATA_OFFSET))(this);
		}
	};
}
