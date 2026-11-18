#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class BPHGNMNLLHF;
class DMIBKFPGCEH;
class HJGOAJHNEGC;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIInLevelPauseTalentRowWidgetController; }
namespace MoleMole { class UITabBtnRoleRowWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_CIDLGNBNPHJ_OFFSET UNITYSDK_OFFSET(0x18F577D0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ELJHMFBMLAO_OFFSET UNITYSDK_OFFSET(0x18F580F0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_FDEHCCMMNIL_OFFSET UNITYSDK_OFFSET(0x18F565A0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_JKHKNBFJCLL_OFFSET UNITYSDK_OFFSET(0x18F581C0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_NCDIDCOFIND_OFFSET UNITYSDK_OFFSET(0x18F57750)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_NCPCPDBKOBH_OFFSET UNITYSDK_OFFSET(0x18F581D0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_OLJKPBLKLGM_OFFSET UNITYSDK_OFFSET(0x18F576C0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F570D0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18F57160)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18F56460)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18F564C0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x18F57470)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18F57210)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18F57480)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18F57510)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18F575A0)
#define MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18F57630)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPauseTalentlWidgetController_TypeDefinitionIndex = 83490;

	class UIInLevelPauseTalentlWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		static ::System::Int32* StaticGet_MJLOPCIMLKH()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPauseTalentlWidgetController_TypeDefinitionIndex)->GetStaticField(0x11550);
		}
		// static const ::System::Int32 MJDHLMALBIM = 0x8; // 0x0
		::DMIBKFPGCEH* _view; // 0x2C8
		::System::Collections::Generic::List_1<::Foundation::Coroutine::CoroutineHandle>* KEOIBHMAGAP; // 0x2D0
		::System::Collections::Generic::List_1<::MoleMole::UIInLevelPauseTalentRowWidgetController*>* FNINLNCFIDE; // 0x2D8
		::System::Collections::Generic::List_1<::System::Int32>* PKMCKAEDFDB; // 0x2E0
		::System::Collections::Generic::List_1<::BPHGNMNLLHF*>* JCNADGPKCCH; // 0x2E8
		::System::Collections::Generic::List_1<::HJGOAJHNEGC*>* KDDPDKIJFAH; // 0x2F0
		::System::Int32 NNNHDDAADJK; // 0x2F8
		::System::Int32 FFGDHCMPPCJ; // 0x2FC
		::System::Collections::Generic::List_1<::MoleMole::UITabBtnRoleRowWidgetController*>* PPIBEBPIBHG; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void FDEHCCMMNIL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_FDEHCCMMNIL_OFFSET))(this);
		}

		::System::Int32 NCDIDCOFIND(::System::Int32 IHOJNIIBOEL)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_NCDIDCOFIND_OFFSET))(this, IHOJNIIBOEL);
		}

		::System::Void OLJKPBLKLGM(::System::Int32 ABHBKFJKINO, ::System::Boolean OFJOIMFKEKA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_OLJKPBLKLGM_OFFSET))(this, ABHBKFJKINO, OFJOIMFKEKA);
		}

		::System::Void CIDLGNBNPHJ(::System::Boolean OFJOIMFKEKA)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_CIDLGNBNPHJ_OFFSET))(this, OFJOIMFKEKA);
		}

		::System::Void ELJHMFBMLAO()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_ELJHMFBMLAO_OFFSET))(this);
		}

		::System::Void JKHKNBFJCLL(::System::Int32 HBJOLKHGGDD)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_JKHKNBFJCLL_OFFSET))(this, HBJOLKHGGDD);
		}

		::System::Void NCPCPDBKOBH(::System::EventArgs* KOIBHLHLMFC)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSETALENTLWIDGETCONTROLLER_NCPCPDBKOBH_OFFSET))(this, KOIBHLHLMFC);
		}
	};
}
