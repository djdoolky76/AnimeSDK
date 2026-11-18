#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { template <typename T> class Action_1; }
template <typename T> class KNLFLMMHALL_1;

#define MOLEMOLE_UIINLEVELPAUSE_CAMPIDLEBATTLE_BATTLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x182DC7C0)
#define MOLEMOLE_UIINLEVELPAUSE_CAMPIDLEBATTLE_BATTLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x182DC800)
#define MOLEMOLE_UIINLEVELPAUSE_CAMPIDLEBATTLE_BATTLEINFOWIDGETCONTROLLER___C___UPDATECAMPIDLEDESC_B__3_0_OFFSET UNITYSDK_OFFSET(0x182DC810)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelPause_CampIdleBattle_BattleInfoWidgetController___c_TypeDefinitionIndex = 92399;

	class UIInLevelPause_CampIdleBattle_BattleInfoWidgetController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPause_CampIdleBattle_BattleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42230);
		}
		static ::System::Action_1<::KNLFLMMHALL_1<::System::Object*>*>** StaticGet___9__3_0()
		{
			return (::System::Action_1<::KNLFLMMHALL_1<::System::Object*>*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelPause_CampIdleBattle_BattleInfoWidgetController___c_TypeDefinitionIndex)->GetStaticField(0x42238);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_CAMPIDLEBATTLE_BATTLEINFOWIDGETCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_CAMPIDLEBATTLE_BATTLEINFOWIDGETCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void __UpdateCampIdleDesc_b__3_0(::KNLFLMMHALL_1<::System::Object*>* t)
		{
			return ((::System::Void(*)(::PVOID, ::KNLFLMMHALL_1<::System::Object*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELPAUSE_CAMPIDLEBATTLE_BATTLEINFOWIDGETCONTROLLER___C___UPDATECAMPIDLEDESC_B__3_0_OFFSET))(this, t);
		}
	};
}
