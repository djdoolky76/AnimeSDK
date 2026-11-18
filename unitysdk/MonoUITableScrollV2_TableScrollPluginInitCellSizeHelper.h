#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPlugin.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginInitCellSizeHelper___c__DisplayClass10_0.h"
#include "unitysdk/MonoUITableScrollV2_TableScrollPluginInitCellSizeHelper___c__DisplayClass11_0.h"

namespace NAPScrollView::DataStruct { class IScrollViewPluginServiceProvider; }
namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_CHECKCELLSIZEVALID_OFFSET UNITYSDK_OFFSET(0x11398B00)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_GET_MINCELLSIZE_OFFSET UNITYSDK_OFFSET(0x11397640)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_INITCELLSIZEINNER_OFFSET UNITYSDK_OFFSET(0x113977E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_INITCELLSIZE_1_OFFSET UNITYSDK_OFFSET(0x11397530)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_INITCELLSIZE_OFFSET UNITYSDK_OFFSET(0x113976C0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_MARKCELLSIZEDIRTY_OFFSET UNITYSDK_OFFSET(0x11398120)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_REGISTERCUSTOMTEMPLATEPROVIDER_OFFSET UNITYSDK_OFFSET(0x11397660)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_SETMINCELLSIZE_OFFSET UNITYSDK_OFFSET(0x11398480)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_SET_MINCELLSIZE_OFFSET UNITYSDK_OFFSET(0x11397650)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_UPDATE_OFFSET UNITYSDK_OFFSET(0x113974E0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER__CTOR_OFFSET UNITYSDK_OFFSET(0x11397460)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER__INITCELLSIZEINNER_G__PROCESSTEMPINSTANCE_10_0_OFFSET UNITYSDK_OFFSET(0x11398160)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER__SETMINCELLSIZE_G__GETMINCELLSIZE_11_0_OFFSET UNITYSDK_OFFSET(0x113987A0)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER___BASE_UPDATE_OFFSET UNITYSDK_OFFSET(0x11398DB0)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginInitCellSizeHelper_TypeDefinitionIndex = 40127;

class MonoUITableScrollV2_TableScrollPluginInitCellSizeHelper : public ::MonoUITableScrollV2_TableScrollPlugin
{
public:
	::System::Func_1<::UnityEngine::GameObject*>* _customTemplateProvider; // 0x18
	::System::Action_1<::UnityEngine::GameObject*>* _afterUseCustomTemplate; // 0x20
	::UnityEngine::Vector2 _MinCellSize_k__BackingField; // 0x28
	::System::Int32 _templateIndex; // 0x30
	::System::Boolean _cellSizeValid; // 0x34

	::System::Void _ctor(::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider* pluginServices)
	{
		return ((::System::Void(*)(::PVOID, ::NAPScrollView::DataStruct::IScrollViewPluginServiceProvider*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER__CTOR_OFFSET))(this, pluginServices);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_UPDATE_OFFSET))(this);
	}

	::UnityEngine::Vector2 get_MinCellSize()
	{
		return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_GET_MINCELLSIZE_OFFSET))(this);
	}

	::System::Void set_MinCellSize(::UnityEngine::Vector2 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_SET_MINCELLSIZE_OFFSET))(this, value);
	}

	::System::Void RegisterCustomTemplateProvider(::System::Func_1<::UnityEngine::GameObject*>* provider, ::System::Action_1<::UnityEngine::GameObject*>* afterUseCustomTemplate)
	{
		return ((::System::Void(*)(::PVOID, ::System::Func_1<::UnityEngine::GameObject*>*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_REGISTERCUSTOMTEMPLATEPROVIDER_OFFSET))(this, provider, afterUseCustomTemplate);
	}

	::System::Void InitCellSize(::System::Int32 templateIndex)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_INITCELLSIZE_OFFSET))(this, templateIndex);
	}

	::System::Void InitCellSize_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_INITCELLSIZE_1_OFFSET))(this);
	}

	::System::Void MarkCellSizeDirty()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_MARKCELLSIZEDIRTY_OFFSET))(this);
	}

	::System::Void InitCellSizeInner()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_INITCELLSIZEINNER_OFFSET))(this);
	}

	::System::Void SetMinCellSize(::UnityEngine::Transform* transform)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_SETMINCELLSIZE_OFFSET))(this, transform);
	}

	::System::Void CheckCellSizeValid(::UnityEngine::RectTransform* rectTransform)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::RectTransform*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER_CHECKCELLSIZEVALID_OFFSET))(this, rectTransform);
	}

	::System::Void _InitCellSizeInner_g__ProcessTempInstance_10_0(::MonoUITableScrollV2_TableScrollPluginInitCellSizeHelper___c__DisplayClass10_0& param_0)
	{
		return ((::System::Void(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginInitCellSizeHelper___c__DisplayClass10_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER__INITCELLSIZEINNER_G__PROCESSTEMPINSTANCE_10_0_OFFSET))(this, param_0);
	}

	::UnityEngine::Vector2 _SetMinCellSize_g__GetMinCellSize_11_0(::MonoUITableScrollV2_TableScrollPluginInitCellSizeHelper___c__DisplayClass11_0& param_0)
	{
		return ((::UnityEngine::Vector2(*)(::PVOID, ::MonoUITableScrollV2_TableScrollPluginInitCellSizeHelper___c__DisplayClass11_0&))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER__SETMINCELLSIZE_G__GETMINCELLSIZE_11_0_OFFSET))(this, param_0);
	}

	::System::Void __base_Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGININITCELLSIZEHELPER___BASE_UPDATE_OFFSET))(this);
	}
};
