#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRDebugger/DefaultTabs.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Object.h"
namespace SRDebugger { class ActionCompleteCallback; }
namespace SRDebugger { class DynamicOptionContainer; }
namespace SRDebugger { class InfoEntry; }
namespace SRDebugger { class OptionDefinition; }
namespace SRDebugger { class PinnedUiCanvasCreated; }
namespace SRDebugger { class Settings; }
namespace SRDebugger { class VisibilityChangedDelegate; }
namespace SRDebugger::Services { class IDebugPanelService; }
namespace SRDebugger::Services { class IDebugTriggerService; }
namespace SRDebugger::Services { class IDockConsoleService; }
namespace SRDebugger::Services { class IOptionsService; }
namespace SRDebugger::Services { class IPinnedUIService; }
namespace SRDebugger::Services { class ISystemInformationService; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine { class RectTransform; }

#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDCLOSECALLBACK_OFFSET UNITYSDK_OFFSET(0x1D4396C0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDOPTIONCONTAINER_OFFSET UNITYSDK_OFFSET(0x1D4396D0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDOPTION_OFFSET UNITYSDK_OFFSET(0x1D439790)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDSYSTEMINFO_OFFSET UNITYSDK_OFFSET(0x1D4391B0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADD_PANELVISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1D437B90)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADD_PINNEDUICANVASCREATED_OFFSET UNITYSDK_OFFSET(0x1D438460)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_CLEARPINNEDOPTIONS_OFFSET UNITYSDK_OFFSET(0x1D43ACE0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_CTOR_OFFSET UNITYSDK_OFFSET(0x1D438560)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_DEBUGPANELSERVICEONVISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1D43AD10)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_DESTROYDEBUGPANEL_OFFSET UNITYSDK_OFFSET(0x1D439670)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ENABLEWORLDSPACEMODE_OFFSET UNITYSDK_OFFSET(0x1D43ADD0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_DOCKCONSOLE_OFFSET UNITYSDK_OFFSET(0x1D4331B0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_ISDEBUGPANELVISIBLE_OFFSET UNITYSDK_OFFSET(0x1D433060)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_ISPROFILERDOCKED_OFFSET UNITYSDK_OFFSET(0x1D433230)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_ISTRIGGERENABLED_OFFSET UNITYSDK_OFFSET(0x1D4390B0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_SETTINGS_OFFSET UNITYSDK_OFFSET(0x1D439030)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_HIDEDEBUGPANEL_OFFSET UNITYSDK_OFFSET(0x1D4326A0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_PINALLOPTIONS_OFFSET UNITYSDK_OFFSET(0x1D4399C0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_PINOPTION_OFFSET UNITYSDK_OFFSET(0x1D43A350)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_PROMPTENTRYCODE_OFFSET UNITYSDK_OFFSET(0x1D4394C0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVEOPTIONCONTAINER_OFFSET UNITYSDK_OFFSET(0x1D439730)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVEOPTION_OFFSET UNITYSDK_OFFSET(0x1D439960)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVE_PANELVISIBILITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1D4383E0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVE_PINNEDUICANVASCREATED_OFFSET UNITYSDK_OFFSET(0x1D4384E0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SET_ISPROFILERDOCKED_OFFSET UNITYSDK_OFFSET(0x1D4332C0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SET_ISTRIGGERENABLED_OFFSET UNITYSDK_OFFSET(0x1D439120)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SHOWBUGREPORTSHEET_OFFSET UNITYSDK_OFFSET(0x1D433090)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SHOWDEBUGPANEL_1_OFFSET UNITYSDK_OFFSET(0x1D4315D0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SHOWDEBUGPANEL_OFFSET UNITYSDK_OFFSET(0x1D431640)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_UNPINALLOPTIONS_OFFSET UNITYSDK_OFFSET(0x1D439E90)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_UNPINOPTION_OFFSET UNITYSDK_OFFSET(0x1D43A820)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE__PROMPTENTRYCODE_B__47_0_OFFSET UNITYSDK_OFFSET(0x1D43B0E0)
#define SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE___CTOR_B__19_0_OFFSET UNITYSDK_OFFSET(0x1D43B050)

namespace SRDebugger::Services::Implementation
{
	inline static constexpr unsigned int SRDebugService_TypeDefinitionIndex = 39015;

