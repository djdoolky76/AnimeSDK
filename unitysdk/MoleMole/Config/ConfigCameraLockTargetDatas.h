#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class ConfigCameraLockTargetBase; }
namespace Newtonsoft::Json { class JsonSerializerSettings; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19096290)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x19095F00)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS__CTOR_OFFSET UNITYSDK_OFFSET(0x190966B0)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x190968C0)
#define MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x190968D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraLockTargetDatas_TypeDefinitionIndex = 89743;

	class ConfigCameraLockTargetDatas : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigCameraLockTargetBase*>* cameraLockTargets; // 0x58
		::System::Collections::Generic::List_1<::System::Object*>* KeyValueInfoList; // 0x60
		::Newtonsoft::Json::JsonSerializerSettings* serializerSettings; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERALOCKTARGETDATAS___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
