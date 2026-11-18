#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LDGHPCBNKMP_EMEJFLIFJAG.h"
#include "unitysdk/LIBOIKJGAIH.h"

class AAKDBOOMLAM;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x170856B0)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17085450)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x170854F0)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETGREY_OFFSET UNITYSDK_OFFSET(0x170858A0)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETPROGRESSDATA_1_OFFSET UNITYSDK_OFFSET(0x17085D00)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETPROGRESSDATA_OFFSET UNITYSDK_OFFSET(0x17085950)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETSHOWFINISHONCOMPLETE_OFFSET UNITYSDK_OFFSET(0x17085720)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17085D70)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x17085DD0)
#define MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x17085E70)

namespace MoleMole
{
	inline static constexpr unsigned int UIFilmGuideItemProgressWidgetController_TypeDefinitionIndex = 77835;

	class UIFilmGuideItemProgressWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void SetShowFinishOnComplete(::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETSHOWFINISHONCOMPLETE_OFFSET))(this, show);
		}

		::System::Void SetGrey(::System::Boolean isGrey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETGREY_OFFSET))(this, isGrey);
		}

		::System::Void SetProgressData(::System::Int32 itemID, ::System::Int32 total, ::System::Int32 obtained)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETPROGRESSDATA_OFFSET))(this, itemID, total, obtained);
		}

		::System::Void SetProgressData_1(::LDGHPCBNKMP_EMEJFLIFJAG progressData)
		{
			return ((::System::Void(*)(::PVOID, ::LDGHPCBNKMP_EMEJFLIFJAG))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_SETPROGRESSDATA_1_OFFSET))(this, progressData);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::AAKDBOOMLAM* OGMPOGIHBIK()
		{
			return ((::AAKDBOOMLAM*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFILMGUIDEITEMPROGRESSWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}
	};
}
