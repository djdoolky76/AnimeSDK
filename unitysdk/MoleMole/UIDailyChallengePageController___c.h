#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x191A6F20)
#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x191A6F60)
#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__GOTOTRAININGCOURSEPAGE_B__56_0_OFFSET UNITYSDK_OFFSET(0x191A6F70)
#define MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__REFRESHVIP_B__74_0_OFFSET UNITYSDK_OFFSET(0x191A7140)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyChallengePageController___c_TypeDefinitionIndex = 60768;

	class UIDailyChallengePageController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIDailyChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x3C0F0);
		}
		static ::System::Action** StaticGet___9__74_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIDailyChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x3C0F8);
		}
		static ::System::Action** StaticGet___9__56_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIDailyChallengePageController___c_TypeDefinitionIndex)->GetStaticField(0x3C100);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _GotoTrainingCoursePage_b__56_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__GOTOTRAININGCOURSEPAGE_B__56_0_OFFSET))(this);
		}

		::System::Void _RefreshVIP_b__74_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYCHALLENGEPAGECONTROLLER___C__REFRESHVIP_B__74_0_OFFSET))(this);
		}
	};
}
