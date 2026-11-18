#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class NBLAEBCLJDC;
class PGJMHLNBKKI;
class PHBGAINMEEM;
namespace MoleMole { class MarcelAdvTeamUPContext; }
namespace MoleMole { class ScreenPlayer; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ANNJPINNKJL_OFFSET UNITYSDK_OFFSET(0x16744A80)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_CJAEIBADDOH_OFFSET UNITYSDK_OFFSET(0x16744410)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_DMCCHMAPNHA_OFFSET UNITYSDK_OFFSET(0x167448B0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16743E70)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167441C0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16743720)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16743A00)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHMYBUDDY_OFFSET UNITYSDK_OFFSET(0x16743F00)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHTEAMBUDDY_OFFSET UNITYSDK_OFFSET(0x16743FA0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x167444D0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16744690)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167447F0)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16744880)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16744890)
#define MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167448A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMarcelAdvTeamUP3DModelController_TypeDefinitionIndex = 67235;

	class UIMarcelAdvTeamUP3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Boolean* StaticGet_testScreenWidth()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UIMarcelAdvTeamUP3DModelController_TypeDefinitionIndex)->GetStaticField(0x12E90);
		}
		::NBLAEBCLJDC* _view; // 0x368
		::PHBGAINMEEM* LLJLEPAFACC; // 0x370
		::MoleMole::MarcelAdvTeamUPContext* DKFHDOPAFHH; // 0x378
		::Il2CppArray<::UnityEngine::Transform*>* NFLNNAGGGFN; // 0x380
		::System::Collections::Generic::List_1<::System::String*>* PGHGOJKMGLF; // 0x388
		::MoleMole::ScreenPlayer* NDDNONCGABO; // 0x390
		::System::Int32 ELIEEHFOFND; // 0x398
		::System::Int32 ODGBOPHGKAN; // 0x39C
		::System::Single IICEJGMEBGF; // 0x3A0
		::System::UInt32 OKIPLMFLLHI; // 0x3A4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshMyBuddy(::PGJMHLNBKKI* myPlayerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::PGJMHLNBKKI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHMYBUDDY_OFFSET))(this, myPlayerInfo);
		}

		::System::Void RefreshTeamBuddy(::System::Int32 slot, ::PGJMHLNBKKI* teamPlayerInfo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::PGJMHLNBKKI*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_REFRESHTEAMBUDDY_OFFSET))(this, slot, teamPlayerInfo);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void CJAEIBADDOH(::System::Boolean NJIGFMEAOKN)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_CJAEIBADDOH_OFFSET))(this, NJIGFMEAOKN);
		}

		::System::Void DMCCHMAPNHA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_DMCCHMAPNHA_OFFSET))(this);
		}

		::System::Void ANNJPINNKJL()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMARCELADVTEAMUP3DMODELCONTROLLER_ANNJPINNKJL_OFFSET))(this);
		}
	};
}
