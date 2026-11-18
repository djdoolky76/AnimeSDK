#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class CJNGKDMBMDA;
class EHGKMFAFHFM;
class LDFHMJCIGDC;
namespace MoleMole { class UIAbyssS2MapInLevelItemRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_GET_MODEL_OFFSET UNITYSDK_OFFSET(0x16780F10)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_HLAPNEKFIAO_OFFSET UNITYSDK_OFFSET(0x167815A0)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_JPHMIGDOKKI_OFFSET UNITYSDK_OFFSET(0x16781680)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_NPAIFCJFDCM_OFFSET UNITYSDK_OFFSET(0x167815F0)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16780FE0)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x167810F0)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16781070)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16780DB0)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16781340)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16781350)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x167813E0)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16781480)
#define MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16781510)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooBuffRowWidgetController_TypeDefinitionIndex = 43922;

	class UIRidusGotBooBuffRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::System::Action_1<::MoleMole::UIAbyssS2MapInLevelItemRowWidgetController*>* ClickHandle; // 0x2F8
		::System::Boolean CFMOBOFLMPC; // 0x300
		::System::Byte _padding0[0x7];
		::LDFHMJCIGDC* LHPFMGBDFPN; // 0x308
		::EHGKMFAFHFM* _view; // 0x310
		::CJNGKDMBMDA* DLEPGPECKLE; // 0x318
		::System::Int32 m_levelID; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::LDFHMJCIGDC* get_Model()
		{
			return ((::LDFHMJCIGDC*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_GET_MODEL_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void HLAPNEKFIAO(::System::Boolean EBFCACIEKBC)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_HLAPNEKFIAO_OFFSET))(this, EBFCACIEKBC);
		}

		::System::Void NPAIFCJFDCM()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_NPAIFCJFDCM_OFFSET))(this);
		}

		::System::Void JPHMIGDOKKI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOBUFFROWWIDGETCONTROLLER_JPHMIGDOKKI_OFFSET))(this);
		}
	};
}
