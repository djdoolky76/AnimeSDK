#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Ui/Samples/TabViewSampleControl_SampleMode.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client { class TabView; }
namespace RPG::Client::Ui::Samples { class TabViewSampleViewModel; }
namespace Sofa::Runtime { class TabHeaderImageControl; }
namespace System { class IDisposable; }

#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1DBC8540)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL_GET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0x1DBC7E20)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL_SET_TYPEDDATACONTEXT_OFFSET UNITYSDK_OFFSET(0x1DBC7ED0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__BUILDTABSDATADRIVEN_OFFSET UNITYSDK_OFFSET(0x1DBC8370)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__BUILDTABSIMPERATIVE_OFFSET UNITYSDK_OFFSET(0x1DBC82D0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__BUILDTABSSTATIC_OFFSET UNITYSDK_OFFSET(0x1DBC80B0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1DBC7FC0)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1DBC8400)
#define RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1DBC7F20)

namespace RPG::Client::Ui::Samples
{
	inline static constexpr unsigned int TabViewSampleControl_TypeDefinitionIndex = 75584;

	class TabViewSampleControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::TabView* _TabView; // 0x40
		::Sofa::Runtime::TabHeaderImageControl* _HeaderPrefab; // 0x48
		::RPG::Client::Ui::Samples::TabViewSampleControl_SampleMode _Mode; // 0x50
		::System::Byte _padding0[0x4];
		::System::IDisposable* _ItemsSourceSubscription; // 0x58
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL_CTOR_OFFSET))(this);
		}

		::RPG::Client::Ui::Samples::TabViewSampleViewModel* get_TypedDataContext()
		{
			return ((::RPG::Client::Ui::Samples::TabViewSampleViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL_GET_TYPEDDATACONTEXT_OFFSET))(this);
		}

		::System::Void set_TypedDataContext(::RPG::Client::Ui::Samples::TabViewSampleViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Ui::Samples::TabViewSampleViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL_SET_TYPEDDATACONTEXT_OFFSET))(this, a1);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__ONDESTROY_OFFSET))(this);
		}

		::System::Void _BuildTabsStatic()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__BUILDTABSSTATIC_OFFSET))(this);
		}

		::System::Void _BuildTabsImperative()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__BUILDTABSIMPERATIVE_OFFSET))(this);
		}

		::System::Void _BuildTabsDataDriven()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI_SAMPLES_TABVIEWSAMPLECONTROL__BUILDTABSDATADRIVEN_OFFSET))(this);
		}

	};
}
