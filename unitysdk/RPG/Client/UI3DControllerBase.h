#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/NotifyGroup.h"
#include "unitysdk/RPG/Client/NotifyType.h"
#include "unitysdk/RPG/Client/UILayer.h"
#include "unitysdk/RPG/Client/ViewCacheType.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class MonoUIControllerGetter; }
namespace RPG::Client { class NotifyHandler; }
namespace RPG::Client { class UI3DControllerConfig; }
namespace RPG::Client { class UIAsyncPrefabLoaderProxy; }
namespace RPG::Client { class UIContextAssetLoader; }
namespace RPG::Client { class UIController; }
namespace RPG::Client { class UIPrefabLoader; }
namespace RPG::Client::Promises { class Promise; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }
namespace UnityEngine { class Canvas; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UI3DCONTROLLERBASE_ADD_ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C9D1B00)
#define RPG_CLIENT_UI3DCONTROLLERBASE_APPLYCAMERA_OFFSET UNITYSDK_OFFSET(0x1C9D2260)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADMATERIALTO_OFFSET UNITYSDK_OFFSET(0x1C9D2700)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADPREFAB_OFFSET UNITYSDK_OFFSET(0x1C9D2470)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADSPRITETO_OFFSET UNITYSDK_OFFSET(0x1C9D2690)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADTEXTURETO_OFFSET UNITYSDK_OFFSET(0x1C9D2770)
#define RPG_CLIENT_UI3DCONTROLLERBASE_CTOR_OFFSET UNITYSDK_OFFSET(0x1C9D16B0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_DESTROYOBJECT_OFFSET UNITYSDK_OFFSET(0x1C9D2620)
#define RPG_CLIENT_UI3DCONTROLLERBASE_DESTROY_OFFSET UNITYSDK_OFFSET(0x1C9D1E50)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GETENVIRONMENTPROFILEPATH_OFFSET UNITYSDK_OFFSET(0x1C9D1AB0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GETLINKEDUI2DS_OFFSET UNITYSDK_OFFSET(0x1C9D1C50)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GET_ASSETLOADER_OFFSET UNITYSDK_OFFSET(0x1C9D1A70)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GET_CAMERA_OFFSET UNITYSDK_OFFSET(0x1C9D19B0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GET_CONFIG_OFFSET UNITYSDK_OFFSET(0x1C9D1850)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GET_NAME_OFFSET UNITYSDK_OFFSET(0x1C9D1780)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GET_PREFABLOADER_OFFSET UNITYSDK_OFFSET(0x1C9D1A30)
#define RPG_CLIENT_UI3DCONTROLLERBASE_GET_ROOT_OFFSET UNITYSDK_OFFSET(0x1C9D19F0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_INSTANTIATEOBJECT_OFFSET UNITYSDK_OFFSET(0x1C9D2400)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x1C9D1930)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ISDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C9D18F0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ISLOADED_OFFSET UNITYSDK_OFFSET(0x1C9D1890)
#define RPG_CLIENT_UI3DCONTROLLERBASE_LOADMATERIALTO_OFFSET UNITYSDK_OFFSET(0x1A0D3B40)
#define RPG_CLIENT_UI3DCONTROLLERBASE_LOADSPRITETO_OFFSET UNITYSDK_OFFSET(0x1A0D39F0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_LOADTEXTURETO_OFFSET UNITYSDK_OFFSET(0x1A0D3C90)
#define RPG_CLIENT_UI3DCONTROLLERBASE_LOADVIEW_OFFSET UNITYSDK_OFFSET(0x1C9D22D0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ONLINKEDUI2DCHANGED_OFFSET UNITYSDK_OFFSET(0x1C9D1C00)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ONRELOADENVIRONMENT_OFFSET UNITYSDK_OFFSET(0x1C9D1BC0)
#define RPG_CLIENT_UI3DCONTROLLERBASE_ONVIEWSET_OFFSET UNITYSDK_OFFSET(0x1C9D1D40)
#define RPG_CLIENT_UI3DCONTROLLERBASE_OVERRIDEDOFCONFIG_OFFSET UNITYSDK_OFFSET(0x1A0D3E40)
#define RPG_CLIENT_UI3DCONTROLLERBASE_REMOVE_ONDESTROYED_OFFSET UNITYSDK_OFFSET(0x1C9D1B60)
#define RPG_CLIENT_UI3DCONTROLLERBASE_SETACTIVE_OFFSET UNITYSDK_OFFSET(0x1C9D2120)
#define RPG_CLIENT_UI3DCONTROLLERBASE_SETDOFENABLE_OFFSET UNITYSDK_OFFSET(0x1A0D4000)
#define RPG_CLIENT_UI3DCONTROLLERBASE_SYNCLOADPREFAB_OFFSET UNITYSDK_OFFSET(0x1C9D2580)
#define RPG_CLIENT_UI3DCONTROLLERBASE_TICK_OFFSET UNITYSDK_OFFSET(0x1A0D4100)
#define RPG_CLIENT_UI3DCONTROLLERBASE_VIEWLOADPROMISE_OFFSET UNITYSDK_OFFSET(0x1C9D1970)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ADDHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A0D4670)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ADDLAYOUTNOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A0D51C0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ADDNOTIFYHANDLER_OFFSET UNITYSDK_OFFSET(0x1A0D43D0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ADDTICK_OFFSET UNITYSDK_OFFSET(0x1A0D41E0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__BINDCAMERA_OFFSET UNITYSDK_OFFSET(0x1A0D4F70)
#define RPG_CLIENT_UI3DCONTROLLERBASE__BINDROOT_OFFSET UNITYSDK_OFFSET(0x1A0D4E80)
#define RPG_CLIENT_UI3DCONTROLLERBASE__FINDSOURCECAMERA_OFFSET UNITYSDK_OFFSET(0x1A0D4ED0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__INITCANVAS_OFFSET UNITYSDK_OFFSET(0x1A0D50B0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__INITINCONTROL_OFFSET UNITYSDK_OFFSET(0x1A0D5150)
#define RPG_CLIENT_UI3DCONTROLLERBASE__LOADVIEW_B__46_0_OFFSET UNITYSDK_OFFSET(0x1A0D55B0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ONACTIVECHANGE_OFFSET UNITYSDK_OFFSET(0x1A0D46F0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ONDISPOSE_OFFSET UNITYSDK_OFFSET(0x1A0D4630)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ONLOAD_OFFSET UNITYSDK_OFFSET(0x1A0D45F0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ONTICK_OFFSET UNITYSDK_OFFSET(0x1A0D4740)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ONUISCREENSIZECHANGEDNOTIFY_OFFSET UNITYSDK_OFFSET(0x1A0D54F0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ONUISCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x1A0D47A0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__ONVIEWLOADED_OFFSET UNITYSDK_OFFSET(0x1A0D4B40)
#define RPG_CLIENT_UI3DCONTROLLERBASE__RAISEDESTROYED_OFFSET UNITYSDK_OFFSET(0x1A0D52C0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__RELEASEVIEW_OFFSET UNITYSDK_OFFSET(0x1A0D4A10)
#define RPG_CLIENT_UI3DCONTROLLERBASE__RELEASEVOLUMEPROFILE_OFFSET UNITYSDK_OFFSET(0x1A0D48D0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__REMOVENOTIFYHANDLERS_OFFSET UNITYSDK_OFFSET(0x1A0D44F0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__REMOVETICK_OFFSET UNITYSDK_OFFSET(0x1A0D42B0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__RESOLVEPROMISE_OFFSET UNITYSDK_OFFSET(0x1A0D5260)
#define RPG_CLIENT_UI3DCONTROLLERBASE__SETROOTACTIVE_OFFSET UNITYSDK_OFFSET(0x1A0D47E0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__SETTICKABLE_OFFSET UNITYSDK_OFFSET(0x1A0D4880)
#define RPG_CLIENT_UI3DCONTROLLERBASE__SETUPVIEW_OFFSET UNITYSDK_OFFSET(0x1A0D46B0)
#define RPG_CLIENT_UI3DCONTROLLERBASE__UPDATEINCONTROLTOPUI_OFFSET UNITYSDK_OFFSET(0x1A0D5330)

