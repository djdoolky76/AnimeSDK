#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UIImageMipBlur; }
namespace UnityEngine::UI::Extension { class UIImageMipBlurInactiveReleaserRunner; }

#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLURINACTIVERELEASER_ENSURERUNNER_OFFSET UNITYSDK_OFFSET(0x1E1AA470)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLURINACTIVERELEASER_TRACK_OFFSET UNITYSDK_OFFSET(0x1E1AA170)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLURINACTIVERELEASER_UNTRACK_OFFSET UNITYSDK_OFFSET(0x1E1AA710)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLURINACTIVERELEASER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1E1AAA50)
#define UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLURINACTIVERELEASER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E1AAFE0)

namespace UnityEngine::UI::Extension
{
	inline static constexpr unsigned int UIImageMipBlurInactiveReleaser_TypeDefinitionIndex = 40417;

	class UIImageMipBlurInactiveReleaser : public ::System::Object
	{
	public:
		static ::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UIImageMipBlur*>** StaticGet_s_Pending()
		{
			return (::System::Collections::Generic::List_1<::UnityEngine::UI::Extension::UIImageMipBlur*>**)Il2CppClass::FromTypeDefinitionIndex(UIImageMipBlurInactiveReleaser_TypeDefinitionIndex)->GetStaticField(0x52510);
		}
		static ::System::Collections::Generic::List_1<::System::Single>** StaticGet_s_DisabledAtRealtime()
		{
			return (::System::Collections::Generic::List_1<::System::Single>**)Il2CppClass::FromTypeDefinitionIndex(UIImageMipBlurInactiveReleaser_TypeDefinitionIndex)->GetStaticField(0x52518);
		}
		static ::UnityEngine::UI::Extension::UIImageMipBlurInactiveReleaserRunner** StaticGet_s_Runner()
		{
			return (::UnityEngine::UI::Extension::UIImageMipBlurInactiveReleaserRunner**)Il2CppClass::FromTypeDefinitionIndex(UIImageMipBlurInactiveReleaser_TypeDefinitionIndex)->GetStaticField(0x52520);
		}
		static ::System::Single* StaticGet_s_NextCheckRealtime()
		{
			return (::System::Single*)Il2CppClass::FromTypeDefinitionIndex(UIImageMipBlurInactiveReleaser_TypeDefinitionIndex)->GetStaticField(0x13D00);
		}
		// static const ::System::Single CheckIntervalSeconds; // 0x0
		// static const ::System::Single ReleaseAfterInactiveSeconds; // 0x0

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLURINACTIVERELEASER__CCTOR_OFFSET))();
		}

		static ::System::Void Track(::UnityEngine::UI::Extension::UIImageMipBlur* blur)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UIImageMipBlur*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLURINACTIVERELEASER_TRACK_OFFSET))(blur);
		}

		static ::System::Void Untrack(::UnityEngine::UI::Extension::UIImageMipBlur* blur)
		{
			return ((::System::Void(*)(::UnityEngine::UI::Extension::UIImageMipBlur*))((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLURINACTIVERELEASER_UNTRACK_OFFSET))(blur);
		}

		static ::System::Void EnsureRunner()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLURINACTIVERELEASER_ENSURERUNNER_OFFSET))();
		}

		static ::System::Void Update()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UI_EXTENSION_UIIMAGEMIPBLURINACTIVERELEASER_UPDATE_OFFSET))();
		}
	};
}
