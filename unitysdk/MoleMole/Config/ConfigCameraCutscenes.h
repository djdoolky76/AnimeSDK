#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole { class CameraShotData; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11E89B40)
#define MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11E897F0)
#define MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES__CTOR_OFFSET UNITYSDK_OFFSET(0x11E89DA0)
#define MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11E89F00)
#define MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0x11E89F10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCameraCutscenes_TypeDefinitionIndex = 90121;

	class ConfigCameraCutscenes : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CameraShotData*>* cameraCutScenes; // 0x58
		::System::Collections::Generic::List_1<::System::Object*>* KeyValueInfoList; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCAMERACUTSCENES___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
