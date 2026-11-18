#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_ButtonType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PanelPositionType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PanelType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_PositionType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_SceneType.h"
#include "unitysdk/MoleMole/ConfigUICommon_Input_MobileButtonPositionInfo.h"

namespace MoleMole { class ConfigUICommon_Input_ConfigMobilePanelLayout; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIGUICOMMON_INPUT_GETALLBUTTONTYPES_OFFSET UNITYSDK_OFFSET(0x118F6560)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_GETALLPANELTYPES_OFFSET UNITYSDK_OFFSET(0x118F5EF0)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_GETDEFAULTPANELTYPE_1_OFFSET UNITYSDK_OFFSET(0x118F5370)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_GETDEFAULTPANELTYPE_OFFSET UNITYSDK_OFFSET(0x118F50D0)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_GETMOBILEPANELLAYOUT_OFFSET UNITYSDK_OFFSET(0x118F59E0)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_GETPOSITIONINFO_OFFSET UNITYSDK_OFFSET(0x118F4890)
#define MOLEMOLE_CONFIGUICOMMON_INPUT_ONREVERSESWITCHVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x118F4800)
#define MOLEMOLE_CONFIGUICOMMON_INPUT__CCTOR_OFFSET UNITYSDK_OFFSET(0x118F6FE0)
#define MOLEMOLE_CONFIGUICOMMON_INPUT__CTOR_OFFSET UNITYSDK_OFFSET(0x118F6A60)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigUICommon_Input_TypeDefinitionIndex = 84691;

	class ConfigUICommon_Input : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet__buttonTypesCache()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Input_TypeDefinitionIndex)->GetStaticField(0x516C0);
		}
		static ::System::Collections::Generic::List_1<::System::Object*>** StaticGet__panelTypesCache()
		{
			return (::System::Collections::Generic::List_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(ConfigUICommon_Input_TypeDefinitionIndex)->GetStaticField(0x516C8);
		}
		::System::Collections::Generic::Dictionary_2<::System::Object*, ::System::Object*>* ConfigMobileButtonScenes; // 0x58
		::System::Single reverseSwitchJoystickAnchor; // 0x60
		::System::Single reverseSwitchMoveSpaceShift; // 0x64
		::System::Single reverseSwitchInLevelRangeRightShrink; // 0x68
		::System::Byte _padding0[0x4];
		::System::String* reverseSwitchGeneralTipsTextMapKey; // 0x70
		::System::Int32 reverseSwitchLayoutConfirmGroupId; // 0x78
		::System::Byte _padding1[0x4];
		::Il2CppArray<::System::Object*>* reverseSwitchLayoutPresets; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT__CCTOR_OFFSET))();
		}

		::System::Void OnReverseSwitchValueChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_ONREVERSESWITCHVALUECHANGED_OFFSET))(this);
		}

		::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo GetPositionInfo(::MoleMole::ConfigUICommon_Input_ButtonType buttonType)
		{
			return ((::MoleMole::ConfigUICommon_Input_MobileButtonPositionInfo(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_ButtonType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_GETPOSITIONINFO_OFFSET))(this, buttonType);
		}

		::MoleMole::ConfigUICommon_Input_PanelType GetDefaultPanelType(::MoleMole::ConfigUICommon_Input_SceneType sceneType, ::MoleMole::ConfigUICommon_Input_PanelPositionType panelPositionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_PanelType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType, ::MoleMole::ConfigUICommon_Input_PanelPositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_GETDEFAULTPANELTYPE_OFFSET))(this, sceneType, panelPositionType);
		}

		::MoleMole::ConfigUICommon_Input_PanelType GetDefaultPanelType_1(::MoleMole::ConfigUICommon_Input_SceneType sceneType, ::MoleMole::ConfigUICommon_Input_PositionType positionType)
		{
			return ((::MoleMole::ConfigUICommon_Input_PanelType(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType, ::MoleMole::ConfigUICommon_Input_PositionType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_GETDEFAULTPANELTYPE_1_OFFSET))(this, sceneType, positionType);
		}

		::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout* GetMobilePanelLayout(::MoleMole::ConfigUICommon_Input_PanelType panelType)
		{
			return ((::MoleMole::ConfigUICommon_Input_ConfigMobilePanelLayout*(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PanelType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_GETMOBILEPANELLAYOUT_OFFSET))(this, panelType);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* GetAllPanelTypes(::MoleMole::ConfigUICommon_Input_SceneType sceneType)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_SceneType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_GETALLPANELTYPES_OFFSET))(this, sceneType);
		}

		::System::Collections::Generic::IReadOnlyList_1<::System::Object*>* GetAllButtonTypes(::MoleMole::ConfigUICommon_Input_PanelType panelType)
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::System::Object*>*(*)(::PVOID, ::MoleMole::ConfigUICommon_Input_PanelType))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGUICOMMON_INPUT_GETALLBUTTONTYPES_OFFSET))(this, panelType);
		}
	};
}