namespace RPG::Client
{
	inline static constexpr unsigned int UI3DControllerBase_TypeDefinitionIndex = 75110;

	class UI3DControllerBase : public ::System::Object
	{
	public:
		::RPG::Client::UIPrefabLoader* _PrefabLoader; // 0x10
		::UnityEngine::Transform* _Root; // 0x18
		::System::Action* OnDestroyed; // 0x20
		::UnityEngine::Camera* _Camera; // 0x28
		::RPG::Client::Promises::Promise* _ViewLoadPromise; // 0x30
		::RPG::Client::MonoUIControllerGetter* _UIControllerGetter; // 0x38
		::System::Collections::Generic::List_1<::System::Object*>* _NotifyHandlers; // 0x40
		::RPG::Client::UI3DControllerConfig* _Config; // 0x48
		::UnityEngine::Camera* _SourceCamera; // 0x50
		::RPG::Client::UIContextAssetLoader* _AssetLoader; // 0x58
		::RPG::Client::ViewCacheType _CacheType; // 0x60
		::RPG::Client::UILayer _Layer; // 0x64
		::System::Boolean _IsDestroyed; // 0x68
		::System::Boolean _Tickable; // 0x69
		::System::Boolean _VolumeOverride; // 0x6A
		::System::Boolean _AsyncLoading; // 0x6B
		::System::Boolean _IsActive; // 0x6C
		::System::Boolean _ViewSet; // 0x6D
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_CTOR_OFFSET))(this);
		}

		::System::String* get_Name()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GET_NAME_OFFSET))(this);
		}

		::RPG::Client::UI3DControllerConfig* get_Config()
		{
			return ((::RPG::Client::UI3DControllerConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GET_CONFIG_OFFSET))(this);
		}

		::System::Boolean IsLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ISLOADED_OFFSET))(this);
		}

		::System::Boolean IsDestroyed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ISDESTROYED_OFFSET))(this);
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ISACTIVE_OFFSET))(this);
		}

		::RPG::Client::Promises::Promise* ViewLoadPromise()
		{
			return ((::RPG::Client::Promises::Promise*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_VIEWLOADPROMISE_OFFSET))(this);
		}

		::UnityEngine::Camera* get_Camera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GET_CAMERA_OFFSET))(this);
		}

		::UnityEngine::Transform* get_Root()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GET_ROOT_OFFSET))(this);
		}

		::RPG::Client::UIPrefabLoader* get_PrefabLoader()
		{
			return ((::RPG::Client::UIPrefabLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GET_PREFABLOADER_OFFSET))(this);
		}

		::RPG::Client::UIContextAssetLoader* get_AssetLoader()
		{
			return ((::RPG::Client::UIContextAssetLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GET_ASSETLOADER_OFFSET))(this);
		}

		::System::String* GetEnvironmentProfilePath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GETENVIRONMENTPROFILEPATH_OFFSET))(this);
		}

		::System::Void add_OnDestroyed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ADD_ONDESTROYED_OFFSET))(this, a1);
		}

		::System::Void remove_OnDestroyed(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_REMOVE_ONDESTROYED_OFFSET))(this, a1);
		}

		::System::Void OnReloadEnvironment()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ONRELOADENVIRONMENT_OFFSET))(this);
		}

		::System::Void OnLinkedUI2DChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ONLINKEDUI2DCHANGED_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::UIController*>* GetLinkedUI2Ds()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::RPG::Client::UIController*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_GETLINKEDUI2DS_OFFSET))(this);
		}

		::System::Void OnViewSet()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ONVIEWSET_OFFSET))(this);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_DESTROY_OFFSET))(this);
		}

		::System::Void SetActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_SETACTIVE_OFFSET))(this, a1);
		}

		::System::Void ApplyCamera()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_APPLYCAMERA_OFFSET))(this);
		}

		::System::Void LoadView(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_LOADVIEW_OFFSET))(this, a1);
		}

		::UnityEngine::GameObject* InstantiateObject(::UnityEngine::GameObject* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_INSTANTIATEOBJECT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::UIAsyncPrefabLoaderProxy* AsyncLoadPrefab(::System::String* a1, ::System::Action_1<::UnityEngine::GameObject*>* a2, ::UnityEngine::Transform* a3)
		{
			return ((::RPG::Client::UIAsyncPrefabLoaderProxy*(*)(::PVOID, ::System::String*, ::System::Action_1<::UnityEngine::GameObject*>*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADPREFAB_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* SyncLoadPrefab(::System::String* a1, ::UnityEngine::Transform* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::String*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_SYNCLOADPREFAB_OFFSET))(this, a1, a2);
		}

		::System::Void DestroyObject(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_DESTROYOBJECT_OFFSET))(this, a1, a2);
		}

		::System::Void AsyncLoadSpriteTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADSPRITETO_OFFSET))(this, a1, a2);
		}

		::System::Void AsyncLoadMaterialTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADMATERIALTO_OFFSET))(this, a1, a2);
		}

		::System::Void AsyncLoadTextureTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_ASYNCLOADTEXTURETO_OFFSET))(this, a1, a2);
		}

		::System::Void LoadSpriteTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_LOADSPRITETO_OFFSET))(this, a1, a2);
		}

		::System::Void LoadMaterialTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_LOADMATERIALTO_OFFSET))(this, a1, a2);
		}

		::System::Void LoadTextureTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_LOADTEXTURETO_OFFSET))(this, a1, a2);
		}

		::System::Void OverrideDOFConfig(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_OVERRIDEDOFCONFIG_OFFSET))(this, a1);
		}

		::System::Void SetDOFEnable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_SETDOFENABLE_OFFSET))(this, a1);
		}

		::System::Void Tick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE_TICK_OFFSET))(this, a1);
		}

		::System::Void _AddTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ADDTICK_OFFSET))(this);
		}

		::System::Void _RemoveTick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__REMOVETICK_OFFSET))(this);
		}

		::System::Void _AddNotifyHandler(::RPG::Client::NotifyGroup a1, ::RPG::Client::NotifyType a2, ::RPG::Client::NotifyHandler* a3)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::NotifyGroup, ::RPG::Client::NotifyType, ::RPG::Client::NotifyHandler*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ADDNOTIFYHANDLER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _RemoveNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__REMOVENOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnLoad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ONLOAD_OFFSET))(this);
		}

		::System::Void _OnDispose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ONDISPOSE_OFFSET))(this);
		}

		::System::Void _AddHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ADDHANDLERS_OFFSET))(this);
		}

		::System::Void _SetupView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__SETUPVIEW_OFFSET))(this);
		}

		::System::Void _OnActiveChange(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ONACTIVECHANGE_OFFSET))(this, a1);
		}

		::System::Void _OnTick(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ONTICK_OFFSET))(this, a1);
		}

		::System::Void _OnUIScreenSizeChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ONUISCREENSIZECHANGED_OFFSET))(this);
		}

		::System::Void _SetRootActive(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__SETROOTACTIVE_OFFSET))(this, a1);
		}

		::System::Void _SetTickable(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__SETTICKABLE_OFFSET))(this, a1);
		}

		::System::Void _ReleaseVolumeProfile()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__RELEASEVOLUMEPROFILE_OFFSET))(this);
		}

		::System::Void _ReleaseView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__RELEASEVIEW_OFFSET))(this);
		}

		::System::Void _OnViewLoaded(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ONVIEWLOADED_OFFSET))(this, a1);
		}

		::System::Void _RaiseDestroyed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__RAISEDESTROYED_OFFSET))(this);
		}

		static ::System::Void _ResolvePromise(::RPG::Client::Promises::Promise* a1)
		{
			return ((::System::Void(*)(::RPG::Client::Promises::Promise*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__RESOLVEPROMISE_OFFSET))(a1);
		}

		::System::Void _BindRoot(::UnityEngine::Transform* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__BINDROOT_OFFSET))(this, a1);
		}

		::UnityEngine::Camera* _FindSourceCamera()
		{
			return ((::UnityEngine::Camera*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__FINDSOURCECAMERA_OFFSET))(this);
		}

		::System::Void _BindCamera(::UnityEngine::Camera* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Camera*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__BINDCAMERA_OFFSET))(this, a1);
		}

		::System::Void _InitCanvas(::UnityEngine::Canvas* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Canvas*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__INITCANVAS_OFFSET))(this, a1);
		}

		::System::Void _InitInControl()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__INITINCONTROL_OFFSET))(this);
		}

		::System::Void _UpdateInControlTopUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__UPDATEINCONTROLTOPUI_OFFSET))(this);
		}

		::System::Void _AddLayoutNotifyHandlers()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ADDLAYOUTNOTIFYHANDLERS_OFFSET))(this);
		}

		::System::Void _OnUIScreenSizeChangedNotify(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__ONUISCREENSIZECHANGEDNOTIFY_OFFSET))(this, a1);
		}

		::System::Void _LoadView_b__46_0(::UnityEngine::GameObject* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DCONTROLLERBASE__LOADVIEW_B__46_0_OFFSET))(this, a1);
		}

	};
}
