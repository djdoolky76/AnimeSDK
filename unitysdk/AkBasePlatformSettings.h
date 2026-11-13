#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"
class AkCallbackManager_InitializationSettings;
class AkCommunicationSettings;
class AkInitializationSettings;
class AkSpatialAudioInitSettings;
namespace System { class String; }

#define AKBASEPLATFORMSETTINGS_CTOR_OFFSET UNITYSDK_OFFSET(0x1EEFE2B0)
#define AKBASEPLATFORMSETTINGS_GET_AKCOMMUNICATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EEFE140)
#define AKBASEPLATFORMSETTINGS_GET_AKINITIALIZATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EEFDEB0)
#define AKBASEPLATFORMSETTINGS_GET_AKSPATIALAUDIOINITSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EEFDFC0)
#define AKBASEPLATFORMSETTINGS_GET_CALLBACKMANAGERINITIALIZATIONSETTINGS_OFFSET UNITYSDK_OFFSET(0x1EEFE050)
#define AKBASEPLATFORMSETTINGS_GET_INITIALLANGUAGE_OFFSET UNITYSDK_OFFSET(0x1EEFE0F0)
#define AKBASEPLATFORMSETTINGS_GET_RENDERDURINGFOCUSLOSS_OFFSET UNITYSDK_OFFSET(0x1EEFE100)
#define AKBASEPLATFORMSETTINGS_GET_SOUNDBANKPATH_OFFSET UNITYSDK_OFFSET(0x1EEFE110)
#define AKBASEPLATFORMSETTINGS_GET_SOUNDBANKPERSISTENTDATAPATH_OFFSET UNITYSDK_OFFSET(0x1EEFE0E0)
#define AKBASEPLATFORMSETTINGS_GET_USEASYNCOPEN_OFFSET UNITYSDK_OFFSET(0x1EEFE250)
#define AKBASEPLATFORMSETTINGS_SETNUMREFILLSINVOICE_OFFSET UNITYSDK_OFFSET(0x1EEFE260)

inline static constexpr unsigned int AkBasePlatformSettings_TypeDefinitionIndex = 45906;

	class AkBasePlatformSettings : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPLATFORMSETTINGS_CTOR_OFFSET))(this);
		}

		::AkInitializationSettings* get_AkInitializationSettings()
		{
			return ((::AkInitializationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPLATFORMSETTINGS_GET_AKINITIALIZATIONSETTINGS_OFFSET))(this);
		}

		::AkSpatialAudioInitSettings* get_AkSpatialAudioInitSettings()
		{
			return ((::AkSpatialAudioInitSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPLATFORMSETTINGS_GET_AKSPATIALAUDIOINITSETTINGS_OFFSET))(this);
		}

		::AkCallbackManager_InitializationSettings* get_CallbackManagerInitializationSettings()
		{
			return ((::AkCallbackManager_InitializationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPLATFORMSETTINGS_GET_CALLBACKMANAGERINITIALIZATIONSETTINGS_OFFSET))(this);
		}

		::System::String* get_SoundBankPersistentDataPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPLATFORMSETTINGS_GET_SOUNDBANKPERSISTENTDATAPATH_OFFSET))(this);
		}

		::System::String* get_InitialLanguage()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPLATFORMSETTINGS_GET_INITIALLANGUAGE_OFFSET))(this);
		}

		::System::Boolean get_RenderDuringFocusLoss()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPLATFORMSETTINGS_GET_RENDERDURINGFOCUSLOSS_OFFSET))(this);
		}

		::System::String* get_SoundbankPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPLATFORMSETTINGS_GET_SOUNDBANKPATH_OFFSET))(this);
		}

		::AkCommunicationSettings* get_AkCommunicationSettings()
		{
			return ((::AkCommunicationSettings*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPLATFORMSETTINGS_GET_AKCOMMUNICATIONSETTINGS_OFFSET))(this);
		}

		::System::Boolean get_UseAsyncOpen()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + AKBASEPLATFORMSETTINGS_GET_USEASYNCOPEN_OFFSET))(this);
		}

		::System::Void SetNumRefillsInVoice(::System::UInt16 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt16))((::PBYTE)hIl2Cpp + AKBASEPLATFORMSETTINGS_SETNUMREFILLSINVOICE_OFFSET))(this, a1);
		}

	};
