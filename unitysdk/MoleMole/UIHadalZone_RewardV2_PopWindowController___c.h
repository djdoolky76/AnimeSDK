#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class NOAHNKGLKKG;
namespace System { template <typename T> class Comparison_1; }

#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x184DC280)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x184DC2C0)
#define MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C___UPDATEREWARDS_B__12_0_OFFSET UNITYSDK_OFFSET(0x184DC2D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_RewardV2_PopWindowController___c_TypeDefinitionIndex = 47814;

	class UIHadalZone_RewardV2_PopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RewardV2_PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C220);
		}
		static ::System::Comparison_1<::NOAHNKGLKKG*>** StaticGet___9__12_0()
		{
			return (::System::Comparison_1<::NOAHNKGLKKG*>**)Il2CppClass::FromTypeDefinitionIndex(UIHadalZone_RewardV2_PopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x3C228);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __UpdateRewards_b__12_0(::NOAHNKGLKKG* l, ::NOAHNKGLKKG* r)
		{
			return ((::System::Int32(*)(::PVOID, ::NOAHNKGLKKG*, ::NOAHNKGLKKG*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_REWARDV2_POPWINDOWCONTROLLER___C___UPDATEREWARDS_B__12_0_OFFSET))(this, l, r);
		}
	};
}
