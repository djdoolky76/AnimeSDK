#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
namespace RPG::Client { class IAssetOperation; }
namespace RPG::Client { class OnAssetOperationDelegate; }
namespace RPG::Client { template <typename T> class FlagSwitch_1; }
namespace System { class Action; }
namespace System { class Object; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Object; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Image; }

#define RPG_CLIENT_UICONTEXTASSETLOADER_AFTERFLAGPUSHED_OFFSET UNITYSDK_OFFSET(0x1A1070D0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADMATERIALTO_OFFSET UNITYSDK_OFFSET(0x1A105BC0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADSPRITETO_OFFSET UNITYSDK_OFFSET(0x1A105560)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADTEXTURETO_OFFSET UNITYSDK_OFFSET(0x1A105F40)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASEMATERIALIN_OFFSET UNITYSDK_OFFSET(0x1A105EB0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASESPRITEIN_OFFSET UNITYSDK_OFFSET(0x1A105990)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASETEXTUREIN_OFFSET UNITYSDK_OFFSET(0x1A106230)
#define RPG_CLIENT_UICONTEXTASSETLOADER_CTOR_OFFSET UNITYSDK_OFFSET(0x1A1047D0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ENABLEFLAGSWITCH_OFFSET UNITYSDK_OFFSET(0x1A107200)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ISFLAGPUSED_OFFSET UNITYSDK_OFFSET(0x1A1071A0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_LOADMATERIALTO_OFFSET UNITYSDK_OFFSET(0x1A0D3BB0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_LOADSPRITETO_OFFSET UNITYSDK_OFFSET(0x1A0D3A60)
#define RPG_CLIENT_UICONTEXTASSETLOADER_LOADTEXTURETO_OFFSET UNITYSDK_OFFSET(0x1A0D3D00)
#define RPG_CLIENT_UICONTEXTASSETLOADER_ONFLAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A107010)
#define RPG_CLIENT_UICONTEXTASSETLOADER_RELEASEALL_OFFSET UNITYSDK_OFFSET(0x1A0D4AB0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_RELEASEMATERIALIN_OFFSET UNITYSDK_OFFSET(0x1A105440)
#define RPG_CLIENT_UICONTEXTASSETLOADER_RELEASESPRITEIN_OFFSET UNITYSDK_OFFSET(0x1A1052A0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_RELEASETEXTUREIN_OFFSET UNITYSDK_OFFSET(0x1A1054D0)
#define RPG_CLIENT_UICONTEXTASSETLOADER_SETFLAGCALLBACK_OFFSET UNITYSDK_OFFSET(0x1A107080)
#define RPG_CLIENT_UICONTEXTASSETLOADER_TRYLOADEFFECTTO_OFFSET UNITYSDK_OFFSET(0x1A105050)
#define RPG_CLIENT_UICONTEXTASSETLOADER__ADDASSETTOCACHEPOOL_1_OFFSET UNITYSDK_OFFSET(0x1A105A30)
#define RPG_CLIENT_UICONTEXTASSETLOADER__ADDASSETTOCACHEPOOL_OFFSET UNITYSDK_OFFSET(0x1A104F10)
#define RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADMATERIAL_OFFSET UNITYSDK_OFFSET(0x1A106930)
#define RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADSPRITE_OFFSET UNITYSDK_OFFSET(0x1A106620)
#define RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADTEXTURE_OFFSET UNITYSDK_OFFSET(0x1A106C60)
#define RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEEFFECTPOOL_OFFSET UNITYSDK_OFFSET(0x1A104DF0)
#define RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEPOOL_1_OFFSET UNITYSDK_OFFSET(0x1A104C80)
#define RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEPOOL_OFFSET UNITYSDK_OFFSET(0x1A104B60)
#define RPG_CLIENT_UICONTEXTASSETLOADER__RELEASEONEASSETINCACHEPOOL_1_OFFSET UNITYSDK_OFFSET(0x1A1062C0)
#define RPG_CLIENT_UICONTEXTASSETLOADER__RELEASEONEASSETINCACHEPOOL_OFFSET UNITYSDK_OFFSET(0x1A105330)

namespace RPG::Client
{
	inline static constexpr unsigned int UIContextAssetLoader_TypeDefinitionIndex = 75143;

