#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A3482A0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3482E0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__ONUIINIT_B__6_5_OFFSET UNITYSDK_OFFSET(0x1A3482F0)
#define MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__ONUIINIT_B__6_6_OFFSET UNITYSDK_OFFSET(0x1A348400)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerRecordPageController___c_TypeDefinitionIndex = 48839;

	class UIBabeltowerRecordPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__6_6()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRecordPageController___c_TypeDefinitionIndex)->GetStaticField(0x3ED20);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRecordPageController___c_TypeDefinitionIndex)->GetStaticField(0x3ED28);
		}
		static ::System::Action** StaticGet___9__6_5()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRecordPageController___c_TypeDefinitionIndex)->GetStaticField(0x3ED30);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__ONUIINIT_B__6_5_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__6_6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRECORDPAGECONTROLLER___C__ONUIINIT_B__6_6_OFFSET))(this);
		}
	};
}
