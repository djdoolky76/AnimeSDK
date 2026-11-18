#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIPostGirlItemWidgetController.h"

namespace System { class Object; }

#define MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER_JLKGKLPIBBE_OFFSET UNITYSDK_OFFSET(0x19D33B40)
#define MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19D33A40)
#define MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D34130)
#define MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19D34120)
#define MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x19D34140)

namespace MoleMole
{
	inline static constexpr unsigned int UIAvatarHeadWidgetController_TypeDefinitionIndex = 88725;

	class UIAvatarHeadWidgetController : public ::MoleMole::UIPostGirlItemWidgetController
	{
	public:
		static ::System::Int32* StaticGet_InUseAvatar()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(UIAvatarHeadWidgetController_TypeDefinitionIndex)->GetStaticField(0x13200);
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER__CCTOR_OFFSET))();
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void JLKGKLPIBBE(::System::Int32 LEHABHCOMGH)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAVATARHEADWIDGETCONTROLLER_JLKGKLPIBBE_OFFSET))(this, LEHABHCOMGH);
		}
	};
}
