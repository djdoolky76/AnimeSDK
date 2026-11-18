#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/LIBOIKJGAIH.h"

class BPNGLLLIMDC;
class CFJOIHGDLHO;
class EGOPHPIBPJJ;
class LBNBIMMAOPJ;
class MEKACGJBPGE;
class OFFMCMEPFHI;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_ABDLEONNPAJ_OFFSET UNITYSDK_OFFSET(0x14BE81E0)
#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET UNITYSDK_OFFSET(0x14BE7A60)
#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14BE78C0)
#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14BE7AD0)
#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_PHFLKPBMBPI_OFFSET UNITYSDK_OFFSET(0x14BE8B70)
#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14BE8880)
#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x14BE8A30)
#define MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14BE8AD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS3EntranceMainWidgetController_TypeDefinitionIndex = 66109;

	class UIAbyssS3EntranceMainWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Int32 OHEHFFGHMMB; // 0x2C8
		::System::Byte _padding0[0x4];
		::BPNGLLLIMDC* PJIMHAAOKLF; // 0x2D0
		::CFJOIHGDLHO* PJNFAOIBBAN; // 0x2D8
		::System::Collections::Generic::List_1<::LBNBIMMAOPJ*>* MJKFMNHMNEN; // 0x2E0
		::MEKACGJBPGE* JHOMNFBFFBN; // 0x2E8
		::LBNBIMMAOPJ* KJCBHPCLLCH; // 0x2F0
		::EGOPHPIBPJJ* LAENCNGDKCM; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::LIBOIKJGAIH& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void __base_OnCreateViewModel(::LIBOIKJGAIH& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::LIBOIKJGAIH&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::OFFMCMEPFHI* OGMPOGIHBIK()
		{
			return ((::OFFMCMEPFHI*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_OGMPOGIHBIK_OFFSET))(this);
		}

		::System::Void ABDLEONNPAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_ABDLEONNPAJ_OFFSET))(this);
		}

		::System::Void PHFLKPBMBPI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS3ENTRANCEMAINWIDGETCONTROLLER_PHFLKPBMBPI_OFFSET))(this);
		}
	};
}
