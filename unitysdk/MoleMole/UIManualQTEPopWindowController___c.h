#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class DGDNKBFMHME;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1961A7D0)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1961A810)
#define MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__ONBTNCLICKED_B__8_0_OFFSET UNITYSDK_OFFSET(0x1961A820)

namespace MoleMole
{
	inline static constexpr unsigned int UIManualQTEPopWindowController___c_TypeDefinitionIndex = 58140;

	class UIManualQTEPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::DGDNKBFMHME*>** StaticGet___9__8_0()
		{
			return (::System::Action_1<::DGDNKBFMHME*>**)Il2CppClass::FromTypeDefinitionIndex(UIManualQTEPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38F80);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIManualQTEPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x38F88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnBtnClicked_b__8_0(::DGDNKBFMHME* vp)
		{
			return ((::System::Void(*)(::PVOID, ::DGDNKBFMHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMANUALQTEPOPWINDOWCONTROLLER___C__ONBTNCLICKED_B__8_0_OFFSET))(this, vp);
		}
	};
}
