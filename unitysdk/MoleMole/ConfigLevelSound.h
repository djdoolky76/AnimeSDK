#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGLEVELSOUND_ONPORTALOBSTRUCTIONPERMETERUPDATED_OFFSET UNITYSDK_OFFSET(0x1654A220)
#define MOLEMOLE_CONFIGLEVELSOUND__CTOR_OFFSET UNITYSDK_OFFSET(0x1654A3E0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigLevelSound_TypeDefinitionIndex = 84181;

	class ConfigLevelSound : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* muteInLevelMinigameQuestIds; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Object*>* bigSceneWeatherStateMap; // 0x60
		::System::Collections::Generic::HashSet_1<::System::Int32>* monstersNeedSetUnControl; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* listenerConfigModes; // 0x70
		::System::Single portalObstructionPerMeter; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELSOUND__CTOR_OFFSET))(this);
		}

		::System::Void OnPortalObstructionPerMeterUpdated()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGLEVELSOUND_ONPORTALOBSTRUCTIONPERMETERUPDATED_OFFSET))(this);
		}
	};
}
