#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19185790)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x191857D0)
#define MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__ONSTART_B__12_2_OFFSET UNITYSDK_OFFSET(0x191857E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangBooUAVLevelPageController___c_TypeDefinitionIndex = 74649;

	class UIBangBooUAVLevelPageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooUAVLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C060);
		}
		static ::System::Action** StaticGet___9__12_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBangBooUAVLevelPageController___c_TypeDefinitionIndex)->GetStaticField(0x3C068);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnStart_b__12_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOUAVLEVELPAGECONTROLLER___C__ONSTART_B__12_2_OFFSET))(this);
		}
	};
}
