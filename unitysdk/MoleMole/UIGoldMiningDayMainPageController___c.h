#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class ALKDLMOOFDO;
namespace System { template <typename T> class Action_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x18C54490)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x18C544D0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DEALFRIENDINVITEMSG_B__21_0_OFFSET UNITYSDK_OFFSET(0x18C54760)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DEALFRIENDINVITEMSG_B__21_1_OFFSET UNITYSDK_OFFSET(0x18C547C0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__ONUIINIT_B__10_0_OFFSET UNITYSDK_OFFSET(0x18C544E0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__25_0_OFFSET UNITYSDK_OFFSET(0x18C547D0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__25_1_OFFSET UNITYSDK_OFFSET(0x18C54830)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayMainPageController___c_TypeDefinitionIndex = 69630;

	class UIGoldMiningDayMainPageController___c : public ::System::Object
	{
	public:
		static ::System::Action_1<::System::Int32>** StaticGet___9__21_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x35260);
		}
		static ::System::Action_1<::System::Int32>** StaticGet___9__25_1()
		{
			return (::System::Action_1<::System::Int32>**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x35268);
		}
		static ::System::Action_1<::ALKDLMOOFDO*>** StaticGet___9__25_0()
		{
			return (::System::Action_1<::ALKDLMOOFDO*>**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x35270);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x35278);
		}
		static ::UnityEngine::Events::UnityAction** StaticGet___9__10_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x35280);
		}
		static ::System::Action_1<::ALKDLMOOFDO*>** StaticGet___9__21_0()
		{
			return (::System::Action_1<::ALKDLMOOFDO*>**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayMainPageController___c_TypeDefinitionIndex)->GetStaticField(0x35288);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__ONUIINIT_B__10_0_OFFSET))(this);
		}

		::System::Void _DealFriendInviteMsg_b__21_0(::ALKDLMOOFDO* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::ALKDLMOOFDO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DEALFRIENDINVITEMSG_B__21_0_OFFSET))(this, roomInfo);
		}

		::System::Void _DealFriendInviteMsg_b__21_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__DEALFRIENDINVITEMSG_B__21_1_OFFSET))(this, _);
		}

		::System::Void _TryJoinMarcelAdventure_b__25_0(::ALKDLMOOFDO* roomInfo)
		{
			return ((::System::Void(*)(::PVOID, ::ALKDLMOOFDO*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__25_0_OFFSET))(this, roomInfo);
		}

		::System::Void _TryJoinMarcelAdventure_b__25_1(::System::Int32 _)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___C__TRYJOINMARCELADVENTURE_B__25_1_OFFSET))(this, _);
		}
	};
}
