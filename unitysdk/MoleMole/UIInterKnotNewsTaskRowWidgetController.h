#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class EBJKAEHFPPB;
class GABJJAFFGPH;
namespace MoleMole { class UIControlReference; }
namespace System { class Object; }
namespace System { class String; }

#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_CBNHGIPEMCM_OFFSET UNITYSDK_OFFSET(0x173EAE60)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173E9FF0)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x173EA080)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173EA910)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173E9F90)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_PHDPABGMBAK_OFFSET UNITYSDK_OFFSET(0x173EA990)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x173EA1A0)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x173EB1C0)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x173EB240)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x173EB2D0)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x173EB370)
#define MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x173EB400)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnotNewsTaskRowWidgetController_TypeDefinitionIndex = 91679;

	class UIInterKnotNewsTaskRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::EBJKAEHFPPB* _view; // 0x2F8
		::GABJJAFFGPH* EOPLJOMNMIE; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Int32 questId, ::System::Int32 index, ::System::String* replaceQuestDes)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, questId, index, replaceQuestDes);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void PHDPABGMBAK(::System::Int32 KLJNHMGMDNP, ::System::String* MMFMNDPJPGL)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_PHDPABGMBAK_OFFSET))(this, KLJNHMGMDNP, MMFMNDPJPGL);
		}

		::System::Void CBNHGIPEMCM(::System::Int32 NACGJJKHEJE)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOTNEWSTASKROWWIDGETCONTROLLER_CBNHGIPEMCM_OFFSET))(this, NACGJJKHEJE);
		}
	};
}
