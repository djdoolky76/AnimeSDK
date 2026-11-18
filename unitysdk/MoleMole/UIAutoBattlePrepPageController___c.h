#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class COIGGAJFDBN;
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x19BACE10)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x19BACE50)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__TRYJOINABPVP_B__14_0_OFFSET UNITYSDK_OFFSET(0x19BACE60)
#define MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__TRYJOINABPVP_B__14_1_OFFSET UNITYSDK_OFFSET(0x19BACEC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattlePrepPageController___c_TypeDefinitionIndex = 72403;

	class UIAutoBattlePrepPageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Int32>** StaticGet___9__14_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x521C0);
		}
		static ::System::Action_1<::COIGGAJFDBN*>** StaticGet___9__14_0()
		{
			return (::System::Action_1<::COIGGAJFDBN*>**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x521C8);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIAutoBattlePrepPageController___c_TypeDefinitionIndex)->GetStaticField(0x521D0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _TryJoinABPVP_b__14_0(::COIGGAJFDBN* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::COIGGAJFDBN*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__TRYJOINABPVP_B__14_0_OFFSET))(this, roomInfo);
		}

		::System::Void _TryJoinABPVP_b__14_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLEPREPPAGECONTROLLER___C__TRYJOINABPVP_B__14_1_OFFSET))(this, _);
		}
	};
}
