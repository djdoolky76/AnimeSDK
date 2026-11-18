#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UITowerDefenseTabBtnWidgetController.h"
#include "unitysdk/Foundation/AssetPath.h"

class ELOBFJJKFKJ;
namespace MoleMole { class UIControlReference; }
namespace System { class String; }

#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_DMLIKKKCILM_OFFSET UNITYSDK_OFFSET(0x1805FE90)
#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_GPEJBAFGNHI_OFFSET UNITYSDK_OFFSET(0x18060020)
#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_IGGBLHGPPHD_OFFSET UNITYSDK_OFFSET(0x18060180)
#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19D431F0)
#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x19D432F0)
#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1805FDA0)
#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1805FDB0)
#define MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER___BASE_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x1805FE80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVTabBtnWidgetController_TypeDefinitionIndex = 78543;

	class UIBangBooUAVTabBtnWidgetController : public ::MoleMole::UITowerDefenseTabBtnWidgetController
	{
	public:
		::ELOBFJJKFKJ* _view; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshView(::System::Int32 levelid)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, levelid);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_RefreshView(::System::Int32 P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER___BASE_REFRESHVIEW_OFFSET))(this, P0);
		}

		::Foundation::AssetPath DMLIKKKCILM(::System::Int32 EHDMGHBOJJM)
		{
			return ((::Foundation::AssetPath(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_DMLIKKKCILM_OFFSET))(this, EHDMGHBOJJM);
		}

		::System::String* GPEJBAFGNHI(::System::Int32 EHDMGHBOJJM)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_GPEJBAFGNHI_OFFSET))(this, EHDMGHBOJJM);
		}

		::System::Boolean IGGBLHGPPHD(::System::Int32 EHDMGHBOJJM)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVTABBTNWIDGETCONTROLLER_IGGBLHGPPHD_OFFSET))(this, EHDMGHBOJJM);
		}
	};
}
