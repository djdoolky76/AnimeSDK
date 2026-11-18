#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x14C96E50)
#define MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER___C__CLOSEUI_B__28_0_OFFSET UNITYSDK_OFFSET(0x14C96EA0)
#define MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x14C96E90)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityPhotoPopWindowController___c_TypeDefinitionIndex = 86412;

	class UIMainCityPhotoPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__28_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityPhotoPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F130);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMainCityPhotoPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3F138);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _CloseUI_b__28_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYPHOTOPOPWINDOWCONTROLLER___C__CLOSEUI_B__28_0_OFFSET))(this);
		}
	};
}
