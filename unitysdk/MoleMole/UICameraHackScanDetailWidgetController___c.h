#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19199760)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x191997A0)
#define MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__REFRESHVIEW_B__18_0_OFFSET UNITYSDK_OFFSET(0x191997B0)

namespace MoleMole
{
	inline static constexpr unsigned int UICameraHackScanDetailWidgetController___c_TypeDefinitionIndex = 85784;

	class UICameraHackScanDetailWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::UnityEngine::UI::Extension::UILocalizationText*>** StaticGet___9__18_0()
		{
			return (::System::Action_1<::UnityEngine::UI::Extension::UILocalizationText*>**)Il2CppClass::FromTypeDefinitionIndex(UICameraHackScanDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35120);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UICameraHackScanDetailWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshView_b__18_0(::UnityEngine::UI::Extension::UILocalizationText* content)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UILocalizationText*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICAMERAHACKSCANDETAILWIDGETCONTROLLER___C__REFRESHVIEW_B__18_0_OFFSET))(this, content);
		}
	};
}
