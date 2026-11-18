#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/Config/CameraDitherLayerData.h"
#include "unitysdk/MoleMole/Config/CharacterFadeDitheringDataV2.h"
#include "unitysdk/MoleMole/Config/LocalAvatarElevationRatioDitheringData.h"
#include "unitysdk/MoleMole/Config/SceneObjDitherData.h"
#include "unitysdk/MoleMole/CharacterCameraDitheringData.h"

namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_COMMONDITHERCONFIGS_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xFAB7270)
#define MOLEMOLE_CONFIG_COMMONDITHERCONFIGS_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xFAB6BA0)
#define MOLEMOLE_CONFIG_COMMONDITHERCONFIGS__CTOR_OFFSET UNITYSDK_OFFSET(0xFAB7AD0)
#define MOLEMOLE_CONFIG_COMMONDITHERCONFIGS___BASE_ONAFTERDESERIALIZE_OFFSET UNITYSDK_OFFSET(0xFAB7DD0)
#define MOLEMOLE_CONFIG_COMMONDITHERCONFIGS___BASE_ONBEFORESERIALIZE_OFFSET UNITYSDK_OFFSET(0xFAB7DE0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CommonDitherConfigs_TypeDefinitionIndex = 60262;

	class CommonDitherConfigs : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CharacterFadeDitheringDataV2>* CharacterFadeDitherDatasV2; // 0x58
		::MoleMole::Config::LocalAvatarElevationRatioDitheringData LocalAvatarElevRatioDitheringInfo; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::CharacterCameraDitheringData>* CharacterCameraDitheringDatas; // 0x88
		::MoleMole::Config::SceneObjDitherData sceneObjDitherData; // 0x90
		::System::Single SpecialNPCDitherDitherDis; // 0xA8
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::CameraDitherLayerData>* CameraDitherLayerDataDict; // 0xB0
		::System::Collections::Generic::List_1<::System::Object*>* KeyValueInfoList; // 0xB8
		::System::Collections::Generic::List_1<::System::Object*>* KeyValueInfoList1; // 0xC0
		::System::Collections::Generic::List_1<::System::Object*>* KeyValueInfoList2; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONDITHERCONFIGS__CTOR_OFFSET))(this);
		}

		::System::Void OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONDITHERCONFIGS_ONBEFORESERIALIZE_OFFSET))(this);
		}

		::System::Void OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONDITHERCONFIGS_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnAfterDeserialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONDITHERCONFIGS___BASE_ONAFTERDESERIALIZE_OFFSET))(this);
		}

		::System::Void __base_OnBeforeSerialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COMMONDITHERCONFIGS___BASE_ONBEFORESERIALIZE_OFFSET))(this);
		}
	};
}
