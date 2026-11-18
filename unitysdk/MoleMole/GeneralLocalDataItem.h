#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTime.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class SystemSettingLocalData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_GENERALLOCALDATAITEM_CEACGLPNCKN_OFFSET UNITYSDK_OFFSET(0x14326530)
#define MOLEMOLE_GENERALLOCALDATAITEM_JGECEJIHMLG_OFFSET UNITYSDK_OFFSET(0x14326020)
#define MOLEMOLE_GENERALLOCALDATAITEM_JIDMADDMGIE_OFFSET UNITYSDK_OFFSET(0x14325AC0)
#define MOLEMOLE_GENERALLOCALDATAITEM_LGJBBHMPDFG_OFFSET UNITYSDK_OFFSET(0x14325FE0)
#define MOLEMOLE_GENERALLOCALDATAITEM__CTOR_OFFSET UNITYSDK_OFFSET(0x143256C0)

namespace MoleMole
{
	inline static constexpr unsigned int GeneralLocalDataItem_TypeDefinitionIndex = 74251;

	class GeneralLocalDataItem : public ::System::Object
	{
	public:
		// static const ::System::String* Field_0; // 0x0
		::System::String* deviceUUID; // 0x10
		::System::String* userLocalDataVersionId; // 0x18
		::System::String* curAccountName; // 0x20
		::System::Int32 uid; // 0x28
		::System::UInt32 selectedServerIndex; // 0x2C
		::System::Int32 DeviceLanguageType; // 0x30
		::System::Int32 DeviceLanguageVoiceType; // 0x34
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::String*>* PlayerPrefs_StringContainer; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Int32>* PlayerPrefs_IntContainer; // 0x40
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Single>* PlayerPrefs_FloatContainer; // 0x48
		::System::Int32 LocalUILayoutPlatform; // 0x50
		::System::Int32 UILayoutManualSetRecordState; // 0x54
		::System::Int32 ControlChoosePopWindowRecordState; // 0x58
		::System::Byte _padding0[0x4];
		::System::String* selectServerName; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::SystemSettingLocalData*>* SystemSettingDataMap; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* KeyboardBindingMap; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* MouseBindingMap; // 0x78
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* GamepadBindingMap; // 0x80
		::System::Int32 HDRSettingRecordState; // 0x88
		::System::Int32 HDRMaxLuminosityLevel; // 0x8C
		::System::Int32 HDRUIPaperWhiteLevel; // 0x90
		::System::Byte _padding1[0x4];
		::System::DateTime LastVHSStoreOpenTime; // 0x98
		::System::Boolean DisableBattleUIOptimization; // 0xA0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALLOCALDATAITEM__CTOR_OFFSET))(this);
		}

		static ::MoleMole::GeneralLocalDataItem* JIDMADDMGIE(::System::String* AAOCANGHBDG)
		{
			return ((::MoleMole::GeneralLocalDataItem*(*)(::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALLOCALDATAITEM_JIDMADDMGIE_OFFSET))(AAOCANGHBDG);
		}

		::System::Void LGJBBHMPDFG()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALLOCALDATAITEM_LGJBBHMPDFG_OFFSET))(this);
		}

		static ::System::String* JGECEJIHMLG(::MoleMole::GeneralLocalDataItem* BNHIFIHNCHD)
		{
			return ((::System::String*(*)(::MoleMole::GeneralLocalDataItem*))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALLOCALDATAITEM_JGECEJIHMLG_OFFSET))(BNHIFIHNCHD);
		}

		::System::Void CEACGLPNCKN()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GENERALLOCALDATAITEM_CEACGLPNCKN_OFFSET))(this);
		}
	};
}
