#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client { class UILineRenderer; }
namespace RPG::Client { class UIValueChangeAnimation; }
namespace RPG::Client::ChenLingFes { class ChenLingFesFeverProgressViewModel; }
namespace System { class Object; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1E2781E0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1E277AE0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1E277720)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1E2775F0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1E277C50)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__REFRESHPROGRESSWITHLERP_OFFSET UNITYSDK_OFFSET(0x1E277D90)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__REFRESHPROGRESS_OFFSET UNITYSDK_OFFSET(0x1E277BE0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesFeverProgressLineControl_TypeDefinitionIndex = 84083;

	class ChenLingFesFeverProgressLineControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::UILineRenderer* _LineRenderer; // 0x40
		::RPG::Client::UIValueChangeAnimation* _ValueChangeAnimation; // 0x48
		::System::Single _ProgressValue; // 0x50
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL_CTOR_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnViewModelPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshProgressWithLerp()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__REFRESHPROGRESSWITHLERP_OFFSET))(this);
		}

		::System::Void _RefreshProgress(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL__REFRESHPROGRESS_OFFSET))(this, a1);
		}

		::RPG::Client::ChenLingFes::ChenLingFesFeverProgressViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesFeverProgressViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESFEVERPROGRESSLINECONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
