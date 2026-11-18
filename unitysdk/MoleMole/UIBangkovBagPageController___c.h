#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x16EADE60)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x16EADEA0)
#define MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__PICKITEM_B__43_0_OFFSET UNITYSDK_OFFSET(0x16EADEB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangkovBagPageController___c_TypeDefinitionIndex = 54342;

	class UIBangkovBagPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__43_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovBagPageController___c_TypeDefinitionIndex)->GetStaticField(0x4C310);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBangkovBagPageController___c_TypeDefinitionIndex)->GetStaticField(0x4C318);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _PickItem_b__43_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGKOVBAGPAGECONTROLLER___C__PICKITEM_B__43_0_OFFSET))(this);
		}
	};
}
