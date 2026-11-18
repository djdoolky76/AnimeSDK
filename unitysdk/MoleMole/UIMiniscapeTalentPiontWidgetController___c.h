#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIMINISCAPETALENTPIONTWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1674E170)
#define MOLEMOLE_UIMINISCAPETALENTPIONTWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1674E1B0)
#define MOLEMOLE_UIMINISCAPETALENTPIONTWIDGETCONTROLLER___C__PLAYRESETSTATEANIMATION_B__24_0_OFFSET UNITYSDK_OFFSET(0x1674E1C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMiniscapeTalentPiontWidgetController___c_TypeDefinitionIndex = 77454;

	class UIMiniscapeTalentPiontWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__24_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIMiniscapeTalentPiontWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45120);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIMiniscapeTalentPiontWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x45128);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPIONTWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPIONTWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PlayResetStateAnimation_b__24_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMINISCAPETALENTPIONTWIDGETCONTROLLER___C__PLAYRESETSTATEANIMATION_B__24_0_OFFSET))(this);
		}
	};
}
