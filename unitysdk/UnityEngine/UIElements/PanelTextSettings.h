#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/TextCore/Text/TextSettings.h"
#include "unitysdk/UnityEngine/E51DE9A58D3A7BAC.h"

namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Func_1; }
namespace UnityEngine { class Font; }
namespace UnityEngine { class Object; }
namespace UnityEngine::TextCore::Text { class FontAsset; }

#define UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_B0A1191B56181B13_OFFSET UNITYSDK_OFFSET(0x426BC90)
#define UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_B23F47A54A20576C_OFFSET UNITYSDK_OFFSET(0x426BCA0)
#define UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_E986B3FE531D4FAE_OFFSET UNITYSDK_OFFSET(0x426C310)
#define UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS__CCTOR_OFFSET UNITYSDK_OFFSET(0x426C290)
#define UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS__CTOR_OFFSET UNITYSDK_OFFSET(0x426C300)

namespace UnityEngine::UIElements
{
	inline static constexpr unsigned int PanelTextSettings_TypeDefinitionIndex = 13741;

	class PanelTextSettings : public ::UnityEngine::TextCore::Text::TextSettings
	{
	public:
		static ::UnityEngine::UIElements::PanelTextSettings** StaticGet_AE5F4E601B9B3F8C()
		{
			return (::UnityEngine::UIElements::PanelTextSettings**)Il2CppClass::FromTypeDefinitionIndex(PanelTextSettings_TypeDefinitionIndex)->GetStaticField(0x0);
		}
		static ::System::Func_2<::System::String*, ::UnityEngine::Object*>** StaticGet_EEBC24D56D4968F3()
		{
			return (::System::Func_2<::System::String*, ::UnityEngine::Object*>**)Il2CppClass::FromTypeDefinitionIndex(PanelTextSettings_TypeDefinitionIndex)->GetStaticField(0x8);
		}
		static ::System::Func_1<::UnityEngine::E51DE9A58D3A7BAC>** StaticGet_AEF2794F64D6C9ED()
		{
			return (::System::Func_1<::UnityEngine::E51DE9A58D3A7BAC>**)Il2CppClass::FromTypeDefinitionIndex(PanelTextSettings_TypeDefinitionIndex)->GetStaticField(0x10);
		}
		static ::System::String** StaticGet_FB101E110B761BAF()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(PanelTextSettings_TypeDefinitionIndex)->GetStaticField(0x18);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS__CTOR_OFFSET))(this);
		}

		::UnityEngine::TextCore::Text::FontAsset* B0A1191B56181B13(::UnityEngine::Font* B1DC954065577781)
		{
			return ((::UnityEngine::TextCore::Text::FontAsset*(*)(::PVOID, ::UnityEngine::Font*))((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_B0A1191B56181B13_OFFSET))(this, B1DC954065577781);
		}

		static ::System::Void B23F47A54A20576C()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_B23F47A54A20576C_OFFSET))();
		}

		static ::UnityEngine::UIElements::PanelTextSettings* E986B3FE531D4FAE()
		{
			return ((::UnityEngine::UIElements::PanelTextSettings*(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_UIELEMENTS_PANELTEXTSETTINGS_E986B3FE531D4FAE_OFFSET))();
		}
	};
}
