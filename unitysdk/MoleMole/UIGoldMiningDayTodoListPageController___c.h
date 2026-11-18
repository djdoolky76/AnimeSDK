#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x175A60B0)
#define MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x175A60F0)
#define MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__SETREWARDVIEW_B__13_0_OFFSET UNITYSDK_OFFSET(0x175A6100)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayTodoListPageController___c_TypeDefinitionIndex = 72864;

	class UIGoldMiningDayTodoListPageController___c : public ::System::Object
	{
	public:
		static ::UnityEngine::Events::UnityAction** StaticGet___9__13_0()
		{
			return (::UnityEngine::Events::UnityAction**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayTodoListPageController___c_TypeDefinitionIndex)->GetStaticField(0x352C0);
		}
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIGoldMiningDayTodoListPageController___c_TypeDefinitionIndex)->GetStaticField(0x352C8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _SetRewardView_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYTODOLISTPAGECONTROLLER___C__SETREWARDVIEW_B__13_0_OFFSET))(this);
		}
	};
}
