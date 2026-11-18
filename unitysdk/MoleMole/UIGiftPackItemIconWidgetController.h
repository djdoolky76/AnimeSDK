#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class HKIMJFIKNBM;
class ICIPFEOENBB;
class LGINJIKKBJA;
class NBDLJECLJJO;
class OFFJLBKFIMA;
namespace MoleMole { class GiftPackItemIconContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralIconCardRarityWidgetController; }
namespace System { class Object; }

#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_GET_BUTTONSELF_OFFSET UNITYSDK_OFFSET(0x18C53300)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18C53DD0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18C539A0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18C53E60)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18C53360)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18C53780)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_OOBNOGIKODP_OFFSET UNITYSDK_OFFSET(0x18C54300)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_SHOWGOODSDATA_OFFSET UNITYSDK_OFFSET(0x18C53EE0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18C53FC0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18C54020)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x18C540B0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18C54150)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18C541E0)
#define MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18C54270)

namespace MoleMole
{
	inline static constexpr unsigned int UIGiftPackItemIconWidgetController_TypeDefinitionIndex = 91163;

	class UIGiftPackItemIconWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::OFFJLBKFIMA* _view; // 0x2F8
		::MoleMole::UIGeneralIconCardRarityWidgetController* PPAOJMENEMK; // 0x300
		::NBDLJECLJJO* _goodsData; // 0x308
		::MoleMole::GiftPackItemIconContext* DAAAEJDBNFI; // 0x310
		::ICIPFEOENBB* IODFBHKHOJE; // 0x318
		::HKIMJFIKNBM* CJEJHNIOHIA; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::LGINJIKKBJA* get_ButtonSelf()
		{
			return ((::LGINJIKKBJA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_GET_BUTTONSELF_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowGoodsData(::NBDLJECLJJO* goodsData)
		{
			return ((::System::Void(*)(::PVOID, ::NBDLJECLJJO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_SHOWGOODSDATA_OFFSET))(this, goodsData);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void OOBNOGIKODP()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGIFTPACKITEMICONWIDGETCONTROLLER_OOBNOGIKODP_OFFSET))(this);
		}
	};
}