	class SRDebugService : public ::System::Object
	{
	public:
		::SRDebugger::Services::IOptionsService* _optionsService; // 0x10
		::SRDebugger::DynamicOptionContainer* _looseOptionContainer; // 0x18
		::SRDebugger::Services::IDebugPanelService* _debugPanelService; // 0x20
		::SRDebugger::Services::ISystemInformationService* _informationService; // 0x28
		::SRDebugger::Services::IPinnedUIService* _pinnedUiService; // 0x30
		::SRDebugger::Services::IDebugTriggerService* _debugTrigger; // 0x38
		::SRDebugger::PinnedUiCanvasCreated* PinnedUiCanvasCreated; // 0x40
		::UnityEngine::RectTransform* _worldSpaceTransform; // 0x48
		::System::Action* _OnClose; // 0x50
		::SRDebugger::VisibilityChangedDelegate* PanelVisibilityChanged; // 0x58
		::System::Nullable_1<::SRDebugger::DefaultTabs> _queuedTab; // 0x60
		::System::Boolean _hasAuthorised; // 0x68
		::System::Boolean _entryCodeEnabled; // 0x69
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_CTOR_OFFSET))(this);
		}

		::SRDebugger::Services::IDockConsoleService* get_DockConsole()
		{
			return ((::SRDebugger::Services::IDockConsoleService*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_DOCKCONSOLE_OFFSET))(this);
		}

		::System::Void add_PanelVisibilityChanged(::SRDebugger::VisibilityChangedDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::VisibilityChangedDelegate*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADD_PANELVISIBILITYCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_PanelVisibilityChanged(::SRDebugger::VisibilityChangedDelegate* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::VisibilityChangedDelegate*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVE_PANELVISIBILITYCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_PinnedUiCanvasCreated(::SRDebugger::PinnedUiCanvasCreated* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::PinnedUiCanvasCreated*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADD_PINNEDUICANVASCREATED_OFFSET))(this, a1);
		}

		::System::Void remove_PinnedUiCanvasCreated(::SRDebugger::PinnedUiCanvasCreated* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::PinnedUiCanvasCreated*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVE_PINNEDUICANVASCREATED_OFFSET))(this, a1);
		}

		::SRDebugger::Settings* get_Settings()
		{
			return ((::SRDebugger::Settings*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_SETTINGS_OFFSET))(this);
		}

		::System::Boolean get_IsDebugPanelVisible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_ISDEBUGPANELVISIBLE_OFFSET))(this);
		}

		::System::Boolean get_IsTriggerEnabled()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_ISTRIGGERENABLED_OFFSET))(this);
		}

		::System::Void set_IsTriggerEnabled(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SET_ISTRIGGERENABLED_OFFSET))(this, a1);
		}

		::System::Boolean get_IsProfilerDocked()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_GET_ISPROFILERDOCKED_OFFSET))(this);
		}

		::System::Void set_IsProfilerDocked(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SET_ISPROFILERDOCKED_OFFSET))(this, a1);
		}

		::System::Void AddSystemInfo(::SRDebugger::InfoEntry* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::InfoEntry*, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDSYSTEMINFO_OFFSET))(this, a1, a2);
		}

		::System::Void ShowDebugPanel(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SHOWDEBUGPANEL_OFFSET))(this, a1);
		}

		::System::Void ShowDebugPanel_1(::SRDebugger::DefaultTabs a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::DefaultTabs, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SHOWDEBUGPANEL_1_OFFSET))(this, a1, a2);
		}

		::System::Void HideDebugPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_HIDEDEBUGPANEL_OFFSET))(this);
		}

		::System::Void DestroyDebugPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_DESTROYDEBUGPANEL_OFFSET))(this);
		}

		::System::Void AddCloseCallBack(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDCLOSECALLBACK_OFFSET))(this, a1);
		}

		::System::Void AddOptionContainer(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDOPTIONCONTAINER_OFFSET))(this, a1);
		}

		::System::Void RemoveOptionContainer(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVEOPTIONCONTAINER_OFFSET))(this, a1);
		}

		::System::Void AddOption(::SRDebugger::OptionDefinition* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ADDOPTION_OFFSET))(this, a1);
		}

		::System::Boolean RemoveOption(::SRDebugger::OptionDefinition* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::SRDebugger::OptionDefinition*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_REMOVEOPTION_OFFSET))(this, a1);
		}

		::System::Void PinAllOptions(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_PINALLOPTIONS_OFFSET))(this, a1);
		}

		::System::Void UnpinAllOptions(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_UNPINALLOPTIONS_OFFSET))(this, a1);
		}

		::System::Void PinOption(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_PINOPTION_OFFSET))(this, a1);
		}

		::System::Void UnpinOption(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_UNPINOPTION_OFFSET))(this, a1);
		}

		::System::Void ClearPinnedOptions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_CLEARPINNEDOPTIONS_OFFSET))(this);
		}

		::System::Void ShowBugReportSheet(::SRDebugger::ActionCompleteCallback* a1, ::System::Boolean a2, ::System::String* a3)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::ActionCompleteCallback*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_SHOWBUGREPORTSHEET_OFFSET))(this, a1, a2, a3);
		}

		::System::Void DebugPanelServiceOnVisibilityChanged(::SRDebugger::Services::IDebugPanelService* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::SRDebugger::Services::IDebugPanelService*, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_DEBUGPANELSERVICEONVISIBILITYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void PromptEntryCode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_PROMPTENTRYCODE_OFFSET))(this);
		}

		::UnityEngine::RectTransform* EnableWorldSpaceMode()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE_ENABLEWORLDSPACEMODE_OFFSET))(this);
		}

		::System::Void __ctor_b__19_0(::UnityEngine::RectTransform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE___CTOR_B__19_0_OFFSET))(this, a1);
		}

		::System::Void _PromptEntryCode_b__47_0(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SRDEBUGGER_SERVICES_IMPLEMENTATION_SRDEBUGSERVICE__PROMPTENTRYCODE_B__47_0_OFFSET))(this, a1);
		}

	};
}