	class UIContextAssetLoader : public ::System::Object
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* _CachedMaterialInImages; // 0x10
		::System::Action* flagCallback; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* _CachedSpriteInImages; // 0x20
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* _CachedTextureInImages; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* _CachedEffect; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _AsyncCachedMaterialInImages; // 0x38
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _AsyncCachedSpriteInImages; // 0x40
		::RPG::Client::FlagSwitch_1<::System::Int64>* flagSwitch; // 0x48
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* _AsyncCachedTextureInImages; // 0x50
		// static const ::System::String* IMG_NULL_ERR_MSG; // 0x0
		// static const ::System::String* PNG_EXT; // 0x0
		// static const ::System::String* SPRITE_NULL_ERR_MSG; // 0x0
		// static const ::System::String* MAT_EXT; // 0x0
		// static const ::System::String* MAT_NULL_ERR_MSG; // 0x0
		// static const ::System::String* TEXTURE_NULL_ERR_MSG; // 0x0
		// static const ::System::String* PREFAB_EXT; // 0x0
		// static const ::System::String* PREFAB_NULL_ERR_MSG; // 0x0
		// static const ::System::String* _FLAG_FORMAT; // 0x0
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_CTOR_OFFSET))(this);
		}

		::System::Void ReleaseAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_RELEASEALL_OFFSET))(this);
		}

		::System::Void LoadSpriteTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_LOADSPRITETO_OFFSET))(this, a1, a2);
		}

		::System::Void LoadMaterialTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_LOADMATERIALTO_OFFSET))(this, a1, a2);
		}

		::System::Void LoadTextureTo(::UnityEngine::UI::Image* a1, ::System::String* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_LOADTEXTURETO_OFFSET))(this, a1, a2);
		}

		::UnityEngine::GameObject* TryLoadEffectTo(::UnityEngine::Transform* a1, ::System::String* a2)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::UnityEngine::Transform*, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_TRYLOADEFFECTTO_OFFSET))(this, a1, a2);
		}

		::System::Void ReleaseSpriteIn(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_RELEASESPRITEIN_OFFSET))(this, a1);
		}

		::System::Void ReleaseMaterialIn(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_RELEASEMATERIALIN_OFFSET))(this, a1);
		}

		::System::Void ReleaseTextureIn(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_RELEASETEXTUREIN_OFFSET))(this, a1);
		}

		::System::Void AsyncLoadSpriteTo(::UnityEngine::UI::Image* a1, ::System::String* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADSPRITETO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AsyncLoadMaterialTo(::UnityEngine::UI::Image* a1, ::System::String* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADMATERIALTO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AsyncLoadTextureTo(::UnityEngine::UI::Image* a1, ::System::String* a2, ::RPG::Client::OnAssetOperationDelegate* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::System::String*, ::RPG::Client::OnAssetOperationDelegate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCLOADTEXTURETO_OFFSET))(this, a1, a2, a3);
		}

		::System::Void AsyncReleaseSpriteIn(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASESPRITEIN_OFFSET))(this, a1);
		}

		::System::Void AsyncReleaseMaterialIn(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASEMATERIALIN_OFFSET))(this, a1);
		}

		::System::Void AsyncReleaseTextureIn(::UnityEngine::UI::Image* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ASYNCRELEASETEXTUREIN_OFFSET))(this, a1);
		}

		::System::Void _ReleaseOneAssetInCachePool(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__RELEASEONEASSETINCACHEPOOL_OFFSET))(this, a1, a2);
		}

		::System::Boolean _ReleaseOneAssetInCachePool_1(::System::Int32 a1, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__RELEASEONEASSETINCACHEPOOL_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean _OnAsyncLoadSprite(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADSPRITE_OFFSET))(this, a1);
		}

		::System::Boolean _OnAsyncLoadMaterial(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADMATERIAL_OFFSET))(this, a1);
		}

		::System::Boolean _OnAsyncLoadTexture(::RPG::Client::IAssetOperation* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::Client::IAssetOperation*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__ONASYNCLOADTEXTURE_OFFSET))(this, a1);
		}

		::System::Void _AddAssetToCachePool(::System::Int32 a1, ::UnityEngine::Object* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Object*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__ADDASSETTOCACHEPOOL_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _AddAssetToCachePool_1(::UnityEngine::UI::Image* a1, ::RPG::Client::IAssetOperation* a2, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Image*, ::RPG::Client::IAssetOperation*, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__ADDASSETTOCACHEPOOL_1_OFFSET))(this, a1, a2, a3);
		}

		::System::Void _ReleaseCachePool(::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::UnityEngine::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEPOOL_OFFSET))(this, a1);
		}

		::System::Void _ReleaseCacheEffectPool(::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEEFFECTPOOL_OFFSET))(this, a1);
		}

		::System::Void _ReleaseCachePool_1(::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Object*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER__RELEASECACHEPOOL_1_OFFSET))(this, a1);
		}

		::System::Void onFlagCallback()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ONFLAGCALLBACK_OFFSET))(this);
		}

		::System::Void SetFlagCallback(::System::Action* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_SETFLAGCALLBACK_OFFSET))(this, a1);
		}

		::System::Void AfterFlagPushed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_AFTERFLAGPUSHED_OFFSET))(this);
		}

		::System::Boolean IsFlagPused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ISFLAGPUSED_OFFSET))(this);
		}

		::System::Void EnableFlagSwitch()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UICONTEXTASSETLOADER_ENABLEFLAGSWITCH_OFFSET))(this);
		}

	};
}
