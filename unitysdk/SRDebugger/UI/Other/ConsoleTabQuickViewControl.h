#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SRF/SRMonoBehaviourEx.h"
namespace SRDebugger::Services { class IConsoleService; }
namespace System { class String; }
namespace UnityEngine::UI { class Text; }

#define SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_AWAKE_OFFSET UNITYSDK_OFFSET(0x1ED61EE0)
#define SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_CCTOR_OFFSET UNITYSDK_OFFSET(0x1ED62510)
#define SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1ED62500)
#define SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_HASCHANGED_OFFSET UNITYSDK_OFFSET(0x1ED624D0)
#define SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_UPDATE_OFFSET UNITYSDK_OFFSET(0x1ED620A0)

namespace SRDebugger::UI::Other
{
	class ConsoleTabQuickViewControl : public ::SRF::SRMonoBehaviourEx
	{
	public:
		::System::Int32 _prevErrorCount; // 0x48
		::System::Int32 _prevInfoCount; // 0x4C
		::System::Int32 _prevWarningCount; // 0x50
		::System::Byte _padding0[0x4];
		::SRDebugger::Services::IConsoleService* ConsoleService; // 0x58
		::UnityEngine::UI::Text* ErrorCountText; // 0x60
		::UnityEngine::UI::Text* InfoCountText; // 0x68
		::UnityEngine::UI::Text* WarningCountText; // 0x70
		static ::System::String** StaticGet_MaxString()
		{
			return (::System::String**)UnitySDK::FromName("SRDebugger.UI.Other", "ConsoleTabQuickViewControl")->GetStaticField(0x3C800);
		}

		// static const ::System::Object Max; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_CCTOR_OFFSET))();
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_AWAKE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_UPDATE_OFFSET))(this);
		}

		static ::System::Boolean HasChanged(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SRDEBUGGER_UI_OTHER_CONSOLETABQUICKVIEWCONTROL_HASCHANGED_OFFSET))(a1, a2, a3);
		}

	};
}
