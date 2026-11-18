#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }

#define MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x13AFFA90)
#define MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x13AFFAD0)
#define MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__ONSKILLBTNCLICK_B__37_0_OFFSET UNITYSDK_OFFSET(0x13AFFAE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIStrategyGuideRoleInfoPopWindowController___c_TypeDefinitionIndex = 63846;

	class UIStrategyGuideRoleInfoPopWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideRoleInfoPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FB90);
		}
		static ::System::Action** StaticGet___9__37_0()
		{
			return (::System::Action**)Il2CppClass::FromTypeDefinitionIndex(UIStrategyGuideRoleInfoPopWindowController___c_TypeDefinitionIndex)->GetStaticField(0x4FB98);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _OnSkillBtnClick_b__37_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISTRATEGYGUIDEROLEINFOPOPWINDOWCONTROLLER___C__ONSKILLBTNCLICK_B__37_0_OFFSET))(this);
		}
	};
}
