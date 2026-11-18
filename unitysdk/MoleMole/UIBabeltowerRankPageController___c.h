#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BKBIDFBJPIG.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x170407A0)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x170407E0)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__ONUIINIT_B__10_2_OFFSET UNITYSDK_OFFSET(0x170407F0)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__ONUIINIT_B__10_3_OFFSET UNITYSDK_OFFSET(0x17040900)
#define MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__REFRESHAVATARLIST_B__19_0_OFFSET UNITYSDK_OFFSET(0x17040B00)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerRankPageController___c_TypeDefinitionIndex = 63013;

	class UIBabeltowerRankPageController___c : public ::System::Object
	{
	public:
		static ::System::Action** StaticGet___9__10_2()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRankPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AAC0);
		}
		static ::System::Comparison_1<::BKBIDFBJPIG>** StaticGet___9__19_0()
		{
			return (::System::Comparison_1<::BKBIDFBJPIG>**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRankPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AAC8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRankPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AAD0);
		}
		static ::System::Action** StaticGet___9__10_3()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIBabeltowerRankPageController___c_TypeDefinitionIndex)->GetStaticField(0x4AAD8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__ONUIINIT_B__10_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__ONUIINIT_B__10_3_OFFSET))(this);
		}

		::System::Int32 _RefreshAvatarList_b__19_0(::BKBIDFBJPIG a, ::BKBIDFBJPIG b)
		{
			return ((::System::Int32(*)(::PVOID, ::BKBIDFBJPIG, ::BKBIDFBJPIG))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERRANKPAGECONTROLLER___C__REFRESHAVATARLIST_B__19_0_OFFSET))(this, a, b);
		}
	};
}
