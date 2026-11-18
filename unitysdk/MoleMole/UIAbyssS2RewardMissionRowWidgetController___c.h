#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/DEDDPKGLKHI_LODLFMBCLAH.h"

namespace System { class Action; }
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13A16710)
#define MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13A16750)
#define MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__INITREWARD_B__10_0_OFFSET UNITYSDK_OFFSET(0x13A16870)
#define MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__ONTAKEREWARDERRORHANDLE_B__7_0_OFFSET UNITYSDK_OFFSET(0x13A16760)
#define MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__ONTAKEREWARDERRORHANDLE_B__7_1_OFFSET UNITYSDK_OFFSET(0x13A16860)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2RewardMissionRowWidgetController___c_TypeDefinitionIndex = 42585;

	class UIAbyssS2RewardMissionRowWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Comparison_1<::System::Object*>** StaticGet___9__10_0()
		{
			return (::System::Comparison_1<::System::Object*>**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38A70);
		}
		static ::System::Action** StaticGet___9__7_1()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38A78);
		}
		static ::System::Action** StaticGet___9__7_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38A80);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAbyssS2RewardMissionRowWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x38A88);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnTakeRewardErrorHandle_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__ONTAKEREWARDERRORHANDLE_B__7_0_OFFSET))(this);
		}

		::System::Void _OnTakeRewardErrorHandle_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__ONTAKEREWARDERRORHANDLE_B__7_1_OFFSET))(this);
		}

		::System::Int32 _InitReward_b__10_0(::DEDDPKGLKHI_LODLFMBCLAH a, ::DEDDPKGLKHI_LODLFMBCLAH b)
		{
			return ((::System::Int32(*)(::PVOID, ::DEDDPKGLKHI_LODLFMBCLAH, ::DEDDPKGLKHI_LODLFMBCLAH))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2REWARDMISSIONROWWIDGETCONTROLLER___C__INITREWARD_B__10_0_OFFSET))(this, a, b);
		}
	};
}
