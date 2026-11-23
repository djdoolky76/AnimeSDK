#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace TapTap::Sdk { class UIAnimator_Action; }

#define TAPTAP_SDK_UIMANAGER_F5628F8349D4A8A6_F4883DE201B43554_OFFSET UNITYSDK_OFFSET(0x1EB8060)
#define TAPTAP_SDK_UIMANAGER_F5628F8349D4A8A6__CCTOR_OFFSET UNITYSDK_OFFSET(0x3F0ED80)
#define TAPTAP_SDK_UIMANAGER_F5628F8349D4A8A6__CTOR_OFFSET UNITYSDK_OFFSET(0x1666CA0)

namespace TapTap::Sdk
{
	inline static constexpr unsigned int UIManager_F5628F8349D4A8A6_TypeDefinitionIndex = 20886;

	class UIManager_F5628F8349D4A8A6 : public ::System::Object
	{
	public:
		static ::TapTap::Sdk::UIManager_F5628F8349D4A8A6** StaticGet_AA32F971AB02398B()
		{
			return (::TapTap::Sdk::UIManager_F5628F8349D4A8A6**)Il2CppClass::FromTypeDefinitionIndex(UIManager_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::TapTap::Sdk::UIAnimator_Action** StaticGet_AD569E9A79F860BB()
		{
			return (::TapTap::Sdk::UIAnimator_Action**)Il2CppClass::FromTypeDefinitionIndex(UIManager_F5628F8349D4A8A6_TypeDefinitionIndex)->GetStaticField(0x8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER_F5628F8349D4A8A6__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER_F5628F8349D4A8A6__CTOR_OFFSET))(this);
		}

		::System::Void F4883DE201B43554()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + TAPTAP_SDK_UIMANAGER_F5628F8349D4A8A6_F4883DE201B43554_OFFSET))(this);
		}
	};
}
