#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class LHIPCHKEHME;
namespace System { class Action; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19845C30)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19845C70)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__ONMAINCITYBTNCLICK_B__79_0_OFFSET UNITYSDK_OFFSET(0x19845C90)
#define MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__REFRESHSHOPBTNSTATE_B__61_2_OFFSET UNITYSDK_OFFSET(0x19845C80)

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengePageController___c_TypeDefinitionIndex = 83256;

	class UIBossChallengePageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__79_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBossChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x35100);
		}
		static ::System::Func_2<::LHIPCHKEHME*, ::System::Boolean>** StaticGet___9__61_2()
		{
			return (::System::Func_2<::LHIPCHKEHME*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIBossChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x35108);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBossChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x35110);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _RefreshShopBtnState_b__61_2(::LHIPCHKEHME* good)
		{
			return ((::System::Boolean(*)(::PVOID, ::LHIPCHKEHME*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__REFRESHSHOPBTNSTATE_B__61_2_OFFSET))(this, good);
		}

		::System::Void _OnMainCityBtnClick_b__79_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBOSSCHALLENGEPAGECONTROLLER___C__ONMAINCITYBTNCLICK_B__79_0_OFFSET))(this);
		}
	};
}
