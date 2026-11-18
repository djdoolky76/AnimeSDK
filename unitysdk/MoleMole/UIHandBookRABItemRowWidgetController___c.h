#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

namespace System { template <typename T> class Action_1; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A27EC60)
#define MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A27ECA0)
#define MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__REFRESHBOSSCHALLENGEREWARD_B__39_0_OFFSET UNITYSDK_OFFSET(0x1A27ED80)
#define MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__REFRESHBUTTON_B__34_1_OFFSET UNITYSDK_OFFSET(0x1A27ECB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookRABItemRowWidgetController___c_TypeDefinitionIndex = 60897;

	class UIHandBookRABItemRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__39_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRABItemRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35370);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRABItemRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35378);
		}
		static ::System::Action_1<::System::Boolean>** StaticGet___9__34_1()
		{
			return (::System::Action_1<::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(UIHandBookRABItemRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x35380);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RefreshButton_b__34_1(::System::Boolean success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__REFRESHBUTTON_B__34_1_OFFSET))(this, success);
		}

		::System::Int32 _RefreshBossChallengeReward_b__39_0(::DEDDPKGLKHI_LODLFMBCLAH a, ::DEDDPKGLKHI_LODLFMBCLAH b)
		{
			return ((::System::Int32(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKRABITEMROWWIDGETCONTROLLER___C__REFRESHBOSSCHALLENGEREWARD_B__39_0_OFFSET))(this, a, b);
		}
	};
}
