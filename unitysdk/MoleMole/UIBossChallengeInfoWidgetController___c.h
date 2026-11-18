#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class UIGeneralHeadRowWidgetController; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19FAFC10)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19FAFC50)
#define MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__REFRESHROLES_B__29_0_OFFSET UNITYSDK_OFFSET(0x19FAFC60)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengeInfoWidgetController___c_TypeDefinitionIndex = 48206;

	class UIBossChallengeInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>** StaticGet___9__29_0()
		{
			return (::System::Action_1<::MoleMole::UIGeneralHeadRowWidgetController*>**)Il2CppClass::FromTypeDefinitionIndex(UIBossChallengeInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38CC0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBossChallengeInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38CC8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshRoles_b__29_0(::MoleMole::UIGeneralHeadRowWidgetController* widget)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralHeadRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEINFOWIDGETCONTROLLER___C__REFRESHROLES_B__29_0_OFFSET))(this, widget);
		}
	};
}
