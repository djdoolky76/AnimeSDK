#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Sofa/BaseSofaControl.h"
namespace RPG::Client { class UIStateCtrl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayGameDayItemControl; }
namespace RPG::Client::ChenLingFes { class ChenLingFesGameplayProgressInfoViewModel; }
namespace System { class Object; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class PropertyChangedEventArgs; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }
namespace UnityEngine::UI { class Text; }

#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL_CTOR_OFFSET UNITYSDK_OFFSET(0x1CC64070)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL_GETNODESTAR_OFFSET UNITYSDK_OFFSET(0x1CC61B20)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC62D50)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL_ONTICK_OFFSET UNITYSDK_OFFSET(0x1CC61B60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONBINDVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x1CC62580)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1CC63630)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET UNITYSDK_OFFSET(0x1CC62120)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1CC63750)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x1CC61BB0)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHHEADERTEXT_OFFSET UNITYSDK_OFFSET(0x1CC62F60)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHNEXTGROUPCHENLINGCOUNT_OFFSET UNITYSDK_OFFSET(0x1CC62E00)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHSTARTEXT_OFFSET UNITYSDK_OFFSET(0x1CC63270)
#define RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHVISIBILITY_OFFSET UNITYSDK_OFFSET(0x1CC633C0)

namespace RPG::Client::ChenLingFes
{
	inline static constexpr unsigned int ChenLingFesGameplayProgressInfoControl_TypeDefinitionIndex = 84097;

	class ChenLingFesGameplayProgressInfoControl : public ::Sofa::BaseSofaControl
	{
	public:
		::RPG::Client::UIStateCtrl* _DayStateCtrl; // 0x40
		::UnityEngine::UI::Image* _ImageDayProgress; // 0x48
		::RPG::Client::UIStateCtrl* _CountDownStateCtrl; // 0x50
		::UnityEngine::UI::Image* _ImageCountDownProgress; // 0x58
		::UnityEngine::Transform* _NodeStar; // 0x60
		::UnityEngine::Transform* _NodeNormal; // 0x68
		::UnityEngine::Transform* _NodeEndless; // 0x70
		::UnityEngine::UI::Text* _TextGameWeek; // 0x78
		::UnityEngine::UI::Text* _TextGameDay; // 0x80
		::UnityEngine::UI::Text* _TextStar; // 0x88
		::UnityEngine::UI::Text* _TextCountDown; // 0x90
		::UnityEngine::Transform* _NodeNextGroupChenLingCount; // 0x98
		::UnityEngine::UI::Text* _TextNextGroupChenLingCount; // 0xA0
		::System::Collections::Generic::List_1<::RPG::Client::ChenLingFes::ChenLingFesGameplayGameDayItemControl*>* _GameDayItems; // 0xA8
		::RPG::Client::ChenLingFes::ChenLingFesGameplayProgressInfoViewModel* _BindedViewModel; // 0xB0
		// static const ::System::String* PrefabPath; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL_CTOR_OFFSET))(this);
		}

		::UnityEngine::Transform* GetNodeStar()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL_GETNODESTAR_OFFSET))(this);
		}

		::System::Void OnTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL_ONTICK_OFFSET))(this);
		}

		::System::Void _OnInitializeComponent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONINITIALIZECOMPONENT_OFFSET))(this);
		}

		::System::Void _OnBindViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONBINDVIEWMODEL_OFFSET))(this);
		}

		::System::Void _OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONDESTROY_OFFSET))(this);
		}

		::System::Void _OnViewModelPropertyChanged(::System::Object* a1, ::System::ComponentModel::PropertyChangedEventArgs* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::ComponentModel::PropertyChangedEventArgs*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__ONVIEWMODELPROPERTYCHANGED_OFFSET))(this, a1, a2);
		}

		::System::Void _RefreshHeaderText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHHEADERTEXT_OFFSET))(this);
		}

		::System::Void _RefreshStarText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHSTARTEXT_OFFSET))(this);
		}

		::System::Void _RefreshNextGroupChenLingCount()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHNEXTGROUPCHENLINGCOUNT_OFFSET))(this);
		}

		::System::Void _RefreshVisibility()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHVISIBILITY_OFFSET))(this);
		}

		::System::Void _RefreshCountDown()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL__REFRESHCOUNTDOWN_OFFSET))(this);
		}

		::RPG::Client::ChenLingFes::ChenLingFesGameplayProgressInfoViewModel* get__ViewModel()
		{
			return ((::RPG::Client::ChenLingFes::ChenLingFesGameplayProgressInfoViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHENLINGFES_CHENLINGFESGAMEPLAYPROGRESSINFOCONTROL_GET__VIEWMODEL_OFFSET))(this);
		}

	};
}
