#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UIAbyssS2HeatRowWidgetController_PointRootState.h"

class BPNGLLLIMDC;
class JKEJELKPABD;
class KCFJHPCMEMB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIYorozuyaS2DifficultyInfoWidgetController; }
namespace MoleMole { class UIYorozuyaS2DifficultyInfoWidgetController_AbyssHeatData; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_AMGBGFDJNFG_OFFSET UNITYSDK_OFFSET(0x198E98A0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_GETABYSSPOINT_OFFSET UNITYSDK_OFFSET(0x198E9A90)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_GET_HEADID_OFFSET UNITYSDK_OFFSET(0x198E9520)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_HAEEPMMHBGJ_OFFSET UNITYSDK_OFFSET(0x198E9DB0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ISSELECT_OFFSET UNITYSDK_OFFSET(0x198EA020)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x198E9180)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x198E9F70)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x198E9290)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x198E9210)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x198E8ED0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_PPJCGNMHGDP_OFFSET UNITYSDK_OFFSET(0x198EA2D0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_REFRESHUIBYPOINTROOTSTATE_OFFSET UNITYSDK_OFFSET(0x198E9540)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_SETHEATID_OFFSET UNITYSDK_OFFSET(0x198E94B0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x198E9AE0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x198EA070)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x198EA080)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x198EA110)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x198EA1B0)
#define MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x198EA240)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2HeatRowWidgetController_TypeDefinitionIndex = 57872;

	class UIAbyssS2HeatRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::KCFJHPCMEMB* _view; // 0x2F8
		::System::Int32 MLNKCNJEOMI; // 0x300
		::System::Byte _padding0[0x4];
		::MoleMole::UIYorozuyaS2DifficultyInfoWidgetController_AbyssHeatData* EFFAONJBCOG; // 0x308
		::System::Action_2<::System::Int32, ::System::Boolean>* DDOGCINOION; // 0x310
		::System::Action* AGPBKAIBNEC; // 0x318
		::BPNGLLLIMDC* PJIMHAAOKLF; // 0x320
		::System::Boolean GPAPKNPENGB; // 0x328
		::System::Byte _padding1[0x3];
		::MoleMole::UIAbyssS2HeatRowWidgetController_PointRootState KHOIFJNEPPA; // 0x32C
		::JKEJELKPABD* CEJENBBHBBG; // 0x330
		::MoleMole::UIYorozuyaS2DifficultyInfoWidgetController* LJOGPIIDFHE; // 0x338
		::System::Int32 KEBNHBOJCFF; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshUIByPointRootState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_REFRESHUIBYPOINTROOTSTATE_OFFSET))(this);
		}

		::System::Int32 GetAbyssPoint()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_GETABYSSPOINT_OFFSET))(this);
		}

		::System::Void SetHeatID(::JKEJELKPABD* heatConfig, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::JKEJELKPABD*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_SETHEATID_OFFSET))(this, heatConfig, index);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ONENABLE_OFFSET))(this);
		}

		::System::Boolean IsSelect()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_ISSELECT_OFFSET))(this);
		}

		::System::Int32 get_HeadID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_GET_HEADID_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Boolean AMGBGFDJNFG()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_AMGBGFDJNFG_OFFSET))(this);
		}

		::System::Void PPJCGNMHGDP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_PPJCGNMHGDP_OFFSET))(this);
		}

		::System::Void HAEEPMMHBGJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2HEATROWWIDGETCONTROLLER_HAEEPMMHBGJ_OFFSET))(this);
		}
	};
}
