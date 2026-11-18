#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIINLEVELSKILLBUTTONDRONERECHARGECHILDWINDOWCONTROLLER___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x176D0290)
#define MOLEMOLE_UIINLEVELSKILLBUTTONDRONERECHARGECHILDWINDOWCONTROLLER___C__CTOR_OFFSET UNITYSDK_OFFSET(0x176D02D0)
#define MOLEMOLE_UIINLEVELSKILLBUTTONDRONERECHARGECHILDWINDOWCONTROLLER___C__REGISTEREVENTS_B__16_0_OFFSET UNITYSDK_OFFSET(0x176D02E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSkillButtonDroneRechargeChildWindowController___c_TypeDefinitionIndex = 72015;

	class UIInLevelSkillButtonDroneRechargeChildWindowController___c : public ::System::Object
	{
	public:
		static ::System::Object** StaticGet___9()
		{
			return (::System::Object**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSkillButtonDroneRechargeChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x48B00);
		}
		static ::System::Action_1<::System::EventArgs*>** StaticGet___9__16_0()
		{
			return (::System::Action_1<::System::EventArgs*>**)Il2CppClass::FromTypeDefinitionIndex(UIInLevelSkillButtonDroneRechargeChildWindowController___c_TypeDefinitionIndex)->GetStaticField(0x48B08);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONDRONERECHARGECHILDWINDOWCONTROLLER___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONDRONERECHARGECHILDWINDOWCONTROLLER___C__CTOR_OFFSET))(this);
		}

		::System::Void _RegisterEvents_b__16_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSKILLBUTTONDRONERECHARGECHILDWINDOWCONTROLLER___C__REGISTEREVENTS_B__16_0_OFFSET))(this, args);
		}
	};
}
