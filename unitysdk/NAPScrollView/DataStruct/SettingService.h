#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NAPSCROLLVIEW_DATASTRUCT_SETTINGSERVICE_GET_AUTOFORLOOP_OFFSET UNITYSDK_OFFSET(0x105A0A60)
#define NAPSCROLLVIEW_DATASTRUCT_SETTINGSERVICE_GET_FIXDELTA_OFFSET UNITYSDK_OFFSET(0x105A0A20)
#define NAPSCROLLVIEW_DATASTRUCT_SETTINGSERVICE_GET_USESCRIPTCONTENTSIZEREPLACELAYOUT_OFFSET UNITYSDK_OFFSET(0x105A0A40)
#define NAPSCROLLVIEW_DATASTRUCT_SETTINGSERVICE_SET_AUTOFORLOOP_OFFSET UNITYSDK_OFFSET(0x105A0A70)
#define NAPSCROLLVIEW_DATASTRUCT_SETTINGSERVICE_SET_FIXDELTA_OFFSET UNITYSDK_OFFSET(0x105A0A30)
#define NAPSCROLLVIEW_DATASTRUCT_SETTINGSERVICE_SET_USESCRIPTCONTENTSIZEREPLACELAYOUT_OFFSET UNITYSDK_OFFSET(0x105A0A50)
#define NAPSCROLLVIEW_DATASTRUCT_SETTINGSERVICE__CTOR_OFFSET UNITYSDK_OFFSET(0x105A0A80)

namespace NAPScrollView::DataStruct
{
	inline static constexpr unsigned int SettingService_TypeDefinitionIndex = 67978;

	class SettingService : public ::System::Object
	{
	public:
		::System::Single _FixDelta_k__BackingField; // 0x10
		::System::Boolean ReplaceOptimize; // 0x14
		::System::Boolean DisableDrag; // 0x15
		::System::Boolean _UseScriptContentSizeReplaceLayout_k__BackingField; // 0x16
		::System::Boolean _AutoForLoop_k__BackingField; // 0x17

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SETTINGSERVICE__CTOR_OFFSET))(this);
		}

		::System::Single get_FixDelta()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SETTINGSERVICE_GET_FIXDELTA_OFFSET))(this);
		}

		::System::Void set_FixDelta(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SETTINGSERVICE_SET_FIXDELTA_OFFSET))(this, value);
		}

		::System::Boolean get_UseScriptContentSizeReplaceLayout()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SETTINGSERVICE_GET_USESCRIPTCONTENTSIZEREPLACELAYOUT_OFFSET))(this);
		}

		::System::Void set_UseScriptContentSizeReplaceLayout(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SETTINGSERVICE_SET_USESCRIPTCONTENTSIZEREPLACELAYOUT_OFFSET))(this, value);
		}

		::System::Boolean get_AutoForLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SETTINGSERVICE_GET_AUTOFORLOOP_OFFSET))(this);
		}

		::System::Void set_AutoForLoop(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NAPSCROLLVIEW_DATASTRUCT_SETTINGSERVICE_SET_AUTOFORLOOP_OFFSET))(this, value);
		}
	};
}
