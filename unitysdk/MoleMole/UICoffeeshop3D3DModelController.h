#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBase3DModelController.h"

class BFKAFBICKBH;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_EFOGNJPLFMG_OFFSET UNITYSDK_OFFSET(0x1A372A20)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1A3736E0)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_LJINNPIKAAJ_OFFSET UNITYSDK_OFFSET(0x1A3731F0)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A373160)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A373670)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A372790)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A373110)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_SETCOFFEECUP_OFFSET UNITYSDK_OFFSET(0x1A3737F0)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_UNLOADCOFFEECUP_OFFSET UNITYSDK_OFFSET(0x1A3738E0)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A373B00)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A373A90)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET UNITYSDK_OFFSET(0x1A373BC0)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A373C00)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A373C90)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A373CA0)
#define MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1A373CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UICoffeeshop3D3DModelController_TypeDefinitionIndex = 69418;

	class UICoffeeshop3D3DModelController : public ::MoleMole::UIBase3DModelController
	{
	public:
		static ::System::Collections::Generic::List_1<::System::String*>** StaticGet_OPCOLBNPEDB()
		{
			return (::System::Collections::Generic::List_1<::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(UICoffeeshop3D3DModelController_TypeDefinitionIndex)->GetStaticField(0x3EE30);
		}
		::BFKAFBICKBH* _view; // 0x368
		::System::String* MOCLPBEPACP; // 0x370
		::UnityEngine::GameObject* MIPKMPLCIKA; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::UnityEngine::GameObject* SetCoffeeCup(::System::String* prefabPath)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_SETCOFFEECUP_OFFSET))(this, prefabPath);
		}

		::System::Void UnloadCoffeeCup()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_UNLOADCOFFEECUP_OFFSET))(this);
		}

		::System::Void __base_InitMainVirtualCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_INITMAINVIRTUALCAMERA_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::UnityEngine::GameObject* EFOGNJPLFMG(::System::String* ABOMFKBGCAJ)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_EFOGNJPLFMG_OFFSET))(this, ABOMFKBGCAJ);
		}

		::System::Void LJINNPIKAAJ()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOFFEESHOP3D3DMODELCONTROLLER_LJINNPIKAAJ_OFFSET))(this);
		}
	};
}
