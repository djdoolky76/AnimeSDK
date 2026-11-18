#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BNFNAFKBHBN.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/Foundation/AssetPath.h"

class BEGHDBCKGDO;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_BJJPDMNEKNF_OFFSET UNITYSDK_OFFSET(0x167E76C0)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_GETVIEW_OFFSET UNITYSDK_OFFSET(0x167E7910)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167E6E80)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x167E7020)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x167E6F90)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x167E7120)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167E6F10)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167E6D30)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_SETICONANDTEXT_OFFSET UNITYSDK_OFFSET(0x167E74B0)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167E7960)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167E7970)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x167E7A00)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x167E7A90)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x167E7B20)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167E7BC0)
#define MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167E7C50)

namespace MoleMole
{
	inline static constexpr unsigned int UITabBtn03Row_IconWidgetController_TypeDefinitionIndex = 62566;

	class UITabBtn03Row_IconWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::BEGHDBCKGDO* _view; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetIconAndText(::System::String* titleText, ::Foundation::AssetPath iconPath, ::BNFNAFKBHBN iconType)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::Foundation::AssetPath, ::BNFNAFKBHBN))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_SETICONANDTEXT_OFFSET))(this, titleText, iconPath, iconType);
		}

		::BEGHDBCKGDO* GetView()
		{
			return ((::BEGHDBCKGDO*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_GETVIEW_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void BJJPDMNEKNF(::Share::ENotificationBadgeType OBNIAHNMHPF, ::System::UInt32 MGMDLMBEDJF)
		{
			return ((::System::Void(*)(::PVOID, ::Share::ENotificationBadgeType, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UITABBTN03ROW_ICONWIDGETCONTROLLER_BJJPDMNEKNF_OFFSET))(this, OBNIAHNMHPF, MGMDLMBEDJF);
		}
	};
}
