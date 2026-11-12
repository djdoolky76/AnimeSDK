#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"
namespace SRDebugger::UI::Controls { class ProfilerTableMemoryBlock_GetTableSize; }
namespace SRDebugger::UI::Controls { class TableSize; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_CHECKOBJECT_OFFSET UNITYSDK_OFFSET(0x2000E8E0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_CTOR_OFFSET UNITYSDK_OFFSET(0x2000EBE0)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONDATAREADY_OFFSET UNITYSDK_OFFSET(0x2000E480)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x2000E430)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x2000E450)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONENABLE_OFFSET UNITYSDK_OFFSET(0x2000E270)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_TRIGGERTABLEREFRESH_OFFSET UNITYSDK_OFFSET(0x2000E400)
#define SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_UPDATE_OFFSET UNITYSDK_OFFSET(0x2000E300)

namespace SRDebugger::UI::Controls
{
	inline static constexpr unsigned int ProfilerTableMemoryBlock_TypeDefinitionIndex = 38963;

	class ProfilerTableMemoryBlock : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::System::Single _lastRefresh; // 0x48
		::System::Byte _padding0[0x4];
		::System::Collections::Generic::List_1<::SRDebugger::UI::Controls::TableSize*>* tableSizes; // 0x50
		::System::Collections::Generic::List_1<::UnityEngine::UI::Text*>* texts; // 0x58
		static ::SRDebugger::UI::Controls::ProfilerTableMemoryBlock_GetTableSize** StaticGet_OnGetTable()
		{
			return (::SRDebugger::UI::Controls::ProfilerTableMemoryBlock_GetTableSize**)UnitySDK::FromName("SRDebugger.UI.Controls", "ProfilerTableMemoryBlock")->GetStaticField(0x34410);
		}

		static ::System::Action** StaticGet_DataReady()
		{
			return (::System::Action**)UnitySDK::FromName("SRDebugger.UI.Controls", "ProfilerTableMemoryBlock")->GetStaticField(0x34418);
		}

		static ::System::Boolean* StaticGet_TriggerRefresh()
		{
			return (::System::Boolean*)UnitySDK::FromName("SRDebugger.UI.Controls", "ProfilerTableMemoryBlock")->GetStaticField(0xB0D0);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_UPDATE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONDESTROY_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONDISABLE_OFFSET))(this);
		}

		::System::Void TriggerTableRefresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_TRIGGERTABLEREFRESH_OFFSET))(this);
		}

		::System::Void OnDataReady()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_ONDATAREADY_OFFSET))(this);
		}

		::System::Void CheckObject()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_CONTROLS_PROFILERTABLEMEMORYBLOCK_CHECKOBJECT_OFFSET))(this);
		}

	};
}
