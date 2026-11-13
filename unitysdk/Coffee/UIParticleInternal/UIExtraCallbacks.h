#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2Int.h"
namespace Coffee::UIParticleInternal { class FastAction; }
namespace System { class Action; }

#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x2081A910)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONBEFORECANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x2081DFB0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONLATEAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x2081C690)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x2081E130)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_CCTOR_OFFSET UNITYSDK_OFFSET(0x2081DB40)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_INITIALIZEAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x2081E220)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_INITIALIZEONLOAD_OFFSET UNITYSDK_OFFSET(0x2081E3C0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ONAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x2081E600)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ONBEFORECANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x2081E4C0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x2081E0A0)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONBEFORECANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x2081E010)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONLATEAFTERCANVASREBUILD_OFFSET UNITYSDK_OFFSET(0x2081DF20)
#define COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONSCREENSIZECHANGED_OFFSET UNITYSDK_OFFSET(0x2081E190)

namespace Coffee::UIParticleInternal
{
	inline static constexpr unsigned int UIExtraCallbacks_TypeDefinitionIndex = 40857;

	class UIExtraCallbacks : public ::System::Object
	{
	public:
		static ::Coffee::UIParticleInternal::FastAction** StaticGet_s_BeforeCanvasRebuildAction()
		{
			return (::Coffee::UIParticleInternal::FastAction**)UnitySDK::FromName("Coffee.UIParticleInternal", "UIExtraCallbacks")->GetStaticField(0xC30);
		}

		static ::Coffee::UIParticleInternal::FastAction** StaticGet_s_AfterCanvasRebuildAction()
		{
			return (::Coffee::UIParticleInternal::FastAction**)UnitySDK::FromName("Coffee.UIParticleInternal", "UIExtraCallbacks")->GetStaticField(0xC38);
		}

		static ::Coffee::UIParticleInternal::FastAction** StaticGet_s_OnScreenSizeChangedAction()
		{
			return (::Coffee::UIParticleInternal::FastAction**)UnitySDK::FromName("Coffee.UIParticleInternal", "UIExtraCallbacks")->GetStaticField(0xC40);
		}

		static ::Coffee::UIParticleInternal::FastAction** StaticGet_s_LateAfterCanvasRebuildAction()
		{
			return (::Coffee::UIParticleInternal::FastAction**)UnitySDK::FromName("Coffee.UIParticleInternal", "UIExtraCallbacks")->GetStaticField(0xC48);
		}

		static ::System::Boolean* StaticGet_s_IsInitializedAfterCanvasRebuild()
		{
			return (::System::Boolean*)UnitySDK::FromName("Coffee.UIParticleInternal", "UIExtraCallbacks")->GetStaticField(0x640);
		}

		static ::UnityEngine::Vector2Int* StaticGet_s_LastScreenSize()
		{
			return (::UnityEngine::Vector2Int*)UnitySDK::FromName("Coffee.UIParticleInternal", "UIExtraCallbacks")->GetStaticField(0x644);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_CCTOR_OFFSET))();
		}

		static ::System::Void add_onLateAfterCanvasRebuild(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONLATEAFTERCANVASREBUILD_OFFSET))(a1);
		}

		static ::System::Void remove_onLateAfterCanvasRebuild(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONLATEAFTERCANVASREBUILD_OFFSET))(a1);
		}

		static ::System::Void add_onBeforeCanvasRebuild(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONBEFORECANVASREBUILD_OFFSET))(a1);
		}

		static ::System::Void remove_onBeforeCanvasRebuild(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONBEFORECANVASREBUILD_OFFSET))(a1);
		}

		static ::System::Void add_onAfterCanvasRebuild(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONAFTERCANVASREBUILD_OFFSET))(a1);
		}

		static ::System::Void remove_onAfterCanvasRebuild(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONAFTERCANVASREBUILD_OFFSET))(a1);
		}

		static ::System::Void add_onScreenSizeChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ADD_ONSCREENSIZECHANGED_OFFSET))(a1);
		}

		static ::System::Void remove_onScreenSizeChanged(::System::Action* a1)
		{
			return ((::System::Void(*)(::System::Action*))((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_REMOVE_ONSCREENSIZECHANGED_OFFSET))(a1);
		}

		static ::System::Void InitializeAfterCanvasRebuild()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_INITIALIZEAFTERCANVASREBUILD_OFFSET))();
		}

		static ::System::Void InitializeOnLoad()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_INITIALIZEONLOAD_OFFSET))();
		}

		static ::System::Void OnBeforeCanvasRebuild()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ONBEFORECANVASREBUILD_OFFSET))();
		}

		static ::System::Void OnAfterCanvasRebuild()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + COFFEE_UIPARTICLEINTERNAL_UIEXTRACALLBACKS_ONAFTERCANVASREBUILD_OFFSET))();
		}

	};
}
